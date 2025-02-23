import xml.etree.ElementTree as ET

def parse_function_proto(proto):
    return_type = proto.text.strip() + ' ' if proto.text else ''
    for elem in proto:
        if elem.tag == 'ptype':
            return_type += elem.text
        if elem.tail:
            return_type += elem.tail.strip()
    return_type = return_type.replace('GLAPI ', '').strip()

    name = proto.find('name').text[2:]
    name = name[0].lower() + name[1:]
    return return_type, name

def parse_param(param):
    param_type = ''
    if param.text:
        param_type += param.text.strip() + ' '
    for elem in param:
        if elem.tag == 'ptype':
            param_type += elem.text
        if elem.tail:
            param_type += elem.tail.strip()
    param_type = param_type.replace('GLAPI ', '').strip()

    pname = param.find('name').text
    return param_type, pname

def generate_gl_functions(xml_path, output_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()

    functions = []
    for command in root.findall(".//commands/command"):
        proto = command.find('proto')
        return_type, func_name = parse_function_proto(proto)

        params = []
        for param in command.findall('param'):
            ptype, pname = parse_param(param)
            if ptype == "GLenum":
                group = param.attrib.get('group', None)
                if group:
                    ptype = f"enums::{group}"

            params.append(f"{ptype} {pname}")

        # alias = command.find('alias')
        # if alias is not None:
        #     alias_name = alias.text
        #     if alias_name:
        #         name = alias_name[2:]
        #         name = name[0].lower() + name[1:]
        #         functions.append({
        #             'return_type': return_type,
        #             'name': name,
        #             'params': params,
        #             'original_name': alias_name
        #         })

        functions.append({
            'return_type': return_type,
            'name': func_name,
            'params': params,
            'original_name': command.find('proto/name').text
        })

    with open(output_path, 'w') as f:
        f.write("#pragma once\n\n")
        f.write("#include <glad/glad.h>\n")
        f.write("#include <ogl/enums.hpp>\n\n")
        f.write("namespace ogl {\n")
        f.write("namespace funcs {\n")

        for func in functions:
            params_str = ', '.join(func['params'])

            args = []
            for p in func['params']:
                pname = p.split()[-1]
                if 'enums::' in p:
                    args.append(f"static_cast<GLenum>({pname})")
                else:
                    args.append(pname)
            args_str = ', '.join(args)

            f.write(f"\n\tinline {func['return_type']} {func['name']}({params_str}) {{\n")
            f.write(f"\t\t#if defined({func['original_name']})\n")
            f.write(f"\t\t\treturn {func['original_name']}({args_str});\n")
            f.write(f"\t\t#else\n")
            f.write(f"\t\t\tstatic bool warned = false;\n")
            f.write(f"\t\t\tif (!warned) {{\n")
            f.write(f"\t\t\t\tstd::cerr << \"Warning: function \" << \"{func['original_name']}\" << \" is not supported on this platform.\" << std::endl;\n")
            f.write(f"\t\t\t\twarned = true;\n")
            f.write(f"\t\t\t}}\n")
            if func['return_type'] == 'void':
                f.write(f"\t\t\treturn;\n")
            else:
                f.write(f"\t\t\treturn 0;\n")
            f.write(f"\t\t#endif")
            f.write("\n\t}")

        f.write("\n} // namespace funcs\n")
        f.write("} // namespace ogl\n")

if __name__ == "__main__":
    generate_gl_functions("gl.xml", "include/ogl/funcs.hpp")