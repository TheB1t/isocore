import xml.etree.ElementTree as ET
from collections import defaultdict

def gl_enum_to_cpp_name(gl_name):
    if gl_name.startswith("GL_"):
        parts = gl_name[3:].split('_')
    else:
        parts = gl_name.split('_')
    return 'e' + ''.join(p.capitalize() for p in parts)

def generate_grouped_enums(xml_path, output_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()

    enums_by_group = defaultdict(list)
    for enum in root.findall(".//enums/enum"):
        if 'group' not in enum.attrib:
            continue

        gl_name = enum.attrib['name']
        group_str = enum.attrib['group']
        groups = group_str.split(',')
        for group in groups:
            enums_by_group[group].append(gl_name)

    sorted(enums_by_group.items(), key=lambda x: x[0])

    with open(output_path, 'w') as f:
        f.write(f"#pragma once\n\n")
        f.write(f"#include <glad/glad.h>\n\n")
        f.write("namespace ogl {\n")
        f.write("namespace enums {\n")

        for group, gl_names in enums_by_group.items():
            f.write(f"\n\tenum class {group} : GLenum {{\n")

            seen = set()
            for gl_name in sorted(gl_names):
                cpp_name = gl_enum_to_cpp_name(gl_name)
                if cpp_name in seen:
                    continue
                seen.add(cpp_name)

                f.write(f"\t\t#if defined({gl_name})\n")
                f.write(f"\t\t\t{cpp_name} = (GLenum){gl_name},\n")
                f.write("\t\t#endif\n")

            f.write("\t};\n")

        f.write("} // namespace enums\n")
        f.write("} // namespace ogl\n\n")

if __name__ == "__main__":
    generate_grouped_enums("gl.xml", "include/ogl/enums.hpp")