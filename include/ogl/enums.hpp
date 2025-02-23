#pragma once

#include <glad/glad.h>

namespace ogl {
namespace enums {

	enum class AttribMask : GLenum {
		#if defined(GL_ACCUM_BUFFER_BIT)
			eAccumBufferBit = (GLenum)GL_ACCUM_BUFFER_BIT,
		#endif
		#if defined(GL_ALL_ATTRIB_BITS)
			eAllAttribBits = (GLenum)GL_ALL_ATTRIB_BITS,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT)
			eColorBufferBit = (GLenum)GL_COLOR_BUFFER_BIT,
		#endif
		#if defined(GL_CURRENT_BIT)
			eCurrentBit = (GLenum)GL_CURRENT_BIT,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT)
			eDepthBufferBit = (GLenum)GL_DEPTH_BUFFER_BIT,
		#endif
		#if defined(GL_ENABLE_BIT)
			eEnableBit = (GLenum)GL_ENABLE_BIT,
		#endif
		#if defined(GL_EVAL_BIT)
			eEvalBit = (GLenum)GL_EVAL_BIT,
		#endif
		#if defined(GL_FOG_BIT)
			eFogBit = (GLenum)GL_FOG_BIT,
		#endif
		#if defined(GL_HINT_BIT)
			eHintBit = (GLenum)GL_HINT_BIT,
		#endif
		#if defined(GL_LIGHTING_BIT)
			eLightingBit = (GLenum)GL_LIGHTING_BIT,
		#endif
		#if defined(GL_LINE_BIT)
			eLineBit = (GLenum)GL_LINE_BIT,
		#endif
		#if defined(GL_LIST_BIT)
			eListBit = (GLenum)GL_LIST_BIT,
		#endif
		#if defined(GL_MULTISAMPLE_BIT)
			eMultisampleBit = (GLenum)GL_MULTISAMPLE_BIT,
		#endif
		#if defined(GL_MULTISAMPLE_BIT_3DFX)
			eMultisampleBit3dfx = (GLenum)GL_MULTISAMPLE_BIT_3DFX,
		#endif
		#if defined(GL_MULTISAMPLE_BIT_ARB)
			eMultisampleBitArb = (GLenum)GL_MULTISAMPLE_BIT_ARB,
		#endif
		#if defined(GL_MULTISAMPLE_BIT_EXT)
			eMultisampleBitExt = (GLenum)GL_MULTISAMPLE_BIT_EXT,
		#endif
		#if defined(GL_PIXEL_MODE_BIT)
			ePixelModeBit = (GLenum)GL_PIXEL_MODE_BIT,
		#endif
		#if defined(GL_POINT_BIT)
			ePointBit = (GLenum)GL_POINT_BIT,
		#endif
		#if defined(GL_POLYGON_BIT)
			ePolygonBit = (GLenum)GL_POLYGON_BIT,
		#endif
		#if defined(GL_POLYGON_STIPPLE_BIT)
			ePolygonStippleBit = (GLenum)GL_POLYGON_STIPPLE_BIT,
		#endif
		#if defined(GL_SCISSOR_BIT)
			eScissorBit = (GLenum)GL_SCISSOR_BIT,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT)
			eStencilBufferBit = (GLenum)GL_STENCIL_BUFFER_BIT,
		#endif
		#if defined(GL_TEXTURE_BIT)
			eTextureBit = (GLenum)GL_TEXTURE_BIT,
		#endif
		#if defined(GL_TRANSFORM_BIT)
			eTransformBit = (GLenum)GL_TRANSFORM_BIT,
		#endif
		#if defined(GL_VIEWPORT_BIT)
			eViewportBit = (GLenum)GL_VIEWPORT_BIT,
		#endif
	};

	enum class ClearBufferMask : GLenum {
		#if defined(GL_ACCUM_BUFFER_BIT)
			eAccumBufferBit = (GLenum)GL_ACCUM_BUFFER_BIT,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT)
			eColorBufferBit = (GLenum)GL_COLOR_BUFFER_BIT,
		#endif
		#if defined(GL_COVERAGE_BUFFER_BIT_NV)
			eCoverageBufferBitNv = (GLenum)GL_COVERAGE_BUFFER_BIT_NV,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT)
			eDepthBufferBit = (GLenum)GL_DEPTH_BUFFER_BIT,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT)
			eStencilBufferBit = (GLenum)GL_STENCIL_BUFFER_BIT,
		#endif
	};

	enum class BufferStorageMask : GLenum {
		#if defined(GL_CLIENT_STORAGE_BIT)
			eClientStorageBit = (GLenum)GL_CLIENT_STORAGE_BIT,
		#endif
		#if defined(GL_CLIENT_STORAGE_BIT_EXT)
			eClientStorageBitExt = (GLenum)GL_CLIENT_STORAGE_BIT_EXT,
		#endif
		#if defined(GL_DYNAMIC_STORAGE_BIT)
			eDynamicStorageBit = (GLenum)GL_DYNAMIC_STORAGE_BIT,
		#endif
		#if defined(GL_DYNAMIC_STORAGE_BIT_EXT)
			eDynamicStorageBitExt = (GLenum)GL_DYNAMIC_STORAGE_BIT_EXT,
		#endif
		#if defined(GL_EXTERNAL_STORAGE_BIT_NVX)
			eExternalStorageBitNvx = (GLenum)GL_EXTERNAL_STORAGE_BIT_NVX,
		#endif
		#if defined(GL_LGPU_SEPARATE_STORAGE_BIT_NVX)
			eLgpuSeparateStorageBitNvx = (GLenum)GL_LGPU_SEPARATE_STORAGE_BIT_NVX,
		#endif
		#if defined(GL_MAP_COHERENT_BIT)
			eMapCoherentBit = (GLenum)GL_MAP_COHERENT_BIT,
		#endif
		#if defined(GL_MAP_COHERENT_BIT_EXT)
			eMapCoherentBitExt = (GLenum)GL_MAP_COHERENT_BIT_EXT,
		#endif
		#if defined(GL_MAP_PERSISTENT_BIT)
			eMapPersistentBit = (GLenum)GL_MAP_PERSISTENT_BIT,
		#endif
		#if defined(GL_MAP_PERSISTENT_BIT_EXT)
			eMapPersistentBitExt = (GLenum)GL_MAP_PERSISTENT_BIT_EXT,
		#endif
		#if defined(GL_MAP_READ_BIT)
			eMapReadBit = (GLenum)GL_MAP_READ_BIT,
		#endif
		#if defined(GL_MAP_READ_BIT_EXT)
			eMapReadBitExt = (GLenum)GL_MAP_READ_BIT_EXT,
		#endif
		#if defined(GL_MAP_WRITE_BIT)
			eMapWriteBit = (GLenum)GL_MAP_WRITE_BIT,
		#endif
		#if defined(GL_MAP_WRITE_BIT_EXT)
			eMapWriteBitExt = (GLenum)GL_MAP_WRITE_BIT_EXT,
		#endif
		#if defined(GL_PER_GPU_STORAGE_BIT_NV)
			ePerGpuStorageBitNv = (GLenum)GL_PER_GPU_STORAGE_BIT_NV,
		#endif
		#if defined(GL_SPARSE_STORAGE_BIT_ARB)
			eSparseStorageBitArb = (GLenum)GL_SPARSE_STORAGE_BIT_ARB,
		#endif
	};

	enum class ClientAttribMask : GLenum {
		#if defined(GL_CLIENT_ALL_ATTRIB_BITS)
			eClientAllAttribBits = (GLenum)GL_CLIENT_ALL_ATTRIB_BITS,
		#endif
		#if defined(GL_CLIENT_PIXEL_STORE_BIT)
			eClientPixelStoreBit = (GLenum)GL_CLIENT_PIXEL_STORE_BIT,
		#endif
		#if defined(GL_CLIENT_VERTEX_ARRAY_BIT)
			eClientVertexArrayBit = (GLenum)GL_CLIENT_VERTEX_ARRAY_BIT,
		#endif
	};

	enum class ContextFlagMask : GLenum {
		#if defined(GL_CONTEXT_FLAG_DEBUG_BIT)
			eContextFlagDebugBit = (GLenum)GL_CONTEXT_FLAG_DEBUG_BIT,
		#endif
		#if defined(GL_CONTEXT_FLAG_DEBUG_BIT_KHR)
			eContextFlagDebugBitKhr = (GLenum)GL_CONTEXT_FLAG_DEBUG_BIT_KHR,
		#endif
		#if defined(GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT)
			eContextFlagForwardCompatibleBit = (GLenum)GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT,
		#endif
		#if defined(GL_CONTEXT_FLAG_NO_ERROR_BIT)
			eContextFlagNoErrorBit = (GLenum)GL_CONTEXT_FLAG_NO_ERROR_BIT,
		#endif
		#if defined(GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR)
			eContextFlagNoErrorBitKhr = (GLenum)GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR,
		#endif
		#if defined(GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT)
			eContextFlagProtectedContentBitExt = (GLenum)GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT,
		#endif
		#if defined(GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT)
			eContextFlagRobustAccessBit = (GLenum)GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT,
		#endif
		#if defined(GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB)
			eContextFlagRobustAccessBitArb = (GLenum)GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB,
		#endif
	};

	enum class ContextProfileMask : GLenum {
		#if defined(GL_CONTEXT_COMPATIBILITY_PROFILE_BIT)
			eContextCompatibilityProfileBit = (GLenum)GL_CONTEXT_COMPATIBILITY_PROFILE_BIT,
		#endif
		#if defined(GL_CONTEXT_CORE_PROFILE_BIT)
			eContextCoreProfileBit = (GLenum)GL_CONTEXT_CORE_PROFILE_BIT,
		#endif
	};

	enum class MapBufferAccessMask : GLenum {
		#if defined(GL_MAP_COHERENT_BIT)
			eMapCoherentBit = (GLenum)GL_MAP_COHERENT_BIT,
		#endif
		#if defined(GL_MAP_COHERENT_BIT_EXT)
			eMapCoherentBitExt = (GLenum)GL_MAP_COHERENT_BIT_EXT,
		#endif
		#if defined(GL_MAP_FLUSH_EXPLICIT_BIT)
			eMapFlushExplicitBit = (GLenum)GL_MAP_FLUSH_EXPLICIT_BIT,
		#endif
		#if defined(GL_MAP_FLUSH_EXPLICIT_BIT_EXT)
			eMapFlushExplicitBitExt = (GLenum)GL_MAP_FLUSH_EXPLICIT_BIT_EXT,
		#endif
		#if defined(GL_MAP_INVALIDATE_BUFFER_BIT)
			eMapInvalidateBufferBit = (GLenum)GL_MAP_INVALIDATE_BUFFER_BIT,
		#endif
		#if defined(GL_MAP_INVALIDATE_BUFFER_BIT_EXT)
			eMapInvalidateBufferBitExt = (GLenum)GL_MAP_INVALIDATE_BUFFER_BIT_EXT,
		#endif
		#if defined(GL_MAP_INVALIDATE_RANGE_BIT)
			eMapInvalidateRangeBit = (GLenum)GL_MAP_INVALIDATE_RANGE_BIT,
		#endif
		#if defined(GL_MAP_INVALIDATE_RANGE_BIT_EXT)
			eMapInvalidateRangeBitExt = (GLenum)GL_MAP_INVALIDATE_RANGE_BIT_EXT,
		#endif
		#if defined(GL_MAP_PERSISTENT_BIT)
			eMapPersistentBit = (GLenum)GL_MAP_PERSISTENT_BIT,
		#endif
		#if defined(GL_MAP_PERSISTENT_BIT_EXT)
			eMapPersistentBitExt = (GLenum)GL_MAP_PERSISTENT_BIT_EXT,
		#endif
		#if defined(GL_MAP_READ_BIT)
			eMapReadBit = (GLenum)GL_MAP_READ_BIT,
		#endif
		#if defined(GL_MAP_READ_BIT_EXT)
			eMapReadBitExt = (GLenum)GL_MAP_READ_BIT_EXT,
		#endif
		#if defined(GL_MAP_UNSYNCHRONIZED_BIT)
			eMapUnsynchronizedBit = (GLenum)GL_MAP_UNSYNCHRONIZED_BIT,
		#endif
		#if defined(GL_MAP_UNSYNCHRONIZED_BIT_EXT)
			eMapUnsynchronizedBitExt = (GLenum)GL_MAP_UNSYNCHRONIZED_BIT_EXT,
		#endif
		#if defined(GL_MAP_WRITE_BIT)
			eMapWriteBit = (GLenum)GL_MAP_WRITE_BIT,
		#endif
		#if defined(GL_MAP_WRITE_BIT_EXT)
			eMapWriteBitExt = (GLenum)GL_MAP_WRITE_BIT_EXT,
		#endif
	};

	enum class MemoryBarrierMask : GLenum {
		#if defined(GL_ALL_BARRIER_BITS)
			eAllBarrierBits = (GLenum)GL_ALL_BARRIER_BITS,
		#endif
		#if defined(GL_ALL_BARRIER_BITS_EXT)
			eAllBarrierBitsExt = (GLenum)GL_ALL_BARRIER_BITS_EXT,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BARRIER_BIT)
			eAtomicCounterBarrierBit = (GLenum)GL_ATOMIC_COUNTER_BARRIER_BIT,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BARRIER_BIT_EXT)
			eAtomicCounterBarrierBitExt = (GLenum)GL_ATOMIC_COUNTER_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_BUFFER_UPDATE_BARRIER_BIT)
			eBufferUpdateBarrierBit = (GLenum)GL_BUFFER_UPDATE_BARRIER_BIT,
		#endif
		#if defined(GL_BUFFER_UPDATE_BARRIER_BIT_EXT)
			eBufferUpdateBarrierBitExt = (GLenum)GL_BUFFER_UPDATE_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT)
			eClientMappedBufferBarrierBit = (GLenum)GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT,
		#endif
		#if defined(GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT)
			eClientMappedBufferBarrierBitExt = (GLenum)GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_COMMAND_BARRIER_BIT)
			eCommandBarrierBit = (GLenum)GL_COMMAND_BARRIER_BIT,
		#endif
		#if defined(GL_COMMAND_BARRIER_BIT_EXT)
			eCommandBarrierBitExt = (GLenum)GL_COMMAND_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_ELEMENT_ARRAY_BARRIER_BIT)
			eElementArrayBarrierBit = (GLenum)GL_ELEMENT_ARRAY_BARRIER_BIT,
		#endif
		#if defined(GL_ELEMENT_ARRAY_BARRIER_BIT_EXT)
			eElementArrayBarrierBitExt = (GLenum)GL_ELEMENT_ARRAY_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_BARRIER_BIT)
			eFramebufferBarrierBit = (GLenum)GL_FRAMEBUFFER_BARRIER_BIT,
		#endif
		#if defined(GL_FRAMEBUFFER_BARRIER_BIT_EXT)
			eFramebufferBarrierBitExt = (GLenum)GL_FRAMEBUFFER_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_PIXEL_BUFFER_BARRIER_BIT)
			ePixelBufferBarrierBit = (GLenum)GL_PIXEL_BUFFER_BARRIER_BIT,
		#endif
		#if defined(GL_PIXEL_BUFFER_BARRIER_BIT_EXT)
			ePixelBufferBarrierBitExt = (GLenum)GL_PIXEL_BUFFER_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_QUERY_BUFFER_BARRIER_BIT)
			eQueryBufferBarrierBit = (GLenum)GL_QUERY_BUFFER_BARRIER_BIT,
		#endif
		#if defined(GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV)
			eShaderGlobalAccessBarrierBitNv = (GLenum)GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV,
		#endif
		#if defined(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT)
			eShaderImageAccessBarrierBit = (GLenum)GL_SHADER_IMAGE_ACCESS_BARRIER_BIT,
		#endif
		#if defined(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT)
			eShaderImageAccessBarrierBitExt = (GLenum)GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_SHADER_STORAGE_BARRIER_BIT)
			eShaderStorageBarrierBit = (GLenum)GL_SHADER_STORAGE_BARRIER_BIT,
		#endif
		#if defined(GL_TEXTURE_FETCH_BARRIER_BIT)
			eTextureFetchBarrierBit = (GLenum)GL_TEXTURE_FETCH_BARRIER_BIT,
		#endif
		#if defined(GL_TEXTURE_FETCH_BARRIER_BIT_EXT)
			eTextureFetchBarrierBitExt = (GLenum)GL_TEXTURE_FETCH_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_TEXTURE_UPDATE_BARRIER_BIT)
			eTextureUpdateBarrierBit = (GLenum)GL_TEXTURE_UPDATE_BARRIER_BIT,
		#endif
		#if defined(GL_TEXTURE_UPDATE_BARRIER_BIT_EXT)
			eTextureUpdateBarrierBitExt = (GLenum)GL_TEXTURE_UPDATE_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BARRIER_BIT)
			eTransformFeedbackBarrierBit = (GLenum)GL_TRANSFORM_FEEDBACK_BARRIER_BIT,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT)
			eTransformFeedbackBarrierBitExt = (GLenum)GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_UNIFORM_BARRIER_BIT)
			eUniformBarrierBit = (GLenum)GL_UNIFORM_BARRIER_BIT,
		#endif
		#if defined(GL_UNIFORM_BARRIER_BIT_EXT)
			eUniformBarrierBitExt = (GLenum)GL_UNIFORM_BARRIER_BIT_EXT,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT)
			eVertexAttribArrayBarrierBit = (GLenum)GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT)
			eVertexAttribArrayBarrierBitExt = (GLenum)GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT,
		#endif
	};

	enum class OcclusionQueryEventMaskAMD : GLenum {
		#if defined(GL_QUERY_ALL_EVENT_BITS_AMD)
			eQueryAllEventBitsAmd = (GLenum)GL_QUERY_ALL_EVENT_BITS_AMD,
		#endif
		#if defined(GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD)
			eQueryDepthBoundsFailEventBitAmd = (GLenum)GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD,
		#endif
		#if defined(GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD)
			eQueryDepthFailEventBitAmd = (GLenum)GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD,
		#endif
		#if defined(GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD)
			eQueryDepthPassEventBitAmd = (GLenum)GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD,
		#endif
		#if defined(GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD)
			eQueryStencilFailEventBitAmd = (GLenum)GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD,
		#endif
	};

	enum class SyncObjectMask : GLenum {
		#if defined(GL_SYNC_FLUSH_COMMANDS_BIT)
			eSyncFlushCommandsBit = (GLenum)GL_SYNC_FLUSH_COMMANDS_BIT,
		#endif
		#if defined(GL_SYNC_FLUSH_COMMANDS_BIT_APPLE)
			eSyncFlushCommandsBitApple = (GLenum)GL_SYNC_FLUSH_COMMANDS_BIT_APPLE,
		#endif
	};

	enum class UseProgramStageMask : GLenum {
		#if defined(GL_ALL_SHADER_BITS)
			eAllShaderBits = (GLenum)GL_ALL_SHADER_BITS,
		#endif
		#if defined(GL_ALL_SHADER_BITS_EXT)
			eAllShaderBitsExt = (GLenum)GL_ALL_SHADER_BITS_EXT,
		#endif
		#if defined(GL_COMPUTE_SHADER_BIT)
			eComputeShaderBit = (GLenum)GL_COMPUTE_SHADER_BIT,
		#endif
		#if defined(GL_FRAGMENT_SHADER_BIT)
			eFragmentShaderBit = (GLenum)GL_FRAGMENT_SHADER_BIT,
		#endif
		#if defined(GL_FRAGMENT_SHADER_BIT_EXT)
			eFragmentShaderBitExt = (GLenum)GL_FRAGMENT_SHADER_BIT_EXT,
		#endif
		#if defined(GL_GEOMETRY_SHADER_BIT)
			eGeometryShaderBit = (GLenum)GL_GEOMETRY_SHADER_BIT,
		#endif
		#if defined(GL_GEOMETRY_SHADER_BIT_EXT)
			eGeometryShaderBitExt = (GLenum)GL_GEOMETRY_SHADER_BIT_EXT,
		#endif
		#if defined(GL_GEOMETRY_SHADER_BIT_OES)
			eGeometryShaderBitOes = (GLenum)GL_GEOMETRY_SHADER_BIT_OES,
		#endif
		#if defined(GL_MESH_SHADER_BIT_NV)
			eMeshShaderBitNv = (GLenum)GL_MESH_SHADER_BIT_NV,
		#endif
		#if defined(GL_TASK_SHADER_BIT_NV)
			eTaskShaderBitNv = (GLenum)GL_TASK_SHADER_BIT_NV,
		#endif
		#if defined(GL_TESS_CONTROL_SHADER_BIT)
			eTessControlShaderBit = (GLenum)GL_TESS_CONTROL_SHADER_BIT,
		#endif
		#if defined(GL_TESS_CONTROL_SHADER_BIT_EXT)
			eTessControlShaderBitExt = (GLenum)GL_TESS_CONTROL_SHADER_BIT_EXT,
		#endif
		#if defined(GL_TESS_CONTROL_SHADER_BIT_OES)
			eTessControlShaderBitOes = (GLenum)GL_TESS_CONTROL_SHADER_BIT_OES,
		#endif
		#if defined(GL_TESS_EVALUATION_SHADER_BIT)
			eTessEvaluationShaderBit = (GLenum)GL_TESS_EVALUATION_SHADER_BIT,
		#endif
		#if defined(GL_TESS_EVALUATION_SHADER_BIT_EXT)
			eTessEvaluationShaderBitExt = (GLenum)GL_TESS_EVALUATION_SHADER_BIT_EXT,
		#endif
		#if defined(GL_TESS_EVALUATION_SHADER_BIT_OES)
			eTessEvaluationShaderBitOes = (GLenum)GL_TESS_EVALUATION_SHADER_BIT_OES,
		#endif
		#if defined(GL_VERTEX_SHADER_BIT)
			eVertexShaderBit = (GLenum)GL_VERTEX_SHADER_BIT,
		#endif
		#if defined(GL_VERTEX_SHADER_BIT_EXT)
			eVertexShaderBitExt = (GLenum)GL_VERTEX_SHADER_BIT_EXT,
		#endif
	};

	enum class SubgroupSupportedFeatures : GLenum {
		#if defined(GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR)
			eSubgroupFeatureArithmeticBitKhr = (GLenum)GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR)
			eSubgroupFeatureBallotBitKhr = (GLenum)GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_BASIC_BIT_KHR)
			eSubgroupFeatureBasicBitKhr = (GLenum)GL_SUBGROUP_FEATURE_BASIC_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR)
			eSubgroupFeatureClusteredBitKhr = (GLenum)GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV)
			eSubgroupFeaturePartitionedBitNv = (GLenum)GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_QUAD_BIT_KHR)
			eSubgroupFeatureQuadBitKhr = (GLenum)GL_SUBGROUP_FEATURE_QUAD_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR)
			eSubgroupFeatureShuffleBitKhr = (GLenum)GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR)
			eSubgroupFeatureShuffleRelativeBitKhr = (GLenum)GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR,
		#endif
		#if defined(GL_SUBGROUP_FEATURE_VOTE_BIT_KHR)
			eSubgroupFeatureVoteBitKhr = (GLenum)GL_SUBGROUP_FEATURE_VOTE_BIT_KHR,
		#endif
	};

	enum class TextureStorageMaskAMD : GLenum {
		#if defined(GL_TEXTURE_STORAGE_SPARSE_BIT_AMD)
			eTextureStorageSparseBitAmd = (GLenum)GL_TEXTURE_STORAGE_SPARSE_BIT_AMD,
		#endif
	};

	enum class FragmentShaderDestMaskATI : GLenum {
		#if defined(GL_BLUE_BIT_ATI)
			eBlueBitAti = (GLenum)GL_BLUE_BIT_ATI,
		#endif
		#if defined(GL_GREEN_BIT_ATI)
			eGreenBitAti = (GLenum)GL_GREEN_BIT_ATI,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_RED_BIT_ATI)
			eRedBitAti = (GLenum)GL_RED_BIT_ATI,
		#endif
	};

	enum class FragmentShaderDestModMaskATI : GLenum {
		#if defined(GL_2X_BIT_ATI)
			e2xBitAti = (GLenum)GL_2X_BIT_ATI,
		#endif
		#if defined(GL_4X_BIT_ATI)
			e4xBitAti = (GLenum)GL_4X_BIT_ATI,
		#endif
		#if defined(GL_8X_BIT_ATI)
			e8xBitAti = (GLenum)GL_8X_BIT_ATI,
		#endif
		#if defined(GL_EIGHTH_BIT_ATI)
			eEighthBitAti = (GLenum)GL_EIGHTH_BIT_ATI,
		#endif
		#if defined(GL_HALF_BIT_ATI)
			eHalfBitAti = (GLenum)GL_HALF_BIT_ATI,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_QUARTER_BIT_ATI)
			eQuarterBitAti = (GLenum)GL_QUARTER_BIT_ATI,
		#endif
		#if defined(GL_SATURATE_BIT_ATI)
			eSaturateBitAti = (GLenum)GL_SATURATE_BIT_ATI,
		#endif
	};

	enum class FragmentShaderColorModMaskATI : GLenum {
		#if defined(GL_2X_BIT_ATI)
			e2xBitAti = (GLenum)GL_2X_BIT_ATI,
		#endif
		#if defined(GL_BIAS_BIT_ATI)
			eBiasBitAti = (GLenum)GL_BIAS_BIT_ATI,
		#endif
		#if defined(GL_COMP_BIT_ATI)
			eCompBitAti = (GLenum)GL_COMP_BIT_ATI,
		#endif
		#if defined(GL_NEGATE_BIT_ATI)
			eNegateBitAti = (GLenum)GL_NEGATE_BIT_ATI,
		#endif
	};

	enum class TraceMaskMESA : GLenum {
		#if defined(GL_TRACE_ALL_BITS_MESA)
			eTraceAllBitsMesa = (GLenum)GL_TRACE_ALL_BITS_MESA,
		#endif
		#if defined(GL_TRACE_ARRAYS_BIT_MESA)
			eTraceArraysBitMesa = (GLenum)GL_TRACE_ARRAYS_BIT_MESA,
		#endif
		#if defined(GL_TRACE_ERRORS_BIT_MESA)
			eTraceErrorsBitMesa = (GLenum)GL_TRACE_ERRORS_BIT_MESA,
		#endif
		#if defined(GL_TRACE_OPERATIONS_BIT_MESA)
			eTraceOperationsBitMesa = (GLenum)GL_TRACE_OPERATIONS_BIT_MESA,
		#endif
		#if defined(GL_TRACE_PIXELS_BIT_MESA)
			eTracePixelsBitMesa = (GLenum)GL_TRACE_PIXELS_BIT_MESA,
		#endif
		#if defined(GL_TRACE_PRIMITIVES_BIT_MESA)
			eTracePrimitivesBitMesa = (GLenum)GL_TRACE_PRIMITIVES_BIT_MESA,
		#endif
		#if defined(GL_TRACE_TEXTURES_BIT_MESA)
			eTraceTexturesBitMesa = (GLenum)GL_TRACE_TEXTURES_BIT_MESA,
		#endif
	};

	enum class PathFontStyle : GLenum {
		#if defined(GL_BOLD_BIT_NV)
			eBoldBitNv = (GLenum)GL_BOLD_BIT_NV,
		#endif
		#if defined(GL_ITALIC_BIT_NV)
			eItalicBitNv = (GLenum)GL_ITALIC_BIT_NV,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
	};

	enum class PathMetricMask : GLenum {
		#if defined(GL_FONT_ASCENDER_BIT_NV)
			eFontAscenderBitNv = (GLenum)GL_FONT_ASCENDER_BIT_NV,
		#endif
		#if defined(GL_FONT_DESCENDER_BIT_NV)
			eFontDescenderBitNv = (GLenum)GL_FONT_DESCENDER_BIT_NV,
		#endif
		#if defined(GL_FONT_HAS_KERNING_BIT_NV)
			eFontHasKerningBitNv = (GLenum)GL_FONT_HAS_KERNING_BIT_NV,
		#endif
		#if defined(GL_FONT_HEIGHT_BIT_NV)
			eFontHeightBitNv = (GLenum)GL_FONT_HEIGHT_BIT_NV,
		#endif
		#if defined(GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV)
			eFontMaxAdvanceHeightBitNv = (GLenum)GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV,
		#endif
		#if defined(GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV)
			eFontMaxAdvanceWidthBitNv = (GLenum)GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV,
		#endif
		#if defined(GL_FONT_NUM_GLYPH_INDICES_BIT_NV)
			eFontNumGlyphIndicesBitNv = (GLenum)GL_FONT_NUM_GLYPH_INDICES_BIT_NV,
		#endif
		#if defined(GL_FONT_UNDERLINE_POSITION_BIT_NV)
			eFontUnderlinePositionBitNv = (GLenum)GL_FONT_UNDERLINE_POSITION_BIT_NV,
		#endif
		#if defined(GL_FONT_UNDERLINE_THICKNESS_BIT_NV)
			eFontUnderlineThicknessBitNv = (GLenum)GL_FONT_UNDERLINE_THICKNESS_BIT_NV,
		#endif
		#if defined(GL_FONT_UNITS_PER_EM_BIT_NV)
			eFontUnitsPerEmBitNv = (GLenum)GL_FONT_UNITS_PER_EM_BIT_NV,
		#endif
		#if defined(GL_FONT_X_MAX_BOUNDS_BIT_NV)
			eFontXMaxBoundsBitNv = (GLenum)GL_FONT_X_MAX_BOUNDS_BIT_NV,
		#endif
		#if defined(GL_FONT_X_MIN_BOUNDS_BIT_NV)
			eFontXMinBoundsBitNv = (GLenum)GL_FONT_X_MIN_BOUNDS_BIT_NV,
		#endif
		#if defined(GL_FONT_Y_MAX_BOUNDS_BIT_NV)
			eFontYMaxBoundsBitNv = (GLenum)GL_FONT_Y_MAX_BOUNDS_BIT_NV,
		#endif
		#if defined(GL_FONT_Y_MIN_BOUNDS_BIT_NV)
			eFontYMinBoundsBitNv = (GLenum)GL_FONT_Y_MIN_BOUNDS_BIT_NV,
		#endif
		#if defined(GL_GLYPH_HAS_KERNING_BIT_NV)
			eGlyphHasKerningBitNv = (GLenum)GL_GLYPH_HAS_KERNING_BIT_NV,
		#endif
		#if defined(GL_GLYPH_HEIGHT_BIT_NV)
			eGlyphHeightBitNv = (GLenum)GL_GLYPH_HEIGHT_BIT_NV,
		#endif
		#if defined(GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV)
			eGlyphHorizontalBearingAdvanceBitNv = (GLenum)GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV,
		#endif
		#if defined(GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV)
			eGlyphHorizontalBearingXBitNv = (GLenum)GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV,
		#endif
		#if defined(GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV)
			eGlyphHorizontalBearingYBitNv = (GLenum)GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV,
		#endif
		#if defined(GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV)
			eGlyphVerticalBearingAdvanceBitNv = (GLenum)GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV,
		#endif
		#if defined(GL_GLYPH_VERTICAL_BEARING_X_BIT_NV)
			eGlyphVerticalBearingXBitNv = (GLenum)GL_GLYPH_VERTICAL_BEARING_X_BIT_NV,
		#endif
		#if defined(GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV)
			eGlyphVerticalBearingYBitNv = (GLenum)GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV,
		#endif
		#if defined(GL_GLYPH_WIDTH_BIT_NV)
			eGlyphWidthBitNv = (GLenum)GL_GLYPH_WIDTH_BIT_NV,
		#endif
	};

	enum class PerformanceQueryCapsMaskINTEL : GLenum {
		#if defined(GL_PERFQUERY_GLOBAL_CONTEXT_INTEL)
			ePerfqueryGlobalContextIntel = (GLenum)GL_PERFQUERY_GLOBAL_CONTEXT_INTEL,
		#endif
		#if defined(GL_PERFQUERY_SINGLE_CONTEXT_INTEL)
			ePerfquerySingleContextIntel = (GLenum)GL_PERFQUERY_SINGLE_CONTEXT_INTEL,
		#endif
	};

	enum class VertexHintsMaskPGI : GLenum {
		#if defined(GL_COLOR3_BIT_PGI)
			eColor3BitPgi = (GLenum)GL_COLOR3_BIT_PGI,
		#endif
		#if defined(GL_COLOR4_BIT_PGI)
			eColor4BitPgi = (GLenum)GL_COLOR4_BIT_PGI,
		#endif
		#if defined(GL_EDGEFLAG_BIT_PGI)
			eEdgeflagBitPgi = (GLenum)GL_EDGEFLAG_BIT_PGI,
		#endif
		#if defined(GL_INDEX_BIT_PGI)
			eIndexBitPgi = (GLenum)GL_INDEX_BIT_PGI,
		#endif
		#if defined(GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI)
			eMatAmbientAndDiffuseBitPgi = (GLenum)GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI,
		#endif
		#if defined(GL_MAT_AMBIENT_BIT_PGI)
			eMatAmbientBitPgi = (GLenum)GL_MAT_AMBIENT_BIT_PGI,
		#endif
		#if defined(GL_MAT_COLOR_INDEXES_BIT_PGI)
			eMatColorIndexesBitPgi = (GLenum)GL_MAT_COLOR_INDEXES_BIT_PGI,
		#endif
		#if defined(GL_MAT_DIFFUSE_BIT_PGI)
			eMatDiffuseBitPgi = (GLenum)GL_MAT_DIFFUSE_BIT_PGI,
		#endif
		#if defined(GL_MAT_EMISSION_BIT_PGI)
			eMatEmissionBitPgi = (GLenum)GL_MAT_EMISSION_BIT_PGI,
		#endif
		#if defined(GL_MAT_SHININESS_BIT_PGI)
			eMatShininessBitPgi = (GLenum)GL_MAT_SHININESS_BIT_PGI,
		#endif
		#if defined(GL_MAT_SPECULAR_BIT_PGI)
			eMatSpecularBitPgi = (GLenum)GL_MAT_SPECULAR_BIT_PGI,
		#endif
		#if defined(GL_NORMAL_BIT_PGI)
			eNormalBitPgi = (GLenum)GL_NORMAL_BIT_PGI,
		#endif
		#if defined(GL_TEXCOORD1_BIT_PGI)
			eTexcoord1BitPgi = (GLenum)GL_TEXCOORD1_BIT_PGI,
		#endif
		#if defined(GL_TEXCOORD2_BIT_PGI)
			eTexcoord2BitPgi = (GLenum)GL_TEXCOORD2_BIT_PGI,
		#endif
		#if defined(GL_TEXCOORD3_BIT_PGI)
			eTexcoord3BitPgi = (GLenum)GL_TEXCOORD3_BIT_PGI,
		#endif
		#if defined(GL_TEXCOORD4_BIT_PGI)
			eTexcoord4BitPgi = (GLenum)GL_TEXCOORD4_BIT_PGI,
		#endif
		#if defined(GL_VERTEX23_BIT_PGI)
			eVertex23BitPgi = (GLenum)GL_VERTEX23_BIT_PGI,
		#endif
		#if defined(GL_VERTEX4_BIT_PGI)
			eVertex4BitPgi = (GLenum)GL_VERTEX4_BIT_PGI,
		#endif
	};

	enum class BufferBitQCOM : GLenum {
		#if defined(GL_COLOR_BUFFER_BIT0_QCOM)
			eColorBufferBit0Qcom = (GLenum)GL_COLOR_BUFFER_BIT0_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT1_QCOM)
			eColorBufferBit1Qcom = (GLenum)GL_COLOR_BUFFER_BIT1_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT2_QCOM)
			eColorBufferBit2Qcom = (GLenum)GL_COLOR_BUFFER_BIT2_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT3_QCOM)
			eColorBufferBit3Qcom = (GLenum)GL_COLOR_BUFFER_BIT3_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT4_QCOM)
			eColorBufferBit4Qcom = (GLenum)GL_COLOR_BUFFER_BIT4_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT5_QCOM)
			eColorBufferBit5Qcom = (GLenum)GL_COLOR_BUFFER_BIT5_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT6_QCOM)
			eColorBufferBit6Qcom = (GLenum)GL_COLOR_BUFFER_BIT6_QCOM,
		#endif
		#if defined(GL_COLOR_BUFFER_BIT7_QCOM)
			eColorBufferBit7Qcom = (GLenum)GL_COLOR_BUFFER_BIT7_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT0_QCOM)
			eDepthBufferBit0Qcom = (GLenum)GL_DEPTH_BUFFER_BIT0_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT1_QCOM)
			eDepthBufferBit1Qcom = (GLenum)GL_DEPTH_BUFFER_BIT1_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT2_QCOM)
			eDepthBufferBit2Qcom = (GLenum)GL_DEPTH_BUFFER_BIT2_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT3_QCOM)
			eDepthBufferBit3Qcom = (GLenum)GL_DEPTH_BUFFER_BIT3_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT4_QCOM)
			eDepthBufferBit4Qcom = (GLenum)GL_DEPTH_BUFFER_BIT4_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT5_QCOM)
			eDepthBufferBit5Qcom = (GLenum)GL_DEPTH_BUFFER_BIT5_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT6_QCOM)
			eDepthBufferBit6Qcom = (GLenum)GL_DEPTH_BUFFER_BIT6_QCOM,
		#endif
		#if defined(GL_DEPTH_BUFFER_BIT7_QCOM)
			eDepthBufferBit7Qcom = (GLenum)GL_DEPTH_BUFFER_BIT7_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT0_QCOM)
			eMultisampleBufferBit0Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT0_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT1_QCOM)
			eMultisampleBufferBit1Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT1_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT2_QCOM)
			eMultisampleBufferBit2Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT2_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT3_QCOM)
			eMultisampleBufferBit3Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT3_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT4_QCOM)
			eMultisampleBufferBit4Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT4_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT5_QCOM)
			eMultisampleBufferBit5Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT5_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT6_QCOM)
			eMultisampleBufferBit6Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT6_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_BUFFER_BIT7_QCOM)
			eMultisampleBufferBit7Qcom = (GLenum)GL_MULTISAMPLE_BUFFER_BIT7_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT0_QCOM)
			eStencilBufferBit0Qcom = (GLenum)GL_STENCIL_BUFFER_BIT0_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT1_QCOM)
			eStencilBufferBit1Qcom = (GLenum)GL_STENCIL_BUFFER_BIT1_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT2_QCOM)
			eStencilBufferBit2Qcom = (GLenum)GL_STENCIL_BUFFER_BIT2_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT3_QCOM)
			eStencilBufferBit3Qcom = (GLenum)GL_STENCIL_BUFFER_BIT3_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT4_QCOM)
			eStencilBufferBit4Qcom = (GLenum)GL_STENCIL_BUFFER_BIT4_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT5_QCOM)
			eStencilBufferBit5Qcom = (GLenum)GL_STENCIL_BUFFER_BIT5_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT6_QCOM)
			eStencilBufferBit6Qcom = (GLenum)GL_STENCIL_BUFFER_BIT6_QCOM,
		#endif
		#if defined(GL_STENCIL_BUFFER_BIT7_QCOM)
			eStencilBufferBit7Qcom = (GLenum)GL_STENCIL_BUFFER_BIT7_QCOM,
		#endif
	};

	enum class FoveationConfigBitQCOM : GLenum {
		#if defined(GL_FOVEATION_ENABLE_BIT_QCOM)
			eFoveationEnableBitQcom = (GLenum)GL_FOVEATION_ENABLE_BIT_QCOM,
		#endif
		#if defined(GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM)
			eFoveationScaledBinMethodBitQcom = (GLenum)GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM,
		#endif
		#if defined(GL_FOVEATION_SUBSAMPLED_LAYOUT_METHOD_BIT_QCOM)
			eFoveationSubsampledLayoutMethodBitQcom = (GLenum)GL_FOVEATION_SUBSAMPLED_LAYOUT_METHOD_BIT_QCOM,
		#endif
	};

	enum class FfdMaskSGIX : GLenum {
		#if defined(GL_GEOMETRY_DEFORMATION_BIT_SGIX)
			eGeometryDeformationBitSgix = (GLenum)GL_GEOMETRY_DEFORMATION_BIT_SGIX,
		#endif
		#if defined(GL_TEXTURE_DEFORMATION_BIT_SGIX)
			eTextureDeformationBitSgix = (GLenum)GL_TEXTURE_DEFORMATION_BIT_SGIX,
		#endif
	};

	enum class CommandOpcodesNV : GLenum {
		#if defined(GL_ALPHA_REF_COMMAND_NV)
			eAlphaRefCommandNv = (GLenum)GL_ALPHA_REF_COMMAND_NV,
		#endif
		#if defined(GL_ATTRIBUTE_ADDRESS_COMMAND_NV)
			eAttributeAddressCommandNv = (GLenum)GL_ATTRIBUTE_ADDRESS_COMMAND_NV,
		#endif
		#if defined(GL_BLEND_COLOR_COMMAND_NV)
			eBlendColorCommandNv = (GLenum)GL_BLEND_COLOR_COMMAND_NV,
		#endif
		#if defined(GL_DRAW_ARRAYS_COMMAND_NV)
			eDrawArraysCommandNv = (GLenum)GL_DRAW_ARRAYS_COMMAND_NV,
		#endif
		#if defined(GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV)
			eDrawArraysInstancedCommandNv = (GLenum)GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV,
		#endif
		#if defined(GL_DRAW_ARRAYS_STRIP_COMMAND_NV)
			eDrawArraysStripCommandNv = (GLenum)GL_DRAW_ARRAYS_STRIP_COMMAND_NV,
		#endif
		#if defined(GL_DRAW_ELEMENTS_COMMAND_NV)
			eDrawElementsCommandNv = (GLenum)GL_DRAW_ELEMENTS_COMMAND_NV,
		#endif
		#if defined(GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV)
			eDrawElementsInstancedCommandNv = (GLenum)GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV,
		#endif
		#if defined(GL_DRAW_ELEMENTS_STRIP_COMMAND_NV)
			eDrawElementsStripCommandNv = (GLenum)GL_DRAW_ELEMENTS_STRIP_COMMAND_NV,
		#endif
		#if defined(GL_ELEMENT_ADDRESS_COMMAND_NV)
			eElementAddressCommandNv = (GLenum)GL_ELEMENT_ADDRESS_COMMAND_NV,
		#endif
		#if defined(GL_FRONT_FACE_COMMAND_NV)
			eFrontFaceCommandNv = (GLenum)GL_FRONT_FACE_COMMAND_NV,
		#endif
		#if defined(GL_LINE_WIDTH_COMMAND_NV)
			eLineWidthCommandNv = (GLenum)GL_LINE_WIDTH_COMMAND_NV,
		#endif
		#if defined(GL_NOP_COMMAND_NV)
			eNopCommandNv = (GLenum)GL_NOP_COMMAND_NV,
		#endif
		#if defined(GL_POLYGON_OFFSET_COMMAND_NV)
			ePolygonOffsetCommandNv = (GLenum)GL_POLYGON_OFFSET_COMMAND_NV,
		#endif
		#if defined(GL_SCISSOR_COMMAND_NV)
			eScissorCommandNv = (GLenum)GL_SCISSOR_COMMAND_NV,
		#endif
		#if defined(GL_STENCIL_REF_COMMAND_NV)
			eStencilRefCommandNv = (GLenum)GL_STENCIL_REF_COMMAND_NV,
		#endif
		#if defined(GL_TERMINATE_SEQUENCE_COMMAND_NV)
			eTerminateSequenceCommandNv = (GLenum)GL_TERMINATE_SEQUENCE_COMMAND_NV,
		#endif
		#if defined(GL_UNIFORM_ADDRESS_COMMAND_NV)
			eUniformAddressCommandNv = (GLenum)GL_UNIFORM_ADDRESS_COMMAND_NV,
		#endif
		#if defined(GL_VIEWPORT_COMMAND_NV)
			eViewportCommandNv = (GLenum)GL_VIEWPORT_COMMAND_NV,
		#endif
	};

	enum class MapTextureFormatINTEL : GLenum {
		#if defined(GL_LAYOUT_DEFAULT_INTEL)
			eLayoutDefaultIntel = (GLenum)GL_LAYOUT_DEFAULT_INTEL,
		#endif
		#if defined(GL_LAYOUT_LINEAR_CPU_CACHED_INTEL)
			eLayoutLinearCpuCachedIntel = (GLenum)GL_LAYOUT_LINEAR_CPU_CACHED_INTEL,
		#endif
		#if defined(GL_LAYOUT_LINEAR_INTEL)
			eLayoutLinearIntel = (GLenum)GL_LAYOUT_LINEAR_INTEL,
		#endif
	};

	enum class PathCoordType : GLenum {
		#if defined(GL_ARC_TO_NV)
			eArcToNv = (GLenum)GL_ARC_TO_NV,
		#endif
		#if defined(GL_CIRCULAR_CCW_ARC_TO_NV)
			eCircularCcwArcToNv = (GLenum)GL_CIRCULAR_CCW_ARC_TO_NV,
		#endif
		#if defined(GL_CIRCULAR_CW_ARC_TO_NV)
			eCircularCwArcToNv = (GLenum)GL_CIRCULAR_CW_ARC_TO_NV,
		#endif
		#if defined(GL_CIRCULAR_TANGENT_ARC_TO_NV)
			eCircularTangentArcToNv = (GLenum)GL_CIRCULAR_TANGENT_ARC_TO_NV,
		#endif
		#if defined(GL_CLOSE_PATH_NV)
			eClosePathNv = (GLenum)GL_CLOSE_PATH_NV,
		#endif
		#if defined(GL_CONIC_CURVE_TO_NV)
			eConicCurveToNv = (GLenum)GL_CONIC_CURVE_TO_NV,
		#endif
		#if defined(GL_CUBIC_CURVE_TO_NV)
			eCubicCurveToNv = (GLenum)GL_CUBIC_CURVE_TO_NV,
		#endif
		#if defined(GL_DUP_FIRST_CUBIC_CURVE_TO_NV)
			eDupFirstCubicCurveToNv = (GLenum)GL_DUP_FIRST_CUBIC_CURVE_TO_NV,
		#endif
		#if defined(GL_DUP_LAST_CUBIC_CURVE_TO_NV)
			eDupLastCubicCurveToNv = (GLenum)GL_DUP_LAST_CUBIC_CURVE_TO_NV,
		#endif
		#if defined(GL_HORIZONTAL_LINE_TO_NV)
			eHorizontalLineToNv = (GLenum)GL_HORIZONTAL_LINE_TO_NV,
		#endif
		#if defined(GL_LARGE_CCW_ARC_TO_NV)
			eLargeCcwArcToNv = (GLenum)GL_LARGE_CCW_ARC_TO_NV,
		#endif
		#if defined(GL_LARGE_CW_ARC_TO_NV)
			eLargeCwArcToNv = (GLenum)GL_LARGE_CW_ARC_TO_NV,
		#endif
		#if defined(GL_LINE_TO_NV)
			eLineToNv = (GLenum)GL_LINE_TO_NV,
		#endif
		#if defined(GL_MOVE_TO_NV)
			eMoveToNv = (GLenum)GL_MOVE_TO_NV,
		#endif
		#if defined(GL_QUADRATIC_CURVE_TO_NV)
			eQuadraticCurveToNv = (GLenum)GL_QUADRATIC_CURVE_TO_NV,
		#endif
		#if defined(GL_RECT_NV)
			eRectNv = (GLenum)GL_RECT_NV,
		#endif
		#if defined(GL_RELATIVE_ARC_TO_NV)
			eRelativeArcToNv = (GLenum)GL_RELATIVE_ARC_TO_NV,
		#endif
		#if defined(GL_RELATIVE_CONIC_CURVE_TO_NV)
			eRelativeConicCurveToNv = (GLenum)GL_RELATIVE_CONIC_CURVE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_CUBIC_CURVE_TO_NV)
			eRelativeCubicCurveToNv = (GLenum)GL_RELATIVE_CUBIC_CURVE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_HORIZONTAL_LINE_TO_NV)
			eRelativeHorizontalLineToNv = (GLenum)GL_RELATIVE_HORIZONTAL_LINE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_LARGE_CCW_ARC_TO_NV)
			eRelativeLargeCcwArcToNv = (GLenum)GL_RELATIVE_LARGE_CCW_ARC_TO_NV,
		#endif
		#if defined(GL_RELATIVE_LARGE_CW_ARC_TO_NV)
			eRelativeLargeCwArcToNv = (GLenum)GL_RELATIVE_LARGE_CW_ARC_TO_NV,
		#endif
		#if defined(GL_RELATIVE_LINE_TO_NV)
			eRelativeLineToNv = (GLenum)GL_RELATIVE_LINE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_MOVE_TO_NV)
			eRelativeMoveToNv = (GLenum)GL_RELATIVE_MOVE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_QUADRATIC_CURVE_TO_NV)
			eRelativeQuadraticCurveToNv = (GLenum)GL_RELATIVE_QUADRATIC_CURVE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_RECT_NV)
			eRelativeRectNv = (GLenum)GL_RELATIVE_RECT_NV,
		#endif
		#if defined(GL_RELATIVE_ROUNDED_RECT2_NV)
			eRelativeRoundedRect2Nv = (GLenum)GL_RELATIVE_ROUNDED_RECT2_NV,
		#endif
		#if defined(GL_RELATIVE_ROUNDED_RECT4_NV)
			eRelativeRoundedRect4Nv = (GLenum)GL_RELATIVE_ROUNDED_RECT4_NV,
		#endif
		#if defined(GL_RELATIVE_ROUNDED_RECT8_NV)
			eRelativeRoundedRect8Nv = (GLenum)GL_RELATIVE_ROUNDED_RECT8_NV,
		#endif
		#if defined(GL_RELATIVE_ROUNDED_RECT_NV)
			eRelativeRoundedRectNv = (GLenum)GL_RELATIVE_ROUNDED_RECT_NV,
		#endif
		#if defined(GL_RELATIVE_SMALL_CCW_ARC_TO_NV)
			eRelativeSmallCcwArcToNv = (GLenum)GL_RELATIVE_SMALL_CCW_ARC_TO_NV,
		#endif
		#if defined(GL_RELATIVE_SMALL_CW_ARC_TO_NV)
			eRelativeSmallCwArcToNv = (GLenum)GL_RELATIVE_SMALL_CW_ARC_TO_NV,
		#endif
		#if defined(GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV)
			eRelativeSmoothCubicCurveToNv = (GLenum)GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV)
			eRelativeSmoothQuadraticCurveToNv = (GLenum)GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV,
		#endif
		#if defined(GL_RELATIVE_VERTICAL_LINE_TO_NV)
			eRelativeVerticalLineToNv = (GLenum)GL_RELATIVE_VERTICAL_LINE_TO_NV,
		#endif
		#if defined(GL_RESTART_PATH_NV)
			eRestartPathNv = (GLenum)GL_RESTART_PATH_NV,
		#endif
		#if defined(GL_ROUNDED_RECT2_NV)
			eRoundedRect2Nv = (GLenum)GL_ROUNDED_RECT2_NV,
		#endif
		#if defined(GL_ROUNDED_RECT4_NV)
			eRoundedRect4Nv = (GLenum)GL_ROUNDED_RECT4_NV,
		#endif
		#if defined(GL_ROUNDED_RECT8_NV)
			eRoundedRect8Nv = (GLenum)GL_ROUNDED_RECT8_NV,
		#endif
		#if defined(GL_ROUNDED_RECT_NV)
			eRoundedRectNv = (GLenum)GL_ROUNDED_RECT_NV,
		#endif
		#if defined(GL_SMALL_CCW_ARC_TO_NV)
			eSmallCcwArcToNv = (GLenum)GL_SMALL_CCW_ARC_TO_NV,
		#endif
		#if defined(GL_SMALL_CW_ARC_TO_NV)
			eSmallCwArcToNv = (GLenum)GL_SMALL_CW_ARC_TO_NV,
		#endif
		#if defined(GL_SMOOTH_CUBIC_CURVE_TO_NV)
			eSmoothCubicCurveToNv = (GLenum)GL_SMOOTH_CUBIC_CURVE_TO_NV,
		#endif
		#if defined(GL_SMOOTH_QUADRATIC_CURVE_TO_NV)
			eSmoothQuadraticCurveToNv = (GLenum)GL_SMOOTH_QUADRATIC_CURVE_TO_NV,
		#endif
		#if defined(GL_VERTICAL_LINE_TO_NV)
			eVerticalLineToNv = (GLenum)GL_VERTICAL_LINE_TO_NV,
		#endif
	};

	enum class TransformFeedbackTokenNV : GLenum {
		#if defined(GL_NEXT_BUFFER_NV)
			eNextBufferNv = (GLenum)GL_NEXT_BUFFER_NV,
		#endif
		#if defined(GL_SKIP_COMPONENTS1_NV)
			eSkipComponents1Nv = (GLenum)GL_SKIP_COMPONENTS1_NV,
		#endif
		#if defined(GL_SKIP_COMPONENTS2_NV)
			eSkipComponents2Nv = (GLenum)GL_SKIP_COMPONENTS2_NV,
		#endif
		#if defined(GL_SKIP_COMPONENTS3_NV)
			eSkipComponents3Nv = (GLenum)GL_SKIP_COMPONENTS3_NV,
		#endif
		#if defined(GL_SKIP_COMPONENTS4_NV)
			eSkipComponents4Nv = (GLenum)GL_SKIP_COMPONENTS4_NV,
		#endif
	};

	enum class TriangleListSUN : GLenum {
		#if defined(GL_REPLACE_MIDDLE_SUN)
			eReplaceMiddleSun = (GLenum)GL_REPLACE_MIDDLE_SUN,
		#endif
		#if defined(GL_REPLACE_OLDEST_SUN)
			eReplaceOldestSun = (GLenum)GL_REPLACE_OLDEST_SUN,
		#endif
		#if defined(GL_RESTART_SUN)
			eRestartSun = (GLenum)GL_RESTART_SUN,
		#endif
	};

	enum class SpecialNumbers : GLenum {
		#if defined(GL_ALL_PIXELS_AMD)
			eAllPixelsAmd = (GLenum)GL_ALL_PIXELS_AMD,
		#endif
		#if defined(GL_FALSE)
			eFalse = (GLenum)GL_FALSE,
		#endif
		#if defined(GL_INVALID_INDEX)
			eInvalidIndex = (GLenum)GL_INVALID_INDEX,
		#endif
		#if defined(GL_LUID_SIZE_EXT)
			eLuidSizeExt = (GLenum)GL_LUID_SIZE_EXT,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_NONE_OES)
			eNoneOes = (GLenum)GL_NONE_OES,
		#endif
		#if defined(GL_NO_ERROR)
			eNoError = (GLenum)GL_NO_ERROR,
		#endif
		#if defined(GL_ONE)
			eOne = (GLenum)GL_ONE,
		#endif
		#if defined(GL_TIMEOUT_IGNORED)
			eTimeoutIgnored = (GLenum)GL_TIMEOUT_IGNORED,
		#endif
		#if defined(GL_TIMEOUT_IGNORED_APPLE)
			eTimeoutIgnoredApple = (GLenum)GL_TIMEOUT_IGNORED_APPLE,
		#endif
		#if defined(GL_TRUE)
			eTrue = (GLenum)GL_TRUE,
		#endif
		#if defined(GL_UUID_SIZE_EXT)
			eUuidSizeExt = (GLenum)GL_UUID_SIZE_EXT,
		#endif
		#if defined(GL_VERSION_ES_CL_1_0)
			eVersionEsCl10 = (GLenum)GL_VERSION_ES_CL_1_0,
		#endif
		#if defined(GL_VERSION_ES_CL_1_1)
			eVersionEsCl11 = (GLenum)GL_VERSION_ES_CL_1_1,
		#endif
		#if defined(GL_VERSION_ES_CM_1_1)
			eVersionEsCm11 = (GLenum)GL_VERSION_ES_CM_1_1,
		#endif
		#if defined(GL_ZERO)
			eZero = (GLenum)GL_ZERO,
		#endif
	};

	enum class Boolean : GLenum {
		#if defined(GL_FALSE)
			eFalse = (GLenum)GL_FALSE,
		#endif
		#if defined(GL_TRUE)
			eTrue = (GLenum)GL_TRUE,
		#endif
	};

	enum class VertexShaderWriteMaskEXT : GLenum {
		#if defined(GL_FALSE)
			eFalse = (GLenum)GL_FALSE,
		#endif
		#if defined(GL_TRUE)
			eTrue = (GLenum)GL_TRUE,
		#endif
	};

	enum class ClampColorModeARB : GLenum {
		#if defined(GL_FALSE)
			eFalse = (GLenum)GL_FALSE,
		#endif
		#if defined(GL_FIXED_ONLY)
			eFixedOnly = (GLenum)GL_FIXED_ONLY,
		#endif
		#if defined(GL_FIXED_ONLY_ARB)
			eFixedOnlyArb = (GLenum)GL_FIXED_ONLY_ARB,
		#endif
		#if defined(GL_TRUE)
			eTrue = (GLenum)GL_TRUE,
		#endif
	};

	enum class GraphicsResetStatus : GLenum {
		#if defined(GL_GUILTY_CONTEXT_RESET)
			eGuiltyContextReset = (GLenum)GL_GUILTY_CONTEXT_RESET,
		#endif
		#if defined(GL_INNOCENT_CONTEXT_RESET)
			eInnocentContextReset = (GLenum)GL_INNOCENT_CONTEXT_RESET,
		#endif
		#if defined(GL_NO_ERROR)
			eNoError = (GLenum)GL_NO_ERROR,
		#endif
		#if defined(GL_UNKNOWN_CONTEXT_RESET)
			eUnknownContextReset = (GLenum)GL_UNKNOWN_CONTEXT_RESET,
		#endif
	};

	enum class ErrorCode : GLenum {
		#if defined(GL_INVALID_ENUM)
			eInvalidEnum = (GLenum)GL_INVALID_ENUM,
		#endif
		#if defined(GL_INVALID_FRAMEBUFFER_OPERATION)
			eInvalidFramebufferOperation = (GLenum)GL_INVALID_FRAMEBUFFER_OPERATION,
		#endif
		#if defined(GL_INVALID_FRAMEBUFFER_OPERATION_EXT)
			eInvalidFramebufferOperationExt = (GLenum)GL_INVALID_FRAMEBUFFER_OPERATION_EXT,
		#endif
		#if defined(GL_INVALID_FRAMEBUFFER_OPERATION_OES)
			eInvalidFramebufferOperationOes = (GLenum)GL_INVALID_FRAMEBUFFER_OPERATION_OES,
		#endif
		#if defined(GL_INVALID_OPERATION)
			eInvalidOperation = (GLenum)GL_INVALID_OPERATION,
		#endif
		#if defined(GL_INVALID_VALUE)
			eInvalidValue = (GLenum)GL_INVALID_VALUE,
		#endif
		#if defined(GL_NO_ERROR)
			eNoError = (GLenum)GL_NO_ERROR,
		#endif
		#if defined(GL_OUT_OF_MEMORY)
			eOutOfMemory = (GLenum)GL_OUT_OF_MEMORY,
		#endif
		#if defined(GL_STACK_OVERFLOW)
			eStackOverflow = (GLenum)GL_STACK_OVERFLOW,
		#endif
		#if defined(GL_STACK_UNDERFLOW)
			eStackUnderflow = (GLenum)GL_STACK_UNDERFLOW,
		#endif
		#if defined(GL_TABLE_TOO_LARGE)
			eTableTooLarge = (GLenum)GL_TABLE_TOO_LARGE,
		#endif
		#if defined(GL_TABLE_TOO_LARGE_EXT)
			eTableTooLargeExt = (GLenum)GL_TABLE_TOO_LARGE_EXT,
		#endif
		#if defined(GL_TEXTURE_TOO_LARGE_EXT)
			eTextureTooLargeExt = (GLenum)GL_TEXTURE_TOO_LARGE_EXT,
		#endif
	};

	enum class TextureSwizzle : GLenum {
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_BLUE)
			eBlue = (GLenum)GL_BLUE,
		#endif
		#if defined(GL_GREEN)
			eGreen = (GLenum)GL_GREEN,
		#endif
		#if defined(GL_ONE)
			eOne = (GLenum)GL_ONE,
		#endif
		#if defined(GL_RED)
			eRed = (GLenum)GL_RED,
		#endif
		#if defined(GL_ZERO)
			eZero = (GLenum)GL_ZERO,
		#endif
	};

	enum class StencilOp : GLenum {
		#if defined(GL_DECR)
			eDecr = (GLenum)GL_DECR,
		#endif
		#if defined(GL_DECR_WRAP)
			eDecrWrap = (GLenum)GL_DECR_WRAP,
		#endif
		#if defined(GL_INCR)
			eIncr = (GLenum)GL_INCR,
		#endif
		#if defined(GL_INCR_WRAP)
			eIncrWrap = (GLenum)GL_INCR_WRAP,
		#endif
		#if defined(GL_INVERT)
			eInvert = (GLenum)GL_INVERT,
		#endif
		#if defined(GL_KEEP)
			eKeep = (GLenum)GL_KEEP,
		#endif
		#if defined(GL_REPLACE)
			eReplace = (GLenum)GL_REPLACE,
		#endif
		#if defined(GL_ZERO)
			eZero = (GLenum)GL_ZERO,
		#endif
	};

	enum class BlendingFactor : GLenum {
		#if defined(GL_CONSTANT_ALPHA)
			eConstantAlpha = (GLenum)GL_CONSTANT_ALPHA,
		#endif
		#if defined(GL_CONSTANT_COLOR)
			eConstantColor = (GLenum)GL_CONSTANT_COLOR,
		#endif
		#if defined(GL_DST_ALPHA)
			eDstAlpha = (GLenum)GL_DST_ALPHA,
		#endif
		#if defined(GL_DST_COLOR)
			eDstColor = (GLenum)GL_DST_COLOR,
		#endif
		#if defined(GL_ONE)
			eOne = (GLenum)GL_ONE,
		#endif
		#if defined(GL_ONE_MINUS_CONSTANT_ALPHA)
			eOneMinusConstantAlpha = (GLenum)GL_ONE_MINUS_CONSTANT_ALPHA,
		#endif
		#if defined(GL_ONE_MINUS_CONSTANT_COLOR)
			eOneMinusConstantColor = (GLenum)GL_ONE_MINUS_CONSTANT_COLOR,
		#endif
		#if defined(GL_ONE_MINUS_DST_ALPHA)
			eOneMinusDstAlpha = (GLenum)GL_ONE_MINUS_DST_ALPHA,
		#endif
		#if defined(GL_ONE_MINUS_DST_COLOR)
			eOneMinusDstColor = (GLenum)GL_ONE_MINUS_DST_COLOR,
		#endif
		#if defined(GL_ONE_MINUS_SRC1_ALPHA)
			eOneMinusSrc1Alpha = (GLenum)GL_ONE_MINUS_SRC1_ALPHA,
		#endif
		#if defined(GL_ONE_MINUS_SRC1_COLOR)
			eOneMinusSrc1Color = (GLenum)GL_ONE_MINUS_SRC1_COLOR,
		#endif
		#if defined(GL_ONE_MINUS_SRC_ALPHA)
			eOneMinusSrcAlpha = (GLenum)GL_ONE_MINUS_SRC_ALPHA,
		#endif
		#if defined(GL_ONE_MINUS_SRC_COLOR)
			eOneMinusSrcColor = (GLenum)GL_ONE_MINUS_SRC_COLOR,
		#endif
		#if defined(GL_SRC1_ALPHA)
			eSrc1Alpha = (GLenum)GL_SRC1_ALPHA,
		#endif
		#if defined(GL_SRC1_COLOR)
			eSrc1Color = (GLenum)GL_SRC1_COLOR,
		#endif
		#if defined(GL_SRC_ALPHA)
			eSrcAlpha = (GLenum)GL_SRC_ALPHA,
		#endif
		#if defined(GL_SRC_ALPHA_SATURATE)
			eSrcAlphaSaturate = (GLenum)GL_SRC_ALPHA_SATURATE,
		#endif
		#if defined(GL_SRC_COLOR)
			eSrcColor = (GLenum)GL_SRC_COLOR,
		#endif
		#if defined(GL_ZERO)
			eZero = (GLenum)GL_ZERO,
		#endif
	};

	enum class FragmentShaderGenericSourceATI : GLenum {
		#if defined(GL_CON_0_ATI)
			eCon0Ati = (GLenum)GL_CON_0_ATI,
		#endif
		#if defined(GL_CON_10_ATI)
			eCon10Ati = (GLenum)GL_CON_10_ATI,
		#endif
		#if defined(GL_CON_11_ATI)
			eCon11Ati = (GLenum)GL_CON_11_ATI,
		#endif
		#if defined(GL_CON_12_ATI)
			eCon12Ati = (GLenum)GL_CON_12_ATI,
		#endif
		#if defined(GL_CON_13_ATI)
			eCon13Ati = (GLenum)GL_CON_13_ATI,
		#endif
		#if defined(GL_CON_14_ATI)
			eCon14Ati = (GLenum)GL_CON_14_ATI,
		#endif
		#if defined(GL_CON_15_ATI)
			eCon15Ati = (GLenum)GL_CON_15_ATI,
		#endif
		#if defined(GL_CON_16_ATI)
			eCon16Ati = (GLenum)GL_CON_16_ATI,
		#endif
		#if defined(GL_CON_17_ATI)
			eCon17Ati = (GLenum)GL_CON_17_ATI,
		#endif
		#if defined(GL_CON_18_ATI)
			eCon18Ati = (GLenum)GL_CON_18_ATI,
		#endif
		#if defined(GL_CON_19_ATI)
			eCon19Ati = (GLenum)GL_CON_19_ATI,
		#endif
		#if defined(GL_CON_1_ATI)
			eCon1Ati = (GLenum)GL_CON_1_ATI,
		#endif
		#if defined(GL_CON_20_ATI)
			eCon20Ati = (GLenum)GL_CON_20_ATI,
		#endif
		#if defined(GL_CON_21_ATI)
			eCon21Ati = (GLenum)GL_CON_21_ATI,
		#endif
		#if defined(GL_CON_22_ATI)
			eCon22Ati = (GLenum)GL_CON_22_ATI,
		#endif
		#if defined(GL_CON_23_ATI)
			eCon23Ati = (GLenum)GL_CON_23_ATI,
		#endif
		#if defined(GL_CON_24_ATI)
			eCon24Ati = (GLenum)GL_CON_24_ATI,
		#endif
		#if defined(GL_CON_25_ATI)
			eCon25Ati = (GLenum)GL_CON_25_ATI,
		#endif
		#if defined(GL_CON_26_ATI)
			eCon26Ati = (GLenum)GL_CON_26_ATI,
		#endif
		#if defined(GL_CON_27_ATI)
			eCon27Ati = (GLenum)GL_CON_27_ATI,
		#endif
		#if defined(GL_CON_28_ATI)
			eCon28Ati = (GLenum)GL_CON_28_ATI,
		#endif
		#if defined(GL_CON_29_ATI)
			eCon29Ati = (GLenum)GL_CON_29_ATI,
		#endif
		#if defined(GL_CON_2_ATI)
			eCon2Ati = (GLenum)GL_CON_2_ATI,
		#endif
		#if defined(GL_CON_30_ATI)
			eCon30Ati = (GLenum)GL_CON_30_ATI,
		#endif
		#if defined(GL_CON_31_ATI)
			eCon31Ati = (GLenum)GL_CON_31_ATI,
		#endif
		#if defined(GL_CON_3_ATI)
			eCon3Ati = (GLenum)GL_CON_3_ATI,
		#endif
		#if defined(GL_CON_4_ATI)
			eCon4Ati = (GLenum)GL_CON_4_ATI,
		#endif
		#if defined(GL_CON_5_ATI)
			eCon5Ati = (GLenum)GL_CON_5_ATI,
		#endif
		#if defined(GL_CON_6_ATI)
			eCon6Ati = (GLenum)GL_CON_6_ATI,
		#endif
		#if defined(GL_CON_7_ATI)
			eCon7Ati = (GLenum)GL_CON_7_ATI,
		#endif
		#if defined(GL_CON_8_ATI)
			eCon8Ati = (GLenum)GL_CON_8_ATI,
		#endif
		#if defined(GL_CON_9_ATI)
			eCon9Ati = (GLenum)GL_CON_9_ATI,
		#endif
		#if defined(GL_ONE)
			eOne = (GLenum)GL_ONE,
		#endif
		#if defined(GL_PRIMARY_COLOR)
			ePrimaryColor = (GLenum)GL_PRIMARY_COLOR,
		#endif
		#if defined(GL_PRIMARY_COLOR_ARB)
			ePrimaryColorArb = (GLenum)GL_PRIMARY_COLOR_ARB,
		#endif
		#if defined(GL_PRIMARY_COLOR_EXT)
			ePrimaryColorExt = (GLenum)GL_PRIMARY_COLOR_EXT,
		#endif
		#if defined(GL_REG_0_ATI)
			eReg0Ati = (GLenum)GL_REG_0_ATI,
		#endif
		#if defined(GL_REG_10_ATI)
			eReg10Ati = (GLenum)GL_REG_10_ATI,
		#endif
		#if defined(GL_REG_11_ATI)
			eReg11Ati = (GLenum)GL_REG_11_ATI,
		#endif
		#if defined(GL_REG_12_ATI)
			eReg12Ati = (GLenum)GL_REG_12_ATI,
		#endif
		#if defined(GL_REG_13_ATI)
			eReg13Ati = (GLenum)GL_REG_13_ATI,
		#endif
		#if defined(GL_REG_14_ATI)
			eReg14Ati = (GLenum)GL_REG_14_ATI,
		#endif
		#if defined(GL_REG_15_ATI)
			eReg15Ati = (GLenum)GL_REG_15_ATI,
		#endif
		#if defined(GL_REG_16_ATI)
			eReg16Ati = (GLenum)GL_REG_16_ATI,
		#endif
		#if defined(GL_REG_17_ATI)
			eReg17Ati = (GLenum)GL_REG_17_ATI,
		#endif
		#if defined(GL_REG_18_ATI)
			eReg18Ati = (GLenum)GL_REG_18_ATI,
		#endif
		#if defined(GL_REG_19_ATI)
			eReg19Ati = (GLenum)GL_REG_19_ATI,
		#endif
		#if defined(GL_REG_1_ATI)
			eReg1Ati = (GLenum)GL_REG_1_ATI,
		#endif
		#if defined(GL_REG_20_ATI)
			eReg20Ati = (GLenum)GL_REG_20_ATI,
		#endif
		#if defined(GL_REG_21_ATI)
			eReg21Ati = (GLenum)GL_REG_21_ATI,
		#endif
		#if defined(GL_REG_22_ATI)
			eReg22Ati = (GLenum)GL_REG_22_ATI,
		#endif
		#if defined(GL_REG_23_ATI)
			eReg23Ati = (GLenum)GL_REG_23_ATI,
		#endif
		#if defined(GL_REG_24_ATI)
			eReg24Ati = (GLenum)GL_REG_24_ATI,
		#endif
		#if defined(GL_REG_25_ATI)
			eReg25Ati = (GLenum)GL_REG_25_ATI,
		#endif
		#if defined(GL_REG_26_ATI)
			eReg26Ati = (GLenum)GL_REG_26_ATI,
		#endif
		#if defined(GL_REG_27_ATI)
			eReg27Ati = (GLenum)GL_REG_27_ATI,
		#endif
		#if defined(GL_REG_28_ATI)
			eReg28Ati = (GLenum)GL_REG_28_ATI,
		#endif
		#if defined(GL_REG_29_ATI)
			eReg29Ati = (GLenum)GL_REG_29_ATI,
		#endif
		#if defined(GL_REG_2_ATI)
			eReg2Ati = (GLenum)GL_REG_2_ATI,
		#endif
		#if defined(GL_REG_30_ATI)
			eReg30Ati = (GLenum)GL_REG_30_ATI,
		#endif
		#if defined(GL_REG_31_ATI)
			eReg31Ati = (GLenum)GL_REG_31_ATI,
		#endif
		#if defined(GL_REG_3_ATI)
			eReg3Ati = (GLenum)GL_REG_3_ATI,
		#endif
		#if defined(GL_REG_4_ATI)
			eReg4Ati = (GLenum)GL_REG_4_ATI,
		#endif
		#if defined(GL_REG_5_ATI)
			eReg5Ati = (GLenum)GL_REG_5_ATI,
		#endif
		#if defined(GL_REG_6_ATI)
			eReg6Ati = (GLenum)GL_REG_6_ATI,
		#endif
		#if defined(GL_REG_7_ATI)
			eReg7Ati = (GLenum)GL_REG_7_ATI,
		#endif
		#if defined(GL_REG_8_ATI)
			eReg8Ati = (GLenum)GL_REG_8_ATI,
		#endif
		#if defined(GL_REG_9_ATI)
			eReg9Ati = (GLenum)GL_REG_9_ATI,
		#endif
		#if defined(GL_SECONDARY_INTERPOLATOR_ATI)
			eSecondaryInterpolatorAti = (GLenum)GL_SECONDARY_INTERPOLATOR_ATI,
		#endif
		#if defined(GL_ZERO)
			eZero = (GLenum)GL_ZERO,
		#endif
	};

	enum class FragmentShaderValueRepATI : GLenum {
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_BLUE)
			eBlue = (GLenum)GL_BLUE,
		#endif
		#if defined(GL_GREEN)
			eGreen = (GLenum)GL_GREEN,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_RED)
			eRed = (GLenum)GL_RED,
		#endif
	};

	enum class SyncBehaviorFlags : GLenum {
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
	};

	enum class TextureCompareMode : GLenum {
		#if defined(GL_COMPARE_REF_TO_TEXTURE)
			eCompareRefToTexture = (GLenum)GL_COMPARE_REF_TO_TEXTURE,
		#endif
		#if defined(GL_COMPARE_R_TO_TEXTURE)
			eCompareRToTexture = (GLenum)GL_COMPARE_R_TO_TEXTURE,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
	};

	enum class PathColorFormat : GLenum {
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_INTENSITY)
			eIntensity = (GLenum)GL_INTENSITY,
		#endif
		#if defined(GL_LUMINANCE)
			eLuminance = (GLenum)GL_LUMINANCE,
		#endif
		#if defined(GL_LUMINANCE_ALPHA)
			eLuminanceAlpha = (GLenum)GL_LUMINANCE_ALPHA,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_RGB)
			eRgb = (GLenum)GL_RGB,
		#endif
		#if defined(GL_RGBA)
			eRgba = (GLenum)GL_RGBA,
		#endif
	};

	enum class CombinerBiasNV : GLenum {
		#if defined(GL_BIAS_BY_NEGATIVE_ONE_HALF_NV)
			eBiasByNegativeOneHalfNv = (GLenum)GL_BIAS_BY_NEGATIVE_ONE_HALF_NV,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
	};

	enum class CombinerScaleNV : GLenum {
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_SCALE_BY_FOUR_NV)
			eScaleByFourNv = (GLenum)GL_SCALE_BY_FOUR_NV,
		#endif
		#if defined(GL_SCALE_BY_ONE_HALF_NV)
			eScaleByOneHalfNv = (GLenum)GL_SCALE_BY_ONE_HALF_NV,
		#endif
		#if defined(GL_SCALE_BY_TWO_NV)
			eScaleByTwoNv = (GLenum)GL_SCALE_BY_TWO_NV,
		#endif
	};

	enum class DrawBufferMode : GLenum {
		#if defined(GL_AUX0)
			eAux0 = (GLenum)GL_AUX0,
		#endif
		#if defined(GL_AUX1)
			eAux1 = (GLenum)GL_AUX1,
		#endif
		#if defined(GL_AUX2)
			eAux2 = (GLenum)GL_AUX2,
		#endif
		#if defined(GL_AUX3)
			eAux3 = (GLenum)GL_AUX3,
		#endif
		#if defined(GL_BACK)
			eBack = (GLenum)GL_BACK,
		#endif
		#if defined(GL_BACK_LEFT)
			eBackLeft = (GLenum)GL_BACK_LEFT,
		#endif
		#if defined(GL_BACK_RIGHT)
			eBackRight = (GLenum)GL_BACK_RIGHT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0)
			eColorAttachment0 = (GLenum)GL_COLOR_ATTACHMENT0,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0_NV)
			eColorAttachment0Nv = (GLenum)GL_COLOR_ATTACHMENT0_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1)
			eColorAttachment1 = (GLenum)GL_COLOR_ATTACHMENT1,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10)
			eColorAttachment10 = (GLenum)GL_COLOR_ATTACHMENT10,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10_NV)
			eColorAttachment10Nv = (GLenum)GL_COLOR_ATTACHMENT10_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11)
			eColorAttachment11 = (GLenum)GL_COLOR_ATTACHMENT11,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11_NV)
			eColorAttachment11Nv = (GLenum)GL_COLOR_ATTACHMENT11_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12)
			eColorAttachment12 = (GLenum)GL_COLOR_ATTACHMENT12,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12_NV)
			eColorAttachment12Nv = (GLenum)GL_COLOR_ATTACHMENT12_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13)
			eColorAttachment13 = (GLenum)GL_COLOR_ATTACHMENT13,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13_NV)
			eColorAttachment13Nv = (GLenum)GL_COLOR_ATTACHMENT13_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14)
			eColorAttachment14 = (GLenum)GL_COLOR_ATTACHMENT14,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14_NV)
			eColorAttachment14Nv = (GLenum)GL_COLOR_ATTACHMENT14_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15)
			eColorAttachment15 = (GLenum)GL_COLOR_ATTACHMENT15,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15_NV)
			eColorAttachment15Nv = (GLenum)GL_COLOR_ATTACHMENT15_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT16)
			eColorAttachment16 = (GLenum)GL_COLOR_ATTACHMENT16,
		#endif
		#if defined(GL_COLOR_ATTACHMENT17)
			eColorAttachment17 = (GLenum)GL_COLOR_ATTACHMENT17,
		#endif
		#if defined(GL_COLOR_ATTACHMENT18)
			eColorAttachment18 = (GLenum)GL_COLOR_ATTACHMENT18,
		#endif
		#if defined(GL_COLOR_ATTACHMENT19)
			eColorAttachment19 = (GLenum)GL_COLOR_ATTACHMENT19,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1_NV)
			eColorAttachment1Nv = (GLenum)GL_COLOR_ATTACHMENT1_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2)
			eColorAttachment2 = (GLenum)GL_COLOR_ATTACHMENT2,
		#endif
		#if defined(GL_COLOR_ATTACHMENT20)
			eColorAttachment20 = (GLenum)GL_COLOR_ATTACHMENT20,
		#endif
		#if defined(GL_COLOR_ATTACHMENT21)
			eColorAttachment21 = (GLenum)GL_COLOR_ATTACHMENT21,
		#endif
		#if defined(GL_COLOR_ATTACHMENT22)
			eColorAttachment22 = (GLenum)GL_COLOR_ATTACHMENT22,
		#endif
		#if defined(GL_COLOR_ATTACHMENT23)
			eColorAttachment23 = (GLenum)GL_COLOR_ATTACHMENT23,
		#endif
		#if defined(GL_COLOR_ATTACHMENT24)
			eColorAttachment24 = (GLenum)GL_COLOR_ATTACHMENT24,
		#endif
		#if defined(GL_COLOR_ATTACHMENT25)
			eColorAttachment25 = (GLenum)GL_COLOR_ATTACHMENT25,
		#endif
		#if defined(GL_COLOR_ATTACHMENT26)
			eColorAttachment26 = (GLenum)GL_COLOR_ATTACHMENT26,
		#endif
		#if defined(GL_COLOR_ATTACHMENT27)
			eColorAttachment27 = (GLenum)GL_COLOR_ATTACHMENT27,
		#endif
		#if defined(GL_COLOR_ATTACHMENT28)
			eColorAttachment28 = (GLenum)GL_COLOR_ATTACHMENT28,
		#endif
		#if defined(GL_COLOR_ATTACHMENT29)
			eColorAttachment29 = (GLenum)GL_COLOR_ATTACHMENT29,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2_NV)
			eColorAttachment2Nv = (GLenum)GL_COLOR_ATTACHMENT2_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3)
			eColorAttachment3 = (GLenum)GL_COLOR_ATTACHMENT3,
		#endif
		#if defined(GL_COLOR_ATTACHMENT30)
			eColorAttachment30 = (GLenum)GL_COLOR_ATTACHMENT30,
		#endif
		#if defined(GL_COLOR_ATTACHMENT31)
			eColorAttachment31 = (GLenum)GL_COLOR_ATTACHMENT31,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3_NV)
			eColorAttachment3Nv = (GLenum)GL_COLOR_ATTACHMENT3_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4)
			eColorAttachment4 = (GLenum)GL_COLOR_ATTACHMENT4,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4_NV)
			eColorAttachment4Nv = (GLenum)GL_COLOR_ATTACHMENT4_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5)
			eColorAttachment5 = (GLenum)GL_COLOR_ATTACHMENT5,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5_NV)
			eColorAttachment5Nv = (GLenum)GL_COLOR_ATTACHMENT5_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6)
			eColorAttachment6 = (GLenum)GL_COLOR_ATTACHMENT6,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6_NV)
			eColorAttachment6Nv = (GLenum)GL_COLOR_ATTACHMENT6_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7)
			eColorAttachment7 = (GLenum)GL_COLOR_ATTACHMENT7,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7_NV)
			eColorAttachment7Nv = (GLenum)GL_COLOR_ATTACHMENT7_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8)
			eColorAttachment8 = (GLenum)GL_COLOR_ATTACHMENT8,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8_NV)
			eColorAttachment8Nv = (GLenum)GL_COLOR_ATTACHMENT8_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9)
			eColorAttachment9 = (GLenum)GL_COLOR_ATTACHMENT9,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9_NV)
			eColorAttachment9Nv = (GLenum)GL_COLOR_ATTACHMENT9_NV,
		#endif
		#if defined(GL_FRONT)
			eFront = (GLenum)GL_FRONT,
		#endif
		#if defined(GL_FRONT_AND_BACK)
			eFrontAndBack = (GLenum)GL_FRONT_AND_BACK,
		#endif
		#if defined(GL_FRONT_LEFT)
			eFrontLeft = (GLenum)GL_FRONT_LEFT,
		#endif
		#if defined(GL_FRONT_RIGHT)
			eFrontRight = (GLenum)GL_FRONT_RIGHT,
		#endif
		#if defined(GL_LEFT)
			eLeft = (GLenum)GL_LEFT,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_NONE_OES)
			eNoneOes = (GLenum)GL_NONE_OES,
		#endif
		#if defined(GL_RIGHT)
			eRight = (GLenum)GL_RIGHT,
		#endif
	};

	enum class PixelTexGenModeSGIX : GLenum {
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX)
			ePixelTexGenAlphaLsSgix = (GLenum)GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX)
			ePixelTexGenAlphaMsSgix = (GLenum)GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_CEILING_SGIX)
			ePixelTexGenQCeilingSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_CEILING_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX)
			ePixelTexGenQFloorSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_ROUND_SGIX)
			ePixelTexGenQRoundSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_ROUND_SGIX,
		#endif
		#if defined(GL_RGB)
			eRgb = (GLenum)GL_RGB,
		#endif
		#if defined(GL_RGBA)
			eRgba = (GLenum)GL_RGBA,
		#endif
	};

	enum class ReadBufferMode : GLenum {
		#if defined(GL_AUX0)
			eAux0 = (GLenum)GL_AUX0,
		#endif
		#if defined(GL_AUX1)
			eAux1 = (GLenum)GL_AUX1,
		#endif
		#if defined(GL_AUX2)
			eAux2 = (GLenum)GL_AUX2,
		#endif
		#if defined(GL_AUX3)
			eAux3 = (GLenum)GL_AUX3,
		#endif
		#if defined(GL_BACK)
			eBack = (GLenum)GL_BACK,
		#endif
		#if defined(GL_BACK_LEFT)
			eBackLeft = (GLenum)GL_BACK_LEFT,
		#endif
		#if defined(GL_BACK_RIGHT)
			eBackRight = (GLenum)GL_BACK_RIGHT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0)
			eColorAttachment0 = (GLenum)GL_COLOR_ATTACHMENT0,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1)
			eColorAttachment1 = (GLenum)GL_COLOR_ATTACHMENT1,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10)
			eColorAttachment10 = (GLenum)GL_COLOR_ATTACHMENT10,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11)
			eColorAttachment11 = (GLenum)GL_COLOR_ATTACHMENT11,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12)
			eColorAttachment12 = (GLenum)GL_COLOR_ATTACHMENT12,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13)
			eColorAttachment13 = (GLenum)GL_COLOR_ATTACHMENT13,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14)
			eColorAttachment14 = (GLenum)GL_COLOR_ATTACHMENT14,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15)
			eColorAttachment15 = (GLenum)GL_COLOR_ATTACHMENT15,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2)
			eColorAttachment2 = (GLenum)GL_COLOR_ATTACHMENT2,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3)
			eColorAttachment3 = (GLenum)GL_COLOR_ATTACHMENT3,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4)
			eColorAttachment4 = (GLenum)GL_COLOR_ATTACHMENT4,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5)
			eColorAttachment5 = (GLenum)GL_COLOR_ATTACHMENT5,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6)
			eColorAttachment6 = (GLenum)GL_COLOR_ATTACHMENT6,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7)
			eColorAttachment7 = (GLenum)GL_COLOR_ATTACHMENT7,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8)
			eColorAttachment8 = (GLenum)GL_COLOR_ATTACHMENT8,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9)
			eColorAttachment9 = (GLenum)GL_COLOR_ATTACHMENT9,
		#endif
		#if defined(GL_FRONT)
			eFront = (GLenum)GL_FRONT,
		#endif
		#if defined(GL_FRONT_LEFT)
			eFrontLeft = (GLenum)GL_FRONT_LEFT,
		#endif
		#if defined(GL_FRONT_RIGHT)
			eFrontRight = (GLenum)GL_FRONT_RIGHT,
		#endif
		#if defined(GL_LEFT)
			eLeft = (GLenum)GL_LEFT,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_NONE_OES)
			eNoneOes = (GLenum)GL_NONE_OES,
		#endif
		#if defined(GL_RIGHT)
			eRight = (GLenum)GL_RIGHT,
		#endif
	};

	enum class ColorBuffer : GLenum {
		#if defined(GL_BACK)
			eBack = (GLenum)GL_BACK,
		#endif
		#if defined(GL_BACK_LEFT)
			eBackLeft = (GLenum)GL_BACK_LEFT,
		#endif
		#if defined(GL_BACK_RIGHT)
			eBackRight = (GLenum)GL_BACK_RIGHT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0)
			eColorAttachment0 = (GLenum)GL_COLOR_ATTACHMENT0,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1)
			eColorAttachment1 = (GLenum)GL_COLOR_ATTACHMENT1,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10)
			eColorAttachment10 = (GLenum)GL_COLOR_ATTACHMENT10,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11)
			eColorAttachment11 = (GLenum)GL_COLOR_ATTACHMENT11,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12)
			eColorAttachment12 = (GLenum)GL_COLOR_ATTACHMENT12,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13)
			eColorAttachment13 = (GLenum)GL_COLOR_ATTACHMENT13,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14)
			eColorAttachment14 = (GLenum)GL_COLOR_ATTACHMENT14,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15)
			eColorAttachment15 = (GLenum)GL_COLOR_ATTACHMENT15,
		#endif
		#if defined(GL_COLOR_ATTACHMENT16)
			eColorAttachment16 = (GLenum)GL_COLOR_ATTACHMENT16,
		#endif
		#if defined(GL_COLOR_ATTACHMENT17)
			eColorAttachment17 = (GLenum)GL_COLOR_ATTACHMENT17,
		#endif
		#if defined(GL_COLOR_ATTACHMENT18)
			eColorAttachment18 = (GLenum)GL_COLOR_ATTACHMENT18,
		#endif
		#if defined(GL_COLOR_ATTACHMENT19)
			eColorAttachment19 = (GLenum)GL_COLOR_ATTACHMENT19,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2)
			eColorAttachment2 = (GLenum)GL_COLOR_ATTACHMENT2,
		#endif
		#if defined(GL_COLOR_ATTACHMENT20)
			eColorAttachment20 = (GLenum)GL_COLOR_ATTACHMENT20,
		#endif
		#if defined(GL_COLOR_ATTACHMENT21)
			eColorAttachment21 = (GLenum)GL_COLOR_ATTACHMENT21,
		#endif
		#if defined(GL_COLOR_ATTACHMENT22)
			eColorAttachment22 = (GLenum)GL_COLOR_ATTACHMENT22,
		#endif
		#if defined(GL_COLOR_ATTACHMENT23)
			eColorAttachment23 = (GLenum)GL_COLOR_ATTACHMENT23,
		#endif
		#if defined(GL_COLOR_ATTACHMENT24)
			eColorAttachment24 = (GLenum)GL_COLOR_ATTACHMENT24,
		#endif
		#if defined(GL_COLOR_ATTACHMENT25)
			eColorAttachment25 = (GLenum)GL_COLOR_ATTACHMENT25,
		#endif
		#if defined(GL_COLOR_ATTACHMENT26)
			eColorAttachment26 = (GLenum)GL_COLOR_ATTACHMENT26,
		#endif
		#if defined(GL_COLOR_ATTACHMENT27)
			eColorAttachment27 = (GLenum)GL_COLOR_ATTACHMENT27,
		#endif
		#if defined(GL_COLOR_ATTACHMENT28)
			eColorAttachment28 = (GLenum)GL_COLOR_ATTACHMENT28,
		#endif
		#if defined(GL_COLOR_ATTACHMENT29)
			eColorAttachment29 = (GLenum)GL_COLOR_ATTACHMENT29,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3)
			eColorAttachment3 = (GLenum)GL_COLOR_ATTACHMENT3,
		#endif
		#if defined(GL_COLOR_ATTACHMENT30)
			eColorAttachment30 = (GLenum)GL_COLOR_ATTACHMENT30,
		#endif
		#if defined(GL_COLOR_ATTACHMENT31)
			eColorAttachment31 = (GLenum)GL_COLOR_ATTACHMENT31,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4)
			eColorAttachment4 = (GLenum)GL_COLOR_ATTACHMENT4,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5)
			eColorAttachment5 = (GLenum)GL_COLOR_ATTACHMENT5,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6)
			eColorAttachment6 = (GLenum)GL_COLOR_ATTACHMENT6,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7)
			eColorAttachment7 = (GLenum)GL_COLOR_ATTACHMENT7,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8)
			eColorAttachment8 = (GLenum)GL_COLOR_ATTACHMENT8,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9)
			eColorAttachment9 = (GLenum)GL_COLOR_ATTACHMENT9,
		#endif
		#if defined(GL_FRONT)
			eFront = (GLenum)GL_FRONT,
		#endif
		#if defined(GL_FRONT_AND_BACK)
			eFrontAndBack = (GLenum)GL_FRONT_AND_BACK,
		#endif
		#if defined(GL_FRONT_LEFT)
			eFrontLeft = (GLenum)GL_FRONT_LEFT,
		#endif
		#if defined(GL_FRONT_RIGHT)
			eFrontRight = (GLenum)GL_FRONT_RIGHT,
		#endif
		#if defined(GL_LEFT)
			eLeft = (GLenum)GL_LEFT,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_RIGHT)
			eRight = (GLenum)GL_RIGHT,
		#endif
	};

	enum class PathGenMode : GLenum {
		#if defined(GL_CONSTANT)
			eConstant = (GLenum)GL_CONSTANT,
		#endif
		#if defined(GL_EYE_LINEAR)
			eEyeLinear = (GLenum)GL_EYE_LINEAR,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_OBJECT_LINEAR)
			eObjectLinear = (GLenum)GL_OBJECT_LINEAR,
		#endif
		#if defined(GL_PATH_OBJECT_BOUNDING_BOX_NV)
			ePathObjectBoundingBoxNv = (GLenum)GL_PATH_OBJECT_BOUNDING_BOX_NV,
		#endif
	};

	enum class PathTransformType : GLenum {
		#if defined(GL_AFFINE_2D_NV)
			eAffine2dNv = (GLenum)GL_AFFINE_2D_NV,
		#endif
		#if defined(GL_AFFINE_3D_NV)
			eAffine3dNv = (GLenum)GL_AFFINE_3D_NV,
		#endif
		#if defined(GL_NONE)
			eNone = (GLenum)GL_NONE,
		#endif
		#if defined(GL_TRANSLATE_2D_NV)
			eTranslate2dNv = (GLenum)GL_TRANSLATE_2D_NV,
		#endif
		#if defined(GL_TRANSLATE_3D_NV)
			eTranslate3dNv = (GLenum)GL_TRANSLATE_3D_NV,
		#endif
		#if defined(GL_TRANSLATE_X_NV)
			eTranslateXNv = (GLenum)GL_TRANSLATE_X_NV,
		#endif
		#if defined(GL_TRANSLATE_Y_NV)
			eTranslateYNv = (GLenum)GL_TRANSLATE_Y_NV,
		#endif
		#if defined(GL_TRANSPOSE_AFFINE_2D_NV)
			eTransposeAffine2dNv = (GLenum)GL_TRANSPOSE_AFFINE_2D_NV,
		#endif
		#if defined(GL_TRANSPOSE_AFFINE_3D_NV)
			eTransposeAffine3dNv = (GLenum)GL_TRANSPOSE_AFFINE_3D_NV,
		#endif
	};

	enum class PrimitiveType : GLenum {
		#if defined(GL_LINES)
			eLines = (GLenum)GL_LINES,
		#endif
		#if defined(GL_LINES_ADJACENCY)
			eLinesAdjacency = (GLenum)GL_LINES_ADJACENCY,
		#endif
		#if defined(GL_LINES_ADJACENCY_ARB)
			eLinesAdjacencyArb = (GLenum)GL_LINES_ADJACENCY_ARB,
		#endif
		#if defined(GL_LINES_ADJACENCY_EXT)
			eLinesAdjacencyExt = (GLenum)GL_LINES_ADJACENCY_EXT,
		#endif
		#if defined(GL_LINE_LOOP)
			eLineLoop = (GLenum)GL_LINE_LOOP,
		#endif
		#if defined(GL_LINE_STRIP)
			eLineStrip = (GLenum)GL_LINE_STRIP,
		#endif
		#if defined(GL_LINE_STRIP_ADJACENCY)
			eLineStripAdjacency = (GLenum)GL_LINE_STRIP_ADJACENCY,
		#endif
		#if defined(GL_LINE_STRIP_ADJACENCY_ARB)
			eLineStripAdjacencyArb = (GLenum)GL_LINE_STRIP_ADJACENCY_ARB,
		#endif
		#if defined(GL_LINE_STRIP_ADJACENCY_EXT)
			eLineStripAdjacencyExt = (GLenum)GL_LINE_STRIP_ADJACENCY_EXT,
		#endif
		#if defined(GL_PATCHES)
			ePatches = (GLenum)GL_PATCHES,
		#endif
		#if defined(GL_PATCHES_EXT)
			ePatchesExt = (GLenum)GL_PATCHES_EXT,
		#endif
		#if defined(GL_POINTS)
			ePoints = (GLenum)GL_POINTS,
		#endif
		#if defined(GL_POLYGON)
			ePolygon = (GLenum)GL_POLYGON,
		#endif
		#if defined(GL_QUADS)
			eQuads = (GLenum)GL_QUADS,
		#endif
		#if defined(GL_QUADS_EXT)
			eQuadsExt = (GLenum)GL_QUADS_EXT,
		#endif
		#if defined(GL_QUAD_STRIP)
			eQuadStrip = (GLenum)GL_QUAD_STRIP,
		#endif
		#if defined(GL_TRIANGLES)
			eTriangles = (GLenum)GL_TRIANGLES,
		#endif
		#if defined(GL_TRIANGLES_ADJACENCY)
			eTrianglesAdjacency = (GLenum)GL_TRIANGLES_ADJACENCY,
		#endif
		#if defined(GL_TRIANGLES_ADJACENCY_ARB)
			eTrianglesAdjacencyArb = (GLenum)GL_TRIANGLES_ADJACENCY_ARB,
		#endif
		#if defined(GL_TRIANGLES_ADJACENCY_EXT)
			eTrianglesAdjacencyExt = (GLenum)GL_TRIANGLES_ADJACENCY_EXT,
		#endif
		#if defined(GL_TRIANGLE_FAN)
			eTriangleFan = (GLenum)GL_TRIANGLE_FAN,
		#endif
		#if defined(GL_TRIANGLE_STRIP)
			eTriangleStrip = (GLenum)GL_TRIANGLE_STRIP,
		#endif
		#if defined(GL_TRIANGLE_STRIP_ADJACENCY)
			eTriangleStripAdjacency = (GLenum)GL_TRIANGLE_STRIP_ADJACENCY,
		#endif
		#if defined(GL_TRIANGLE_STRIP_ADJACENCY_ARB)
			eTriangleStripAdjacencyArb = (GLenum)GL_TRIANGLE_STRIP_ADJACENCY_ARB,
		#endif
		#if defined(GL_TRIANGLE_STRIP_ADJACENCY_EXT)
			eTriangleStripAdjacencyExt = (GLenum)GL_TRIANGLE_STRIP_ADJACENCY_EXT,
		#endif
	};

	enum class AccumOp : GLenum {
		#if defined(GL_ACCUM)
			eAccum = (GLenum)GL_ACCUM,
		#endif
		#if defined(GL_ADD)
			eAdd = (GLenum)GL_ADD,
		#endif
		#if defined(GL_LOAD)
			eLoad = (GLenum)GL_LOAD,
		#endif
		#if defined(GL_MULT)
			eMult = (GLenum)GL_MULT,
		#endif
		#if defined(GL_RETURN)
			eReturn = (GLenum)GL_RETURN,
		#endif
	};

	enum class TextureEnvMode : GLenum {
		#if defined(GL_ADD)
			eAdd = (GLenum)GL_ADD,
		#endif
		#if defined(GL_BLEND)
			eBlend = (GLenum)GL_BLEND,
		#endif
		#if defined(GL_COMBINE)
			eCombine = (GLenum)GL_COMBINE,
		#endif
		#if defined(GL_DECAL)
			eDecal = (GLenum)GL_DECAL,
		#endif
		#if defined(GL_MODULATE)
			eModulate = (GLenum)GL_MODULATE,
		#endif
		#if defined(GL_REPLACE)
			eReplace = (GLenum)GL_REPLACE,
		#endif
		#if defined(GL_REPLACE_EXT)
			eReplaceExt = (GLenum)GL_REPLACE_EXT,
		#endif
		#if defined(GL_TEXTURE_ENV_BIAS_SGIX)
			eTextureEnvBiasSgix = (GLenum)GL_TEXTURE_ENV_BIAS_SGIX,
		#endif
	};

	enum class LightEnvModeSGIX : GLenum {
		#if defined(GL_ADD)
			eAdd = (GLenum)GL_ADD,
		#endif
		#if defined(GL_MODULATE)
			eModulate = (GLenum)GL_MODULATE,
		#endif
		#if defined(GL_REPLACE)
			eReplace = (GLenum)GL_REPLACE,
		#endif
	};

	enum class StencilFunction : GLenum {
		#if defined(GL_ALWAYS)
			eAlways = (GLenum)GL_ALWAYS,
		#endif
		#if defined(GL_EQUAL)
			eEqual = (GLenum)GL_EQUAL,
		#endif
		#if defined(GL_GEQUAL)
			eGequal = (GLenum)GL_GEQUAL,
		#endif
		#if defined(GL_GREATER)
			eGreater = (GLenum)GL_GREATER,
		#endif
		#if defined(GL_LEQUAL)
			eLequal = (GLenum)GL_LEQUAL,
		#endif
		#if defined(GL_LESS)
			eLess = (GLenum)GL_LESS,
		#endif
		#if defined(GL_NEVER)
			eNever = (GLenum)GL_NEVER,
		#endif
		#if defined(GL_NOTEQUAL)
			eNotequal = (GLenum)GL_NOTEQUAL,
		#endif
	};

	enum class IndexFunctionEXT : GLenum {
		#if defined(GL_ALWAYS)
			eAlways = (GLenum)GL_ALWAYS,
		#endif
		#if defined(GL_EQUAL)
			eEqual = (GLenum)GL_EQUAL,
		#endif
		#if defined(GL_GEQUAL)
			eGequal = (GLenum)GL_GEQUAL,
		#endif
		#if defined(GL_GREATER)
			eGreater = (GLenum)GL_GREATER,
		#endif
		#if defined(GL_LEQUAL)
			eLequal = (GLenum)GL_LEQUAL,
		#endif
		#if defined(GL_LESS)
			eLess = (GLenum)GL_LESS,
		#endif
		#if defined(GL_NEVER)
			eNever = (GLenum)GL_NEVER,
		#endif
		#if defined(GL_NOTEQUAL)
			eNotequal = (GLenum)GL_NOTEQUAL,
		#endif
	};

	enum class AlphaFunction : GLenum {
		#if defined(GL_ALWAYS)
			eAlways = (GLenum)GL_ALWAYS,
		#endif
		#if defined(GL_EQUAL)
			eEqual = (GLenum)GL_EQUAL,
		#endif
		#if defined(GL_GEQUAL)
			eGequal = (GLenum)GL_GEQUAL,
		#endif
		#if defined(GL_GREATER)
			eGreater = (GLenum)GL_GREATER,
		#endif
		#if defined(GL_LEQUAL)
			eLequal = (GLenum)GL_LEQUAL,
		#endif
		#if defined(GL_LESS)
			eLess = (GLenum)GL_LESS,
		#endif
		#if defined(GL_NEVER)
			eNever = (GLenum)GL_NEVER,
		#endif
		#if defined(GL_NOTEQUAL)
			eNotequal = (GLenum)GL_NOTEQUAL,
		#endif
	};

	enum class DepthFunction : GLenum {
		#if defined(GL_ALWAYS)
			eAlways = (GLenum)GL_ALWAYS,
		#endif
		#if defined(GL_EQUAL)
			eEqual = (GLenum)GL_EQUAL,
		#endif
		#if defined(GL_GEQUAL)
			eGequal = (GLenum)GL_GEQUAL,
		#endif
		#if defined(GL_GREATER)
			eGreater = (GLenum)GL_GREATER,
		#endif
		#if defined(GL_LEQUAL)
			eLequal = (GLenum)GL_LEQUAL,
		#endif
		#if defined(GL_LESS)
			eLess = (GLenum)GL_LESS,
		#endif
		#if defined(GL_NEVER)
			eNever = (GLenum)GL_NEVER,
		#endif
		#if defined(GL_NOTEQUAL)
			eNotequal = (GLenum)GL_NOTEQUAL,
		#endif
	};

	enum class TriangleFace : GLenum {
		#if defined(GL_BACK)
			eBack = (GLenum)GL_BACK,
		#endif
		#if defined(GL_FRONT)
			eFront = (GLenum)GL_FRONT,
		#endif
		#if defined(GL_FRONT_AND_BACK)
			eFrontAndBack = (GLenum)GL_FRONT_AND_BACK,
		#endif
	};

	enum class FeedbackType : GLenum {
		#if defined(GL_2D)
			e2d = (GLenum)GL_2D,
		#endif
		#if defined(GL_3D)
			e3d = (GLenum)GL_3D,
		#endif
		#if defined(GL_3D_COLOR)
			e3dColor = (GLenum)GL_3D_COLOR,
		#endif
		#if defined(GL_3D_COLOR_TEXTURE)
			e3dColorTexture = (GLenum)GL_3D_COLOR_TEXTURE,
		#endif
		#if defined(GL_4D_COLOR_TEXTURE)
			e4dColorTexture = (GLenum)GL_4D_COLOR_TEXTURE,
		#endif
	};

	enum class FeedBackToken : GLenum {
		#if defined(GL_BITMAP_TOKEN)
			eBitmapToken = (GLenum)GL_BITMAP_TOKEN,
		#endif
		#if defined(GL_COPY_PIXEL_TOKEN)
			eCopyPixelToken = (GLenum)GL_COPY_PIXEL_TOKEN,
		#endif
		#if defined(GL_DRAW_PIXEL_TOKEN)
			eDrawPixelToken = (GLenum)GL_DRAW_PIXEL_TOKEN,
		#endif
		#if defined(GL_LINE_RESET_TOKEN)
			eLineResetToken = (GLenum)GL_LINE_RESET_TOKEN,
		#endif
		#if defined(GL_LINE_TOKEN)
			eLineToken = (GLenum)GL_LINE_TOKEN,
		#endif
		#if defined(GL_PASS_THROUGH_TOKEN)
			ePassThroughToken = (GLenum)GL_PASS_THROUGH_TOKEN,
		#endif
		#if defined(GL_POINT_TOKEN)
			ePointToken = (GLenum)GL_POINT_TOKEN,
		#endif
		#if defined(GL_POLYGON_TOKEN)
			ePolygonToken = (GLenum)GL_POLYGON_TOKEN,
		#endif
	};

	enum class FogMode : GLenum {
		#if defined(GL_EXP)
			eExp = (GLenum)GL_EXP,
		#endif
		#if defined(GL_EXP2)
			eExp2 = (GLenum)GL_EXP2,
		#endif
		#if defined(GL_FOG_FUNC_SGIS)
			eFogFuncSgis = (GLenum)GL_FOG_FUNC_SGIS,
		#endif
		#if defined(GL_LINEAR)
			eLinear = (GLenum)GL_LINEAR,
		#endif
	};

	enum class FrontFaceDirection : GLenum {
		#if defined(GL_CCW)
			eCcw = (GLenum)GL_CCW,
		#endif
		#if defined(GL_CW)
			eCw = (GLenum)GL_CW,
		#endif
	};

	enum class MapQuery : GLenum {
		#if defined(GL_COEFF)
			eCoeff = (GLenum)GL_COEFF,
		#endif
		#if defined(GL_DOMAIN)
			eDomain = (GLenum)GL_DOMAIN,
		#endif
		#if defined(GL_ORDER)
			eOrder = (GLenum)GL_ORDER,
		#endif
	};

	enum class GetMapQuery : GLenum {
		#if defined(GL_COEFF)
			eCoeff = (GLenum)GL_COEFF,
		#endif
		#if defined(GL_DOMAIN)
			eDomain = (GLenum)GL_DOMAIN,
		#endif
		#if defined(GL_ORDER)
			eOrder = (GLenum)GL_ORDER,
		#endif
	};

	enum class GetPName : GLenum {
		#if defined(GL_ACCUM_ALPHA_BITS)
			eAccumAlphaBits = (GLenum)GL_ACCUM_ALPHA_BITS,
		#endif
		#if defined(GL_ACCUM_BLUE_BITS)
			eAccumBlueBits = (GLenum)GL_ACCUM_BLUE_BITS,
		#endif
		#if defined(GL_ACCUM_CLEAR_VALUE)
			eAccumClearValue = (GLenum)GL_ACCUM_CLEAR_VALUE,
		#endif
		#if defined(GL_ACCUM_GREEN_BITS)
			eAccumGreenBits = (GLenum)GL_ACCUM_GREEN_BITS,
		#endif
		#if defined(GL_ACCUM_RED_BITS)
			eAccumRedBits = (GLenum)GL_ACCUM_RED_BITS,
		#endif
		#if defined(GL_ACTIVE_TEXTURE)
			eActiveTexture = (GLenum)GL_ACTIVE_TEXTURE,
		#endif
		#if defined(GL_ALIASED_LINE_WIDTH_RANGE)
			eAliasedLineWidthRange = (GLenum)GL_ALIASED_LINE_WIDTH_RANGE,
		#endif
		#if defined(GL_ALIASED_POINT_SIZE_RANGE)
			eAliasedPointSizeRange = (GLenum)GL_ALIASED_POINT_SIZE_RANGE,
		#endif
		#if defined(GL_ALPHA_BIAS)
			eAlphaBias = (GLenum)GL_ALPHA_BIAS,
		#endif
		#if defined(GL_ALPHA_BITS)
			eAlphaBits = (GLenum)GL_ALPHA_BITS,
		#endif
		#if defined(GL_ALPHA_SCALE)
			eAlphaScale = (GLenum)GL_ALPHA_SCALE,
		#endif
		#if defined(GL_ALPHA_TEST)
			eAlphaTest = (GLenum)GL_ALPHA_TEST,
		#endif
		#if defined(GL_ALPHA_TEST_FUNC)
			eAlphaTestFunc = (GLenum)GL_ALPHA_TEST_FUNC,
		#endif
		#if defined(GL_ALPHA_TEST_FUNC_QCOM)
			eAlphaTestFuncQcom = (GLenum)GL_ALPHA_TEST_FUNC_QCOM,
		#endif
		#if defined(GL_ALPHA_TEST_QCOM)
			eAlphaTestQcom = (GLenum)GL_ALPHA_TEST_QCOM,
		#endif
		#if defined(GL_ALPHA_TEST_REF)
			eAlphaTestRef = (GLenum)GL_ALPHA_TEST_REF,
		#endif
		#if defined(GL_ALPHA_TEST_REF_QCOM)
			eAlphaTestRefQcom = (GLenum)GL_ALPHA_TEST_REF_QCOM,
		#endif
		#if defined(GL_ARRAY_BUFFER_BINDING)
			eArrayBufferBinding = (GLenum)GL_ARRAY_BUFFER_BINDING,
		#endif
		#if defined(GL_ASYNC_DRAW_PIXELS_SGIX)
			eAsyncDrawPixelsSgix = (GLenum)GL_ASYNC_DRAW_PIXELS_SGIX,
		#endif
		#if defined(GL_ASYNC_HISTOGRAM_SGIX)
			eAsyncHistogramSgix = (GLenum)GL_ASYNC_HISTOGRAM_SGIX,
		#endif
		#if defined(GL_ASYNC_MARKER_SGIX)
			eAsyncMarkerSgix = (GLenum)GL_ASYNC_MARKER_SGIX,
		#endif
		#if defined(GL_ASYNC_READ_PIXELS_SGIX)
			eAsyncReadPixelsSgix = (GLenum)GL_ASYNC_READ_PIXELS_SGIX,
		#endif
		#if defined(GL_ASYNC_TEX_IMAGE_SGIX)
			eAsyncTexImageSgix = (GLenum)GL_ASYNC_TEX_IMAGE_SGIX,
		#endif
		#if defined(GL_ATTRIB_STACK_DEPTH)
			eAttribStackDepth = (GLenum)GL_ATTRIB_STACK_DEPTH,
		#endif
		#if defined(GL_AUTO_NORMAL)
			eAutoNormal = (GLenum)GL_AUTO_NORMAL,
		#endif
		#if defined(GL_AUX_BUFFERS)
			eAuxBuffers = (GLenum)GL_AUX_BUFFERS,
		#endif
		#if defined(GL_BLEND)
			eBlend = (GLenum)GL_BLEND,
		#endif
		#if defined(GL_BLEND_COLOR)
			eBlendColor = (GLenum)GL_BLEND_COLOR,
		#endif
		#if defined(GL_BLEND_COLOR_EXT)
			eBlendColorExt = (GLenum)GL_BLEND_COLOR_EXT,
		#endif
		#if defined(GL_BLEND_DST)
			eBlendDst = (GLenum)GL_BLEND_DST,
		#endif
		#if defined(GL_BLEND_DST_ALPHA)
			eBlendDstAlpha = (GLenum)GL_BLEND_DST_ALPHA,
		#endif
		#if defined(GL_BLEND_DST_RGB)
			eBlendDstRgb = (GLenum)GL_BLEND_DST_RGB,
		#endif
		#if defined(GL_BLEND_EQUATION)
			eBlendEquation = (GLenum)GL_BLEND_EQUATION,
		#endif
		#if defined(GL_BLEND_EQUATION_ALPHA)
			eBlendEquationAlpha = (GLenum)GL_BLEND_EQUATION_ALPHA,
		#endif
		#if defined(GL_BLEND_EQUATION_EXT)
			eBlendEquationExt = (GLenum)GL_BLEND_EQUATION_EXT,
		#endif
		#if defined(GL_BLEND_EQUATION_OES)
			eBlendEquationOes = (GLenum)GL_BLEND_EQUATION_OES,
		#endif
		#if defined(GL_BLEND_EQUATION_RGB)
			eBlendEquationRgb = (GLenum)GL_BLEND_EQUATION_RGB,
		#endif
		#if defined(GL_BLEND_SRC)
			eBlendSrc = (GLenum)GL_BLEND_SRC,
		#endif
		#if defined(GL_BLEND_SRC_ALPHA)
			eBlendSrcAlpha = (GLenum)GL_BLEND_SRC_ALPHA,
		#endif
		#if defined(GL_BLEND_SRC_RGB)
			eBlendSrcRgb = (GLenum)GL_BLEND_SRC_RGB,
		#endif
		#if defined(GL_BLUE_BIAS)
			eBlueBias = (GLenum)GL_BLUE_BIAS,
		#endif
		#if defined(GL_BLUE_BITS)
			eBlueBits = (GLenum)GL_BLUE_BITS,
		#endif
		#if defined(GL_BLUE_SCALE)
			eBlueScale = (GLenum)GL_BLUE_SCALE,
		#endif
		#if defined(GL_CALLIGRAPHIC_FRAGMENT_SGIX)
			eCalligraphicFragmentSgix = (GLenum)GL_CALLIGRAPHIC_FRAGMENT_SGIX,
		#endif
		#if defined(GL_CLIENT_ATTRIB_STACK_DEPTH)
			eClientAttribStackDepth = (GLenum)GL_CLIENT_ATTRIB_STACK_DEPTH,
		#endif
		#if defined(GL_CLIP_PLANE0)
			eClipPlane0 = (GLenum)GL_CLIP_PLANE0,
		#endif
		#if defined(GL_CLIP_PLANE1)
			eClipPlane1 = (GLenum)GL_CLIP_PLANE1,
		#endif
		#if defined(GL_CLIP_PLANE2)
			eClipPlane2 = (GLenum)GL_CLIP_PLANE2,
		#endif
		#if defined(GL_CLIP_PLANE3)
			eClipPlane3 = (GLenum)GL_CLIP_PLANE3,
		#endif
		#if defined(GL_CLIP_PLANE4)
			eClipPlane4 = (GLenum)GL_CLIP_PLANE4,
		#endif
		#if defined(GL_CLIP_PLANE5)
			eClipPlane5 = (GLenum)GL_CLIP_PLANE5,
		#endif
		#if defined(GL_COLOR_ARRAY)
			eColorArray = (GLenum)GL_COLOR_ARRAY,
		#endif
		#if defined(GL_COLOR_ARRAY_COUNT_EXT)
			eColorArrayCountExt = (GLenum)GL_COLOR_ARRAY_COUNT_EXT,
		#endif
		#if defined(GL_COLOR_ARRAY_SIZE)
			eColorArraySize = (GLenum)GL_COLOR_ARRAY_SIZE,
		#endif
		#if defined(GL_COLOR_ARRAY_STRIDE)
			eColorArrayStride = (GLenum)GL_COLOR_ARRAY_STRIDE,
		#endif
		#if defined(GL_COLOR_ARRAY_TYPE)
			eColorArrayType = (GLenum)GL_COLOR_ARRAY_TYPE,
		#endif
		#if defined(GL_COLOR_CLEAR_VALUE)
			eColorClearValue = (GLenum)GL_COLOR_CLEAR_VALUE,
		#endif
		#if defined(GL_COLOR_LOGIC_OP)
			eColorLogicOp = (GLenum)GL_COLOR_LOGIC_OP,
		#endif
		#if defined(GL_COLOR_MATERIAL)
			eColorMaterial = (GLenum)GL_COLOR_MATERIAL,
		#endif
		#if defined(GL_COLOR_MATERIAL_FACE)
			eColorMaterialFace = (GLenum)GL_COLOR_MATERIAL_FACE,
		#endif
		#if defined(GL_COLOR_MATERIAL_PARAMETER)
			eColorMaterialParameter = (GLenum)GL_COLOR_MATERIAL_PARAMETER,
		#endif
		#if defined(GL_COLOR_MATRIX_SGI)
			eColorMatrixSgi = (GLenum)GL_COLOR_MATRIX_SGI,
		#endif
		#if defined(GL_COLOR_MATRIX_STACK_DEPTH_SGI)
			eColorMatrixStackDepthSgi = (GLenum)GL_COLOR_MATRIX_STACK_DEPTH_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_SGI)
			eColorTableSgi = (GLenum)GL_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_COLOR_WRITEMASK)
			eColorWritemask = (GLenum)GL_COLOR_WRITEMASK,
		#endif
		#if defined(GL_COMPRESSED_TEXTURE_FORMATS)
			eCompressedTextureFormats = (GLenum)GL_COMPRESSED_TEXTURE_FORMATS,
		#endif
		#if defined(GL_CONTEXT_FLAGS)
			eContextFlags = (GLenum)GL_CONTEXT_FLAGS,
		#endif
		#if defined(GL_CONTEXT_PROFILE_MASK)
			eContextProfileMask = (GLenum)GL_CONTEXT_PROFILE_MASK,
		#endif
		#if defined(GL_CONVOLUTION_1D_EXT)
			eConvolution1dExt = (GLenum)GL_CONVOLUTION_1D_EXT,
		#endif
		#if defined(GL_CONVOLUTION_2D_EXT)
			eConvolution2dExt = (GLenum)GL_CONVOLUTION_2D_EXT,
		#endif
		#if defined(GL_CONVOLUTION_HINT_SGIX)
			eConvolutionHintSgix = (GLenum)GL_CONVOLUTION_HINT_SGIX,
		#endif
		#if defined(GL_CULL_FACE)
			eCullFace = (GLenum)GL_CULL_FACE,
		#endif
		#if defined(GL_CULL_FACE_MODE)
			eCullFaceMode = (GLenum)GL_CULL_FACE_MODE,
		#endif
		#if defined(GL_CURRENT_COLOR)
			eCurrentColor = (GLenum)GL_CURRENT_COLOR,
		#endif
		#if defined(GL_CURRENT_INDEX)
			eCurrentIndex = (GLenum)GL_CURRENT_INDEX,
		#endif
		#if defined(GL_CURRENT_NORMAL)
			eCurrentNormal = (GLenum)GL_CURRENT_NORMAL,
		#endif
		#if defined(GL_CURRENT_PROGRAM)
			eCurrentProgram = (GLenum)GL_CURRENT_PROGRAM,
		#endif
		#if defined(GL_CURRENT_RASTER_COLOR)
			eCurrentRasterColor = (GLenum)GL_CURRENT_RASTER_COLOR,
		#endif
		#if defined(GL_CURRENT_RASTER_DISTANCE)
			eCurrentRasterDistance = (GLenum)GL_CURRENT_RASTER_DISTANCE,
		#endif
		#if defined(GL_CURRENT_RASTER_INDEX)
			eCurrentRasterIndex = (GLenum)GL_CURRENT_RASTER_INDEX,
		#endif
		#if defined(GL_CURRENT_RASTER_POSITION)
			eCurrentRasterPosition = (GLenum)GL_CURRENT_RASTER_POSITION,
		#endif
		#if defined(GL_CURRENT_RASTER_POSITION_VALID)
			eCurrentRasterPositionValid = (GLenum)GL_CURRENT_RASTER_POSITION_VALID,
		#endif
		#if defined(GL_CURRENT_RASTER_TEXTURE_COORDS)
			eCurrentRasterTextureCoords = (GLenum)GL_CURRENT_RASTER_TEXTURE_COORDS,
		#endif
		#if defined(GL_CURRENT_TEXTURE_COORDS)
			eCurrentTextureCoords = (GLenum)GL_CURRENT_TEXTURE_COORDS,
		#endif
		#if defined(GL_DEBUG_GROUP_STACK_DEPTH)
			eDebugGroupStackDepth = (GLenum)GL_DEBUG_GROUP_STACK_DEPTH,
		#endif
		#if defined(GL_DEFORMATIONS_MASK_SGIX)
			eDeformationsMaskSgix = (GLenum)GL_DEFORMATIONS_MASK_SGIX,
		#endif
		#if defined(GL_DEPTH_BIAS)
			eDepthBias = (GLenum)GL_DEPTH_BIAS,
		#endif
		#if defined(GL_DEPTH_BITS)
			eDepthBits = (GLenum)GL_DEPTH_BITS,
		#endif
		#if defined(GL_DEPTH_CLEAR_VALUE)
			eDepthClearValue = (GLenum)GL_DEPTH_CLEAR_VALUE,
		#endif
		#if defined(GL_DEPTH_FUNC)
			eDepthFunc = (GLenum)GL_DEPTH_FUNC,
		#endif
		#if defined(GL_DEPTH_RANGE)
			eDepthRange = (GLenum)GL_DEPTH_RANGE,
		#endif
		#if defined(GL_DEPTH_SCALE)
			eDepthScale = (GLenum)GL_DEPTH_SCALE,
		#endif
		#if defined(GL_DEPTH_TEST)
			eDepthTest = (GLenum)GL_DEPTH_TEST,
		#endif
		#if defined(GL_DEPTH_WRITEMASK)
			eDepthWritemask = (GLenum)GL_DEPTH_WRITEMASK,
		#endif
		#if defined(GL_DETAIL_TEXTURE_2D_BINDING_SGIS)
			eDetailTexture2dBindingSgis = (GLenum)GL_DETAIL_TEXTURE_2D_BINDING_SGIS,
		#endif
		#if defined(GL_DEVICE_LUID_EXT)
			eDeviceLuidExt = (GLenum)GL_DEVICE_LUID_EXT,
		#endif
		#if defined(GL_DEVICE_NODE_MASK_EXT)
			eDeviceNodeMaskExt = (GLenum)GL_DEVICE_NODE_MASK_EXT,
		#endif
		#if defined(GL_DEVICE_UUID_EXT)
			eDeviceUuidExt = (GLenum)GL_DEVICE_UUID_EXT,
		#endif
		#if defined(GL_DISPATCH_INDIRECT_BUFFER_BINDING)
			eDispatchIndirectBufferBinding = (GLenum)GL_DISPATCH_INDIRECT_BUFFER_BINDING,
		#endif
		#if defined(GL_DISTANCE_ATTENUATION_EXT)
			eDistanceAttenuationExt = (GLenum)GL_DISTANCE_ATTENUATION_EXT,
		#endif
		#if defined(GL_DISTANCE_ATTENUATION_SGIS)
			eDistanceAttenuationSgis = (GLenum)GL_DISTANCE_ATTENUATION_SGIS,
		#endif
		#if defined(GL_DITHER)
			eDither = (GLenum)GL_DITHER,
		#endif
		#if defined(GL_DOUBLEBUFFER)
			eDoublebuffer = (GLenum)GL_DOUBLEBUFFER,
		#endif
		#if defined(GL_DRAW_BUFFER)
			eDrawBuffer = (GLenum)GL_DRAW_BUFFER,
		#endif
		#if defined(GL_DRAW_BUFFER_EXT)
			eDrawBufferExt = (GLenum)GL_DRAW_BUFFER_EXT,
		#endif
		#if defined(GL_DRAW_FRAMEBUFFER_BINDING)
			eDrawFramebufferBinding = (GLenum)GL_DRAW_FRAMEBUFFER_BINDING,
		#endif
		#if defined(GL_DRIVER_UUID_EXT)
			eDriverUuidExt = (GLenum)GL_DRIVER_UUID_EXT,
		#endif
		#if defined(GL_EDGE_FLAG)
			eEdgeFlag = (GLenum)GL_EDGE_FLAG,
		#endif
		#if defined(GL_EDGE_FLAG_ARRAY)
			eEdgeFlagArray = (GLenum)GL_EDGE_FLAG_ARRAY,
		#endif
		#if defined(GL_EDGE_FLAG_ARRAY_COUNT_EXT)
			eEdgeFlagArrayCountExt = (GLenum)GL_EDGE_FLAG_ARRAY_COUNT_EXT,
		#endif
		#if defined(GL_EDGE_FLAG_ARRAY_STRIDE)
			eEdgeFlagArrayStride = (GLenum)GL_EDGE_FLAG_ARRAY_STRIDE,
		#endif
		#if defined(GL_ELEMENT_ARRAY_BUFFER_BINDING)
			eElementArrayBufferBinding = (GLenum)GL_ELEMENT_ARRAY_BUFFER_BINDING,
		#endif
		#if defined(GL_FEEDBACK_BUFFER_SIZE)
			eFeedbackBufferSize = (GLenum)GL_FEEDBACK_BUFFER_SIZE,
		#endif
		#if defined(GL_FEEDBACK_BUFFER_TYPE)
			eFeedbackBufferType = (GLenum)GL_FEEDBACK_BUFFER_TYPE,
		#endif
		#if defined(GL_FETCH_PER_SAMPLE_ARM)
			eFetchPerSampleArm = (GLenum)GL_FETCH_PER_SAMPLE_ARM,
		#endif
		#if defined(GL_FOG)
			eFog = (GLenum)GL_FOG,
		#endif
		#if defined(GL_FOG_COLOR)
			eFogColor = (GLenum)GL_FOG_COLOR,
		#endif
		#if defined(GL_FOG_DENSITY)
			eFogDensity = (GLenum)GL_FOG_DENSITY,
		#endif
		#if defined(GL_FOG_END)
			eFogEnd = (GLenum)GL_FOG_END,
		#endif
		#if defined(GL_FOG_FUNC_POINTS_SGIS)
			eFogFuncPointsSgis = (GLenum)GL_FOG_FUNC_POINTS_SGIS,
		#endif
		#if defined(GL_FOG_HINT)
			eFogHint = (GLenum)GL_FOG_HINT,
		#endif
		#if defined(GL_FOG_INDEX)
			eFogIndex = (GLenum)GL_FOG_INDEX,
		#endif
		#if defined(GL_FOG_MODE)
			eFogMode = (GLenum)GL_FOG_MODE,
		#endif
		#if defined(GL_FOG_OFFSET_SGIX)
			eFogOffsetSgix = (GLenum)GL_FOG_OFFSET_SGIX,
		#endif
		#if defined(GL_FOG_OFFSET_VALUE_SGIX)
			eFogOffsetValueSgix = (GLenum)GL_FOG_OFFSET_VALUE_SGIX,
		#endif
		#if defined(GL_FOG_START)
			eFogStart = (GLenum)GL_FOG_START,
		#endif
		#if defined(GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX)
			eFragmentColorMaterialFaceSgix = (GLenum)GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX,
		#endif
		#if defined(GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX)
			eFragmentColorMaterialParameterSgix = (GLenum)GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX,
		#endif
		#if defined(GL_FRAGMENT_COLOR_MATERIAL_SGIX)
			eFragmentColorMaterialSgix = (GLenum)GL_FRAGMENT_COLOR_MATERIAL_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT0_SGIX)
			eFragmentLight0Sgix = (GLenum)GL_FRAGMENT_LIGHT0_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHTING_SGIX)
			eFragmentLightingSgix = (GLenum)GL_FRAGMENT_LIGHTING_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX)
			eFragmentLightModelAmbientSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX)
			eFragmentLightModelLocalViewerSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX)
			eFragmentLightModelNormalInterpolationSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX)
			eFragmentLightModelTwoSideSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX,
		#endif
		#if defined(GL_FRAGMENT_SHADER_ATI)
			eFragmentShaderAti = (GLenum)GL_FRAGMENT_SHADER_ATI,
		#endif
		#if defined(GL_FRAGMENT_SHADER_DERIVATIVE_HINT)
			eFragmentShaderDerivativeHint = (GLenum)GL_FRAGMENT_SHADER_DERIVATIVE_HINT,
		#endif
		#if defined(GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM)
			eFragmentShaderFramebufferFetchMrtArm = (GLenum)GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_ATTACHMENT_WITH_DEFAULT_FRAMEBUFFER_SUPPORTED_EXT)
			eFragmentShadingRateAttachmentWithDefaultFramebufferSupportedExt = (GLenum)GL_FRAGMENT_SHADING_RATE_ATTACHMENT_WITH_DEFAULT_FRAMEBUFFER_SUPPORTED_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_NON_TRIVIAL_COMBINERS_SUPPORTED_EXT)
			eFragmentShadingRateNonTrivialCombinersSupportedExt = (GLenum)GL_FRAGMENT_SHADING_RATE_NON_TRIVIAL_COMBINERS_SUPPORTED_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_WITH_SAMPLE_MASK_SUPPORTED_EXT)
			eFragmentShadingRateWithSampleMaskSupportedExt = (GLenum)GL_FRAGMENT_SHADING_RATE_WITH_SAMPLE_MASK_SUPPORTED_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_WITH_SHADER_DEPTH_STENCIL_WRITES_SUPPORTED_EXT)
			eFragmentShadingRateWithShaderDepthStencilWritesSupportedExt = (GLenum)GL_FRAGMENT_SHADING_RATE_WITH_SHADER_DEPTH_STENCIL_WRITES_SUPPORTED_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM)
			eFramebufferFetchNoncoherentQcom = (GLenum)GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM,
		#endif
		#if defined(GL_FRAMEZOOM_FACTOR_SGIX)
			eFramezoomFactorSgix = (GLenum)GL_FRAMEZOOM_FACTOR_SGIX,
		#endif
		#if defined(GL_FRAMEZOOM_SGIX)
			eFramezoomSgix = (GLenum)GL_FRAMEZOOM_SGIX,
		#endif
		#if defined(GL_FRONT_FACE)
			eFrontFace = (GLenum)GL_FRONT_FACE,
		#endif
		#if defined(GL_GENERATE_MIPMAP_HINT_SGIS)
			eGenerateMipmapHintSgis = (GLenum)GL_GENERATE_MIPMAP_HINT_SGIS,
		#endif
		#if defined(GL_GREEN_BIAS)
			eGreenBias = (GLenum)GL_GREEN_BIAS,
		#endif
		#if defined(GL_GREEN_BITS)
			eGreenBits = (GLenum)GL_GREEN_BITS,
		#endif
		#if defined(GL_GREEN_SCALE)
			eGreenScale = (GLenum)GL_GREEN_SCALE,
		#endif
		#if defined(GL_HISTOGRAM_EXT)
			eHistogramExt = (GLenum)GL_HISTOGRAM_EXT,
		#endif
		#if defined(GL_IMPLEMENTATION_COLOR_READ_FORMAT)
			eImplementationColorReadFormat = (GLenum)GL_IMPLEMENTATION_COLOR_READ_FORMAT,
		#endif
		#if defined(GL_IMPLEMENTATION_COLOR_READ_TYPE)
			eImplementationColorReadType = (GLenum)GL_IMPLEMENTATION_COLOR_READ_TYPE,
		#endif
		#if defined(GL_INDEX_ARRAY)
			eIndexArray = (GLenum)GL_INDEX_ARRAY,
		#endif
		#if defined(GL_INDEX_ARRAY_COUNT_EXT)
			eIndexArrayCountExt = (GLenum)GL_INDEX_ARRAY_COUNT_EXT,
		#endif
		#if defined(GL_INDEX_ARRAY_STRIDE)
			eIndexArrayStride = (GLenum)GL_INDEX_ARRAY_STRIDE,
		#endif
		#if defined(GL_INDEX_ARRAY_TYPE)
			eIndexArrayType = (GLenum)GL_INDEX_ARRAY_TYPE,
		#endif
		#if defined(GL_INDEX_BITS)
			eIndexBits = (GLenum)GL_INDEX_BITS,
		#endif
		#if defined(GL_INDEX_CLEAR_VALUE)
			eIndexClearValue = (GLenum)GL_INDEX_CLEAR_VALUE,
		#endif
		#if defined(GL_INDEX_LOGIC_OP)
			eIndexLogicOp = (GLenum)GL_INDEX_LOGIC_OP,
		#endif
		#if defined(GL_INDEX_MODE)
			eIndexMode = (GLenum)GL_INDEX_MODE,
		#endif
		#if defined(GL_INDEX_OFFSET)
			eIndexOffset = (GLenum)GL_INDEX_OFFSET,
		#endif
		#if defined(GL_INDEX_SHIFT)
			eIndexShift = (GLenum)GL_INDEX_SHIFT,
		#endif
		#if defined(GL_INDEX_WRITEMASK)
			eIndexWritemask = (GLenum)GL_INDEX_WRITEMASK,
		#endif
		#if defined(GL_INSTRUMENT_MEASUREMENTS_SGIX)
			eInstrumentMeasurementsSgix = (GLenum)GL_INSTRUMENT_MEASUREMENTS_SGIX,
		#endif
		#if defined(GL_INTERLACE_SGIX)
			eInterlaceSgix = (GLenum)GL_INTERLACE_SGIX,
		#endif
		#if defined(GL_IR_INSTRUMENT1_SGIX)
			eIrInstrument1Sgix = (GLenum)GL_IR_INSTRUMENT1_SGIX,
		#endif
		#if defined(GL_LAYER_PROVOKING_VERTEX)
			eLayerProvokingVertex = (GLenum)GL_LAYER_PROVOKING_VERTEX,
		#endif
		#if defined(GL_LIGHT0)
			eLight0 = (GLenum)GL_LIGHT0,
		#endif
		#if defined(GL_LIGHT1)
			eLight1 = (GLenum)GL_LIGHT1,
		#endif
		#if defined(GL_LIGHT2)
			eLight2 = (GLenum)GL_LIGHT2,
		#endif
		#if defined(GL_LIGHT3)
			eLight3 = (GLenum)GL_LIGHT3,
		#endif
		#if defined(GL_LIGHT4)
			eLight4 = (GLenum)GL_LIGHT4,
		#endif
		#if defined(GL_LIGHT5)
			eLight5 = (GLenum)GL_LIGHT5,
		#endif
		#if defined(GL_LIGHT6)
			eLight6 = (GLenum)GL_LIGHT6,
		#endif
		#if defined(GL_LIGHT7)
			eLight7 = (GLenum)GL_LIGHT7,
		#endif
		#if defined(GL_LIGHTING)
			eLighting = (GLenum)GL_LIGHTING,
		#endif
		#if defined(GL_LIGHT_ENV_MODE_SGIX)
			eLightEnvModeSgix = (GLenum)GL_LIGHT_ENV_MODE_SGIX,
		#endif
		#if defined(GL_LIGHT_MODEL_AMBIENT)
			eLightModelAmbient = (GLenum)GL_LIGHT_MODEL_AMBIENT,
		#endif
		#if defined(GL_LIGHT_MODEL_COLOR_CONTROL)
			eLightModelColorControl = (GLenum)GL_LIGHT_MODEL_COLOR_CONTROL,
		#endif
		#if defined(GL_LIGHT_MODEL_LOCAL_VIEWER)
			eLightModelLocalViewer = (GLenum)GL_LIGHT_MODEL_LOCAL_VIEWER,
		#endif
		#if defined(GL_LIGHT_MODEL_TWO_SIDE)
			eLightModelTwoSide = (GLenum)GL_LIGHT_MODEL_TWO_SIDE,
		#endif
		#if defined(GL_LINE_SMOOTH)
			eLineSmooth = (GLenum)GL_LINE_SMOOTH,
		#endif
		#if defined(GL_LINE_SMOOTH_HINT)
			eLineSmoothHint = (GLenum)GL_LINE_SMOOTH_HINT,
		#endif
		#if defined(GL_LINE_STIPPLE)
			eLineStipple = (GLenum)GL_LINE_STIPPLE,
		#endif
		#if defined(GL_LINE_STIPPLE_PATTERN)
			eLineStipplePattern = (GLenum)GL_LINE_STIPPLE_PATTERN,
		#endif
		#if defined(GL_LINE_STIPPLE_REPEAT)
			eLineStippleRepeat = (GLenum)GL_LINE_STIPPLE_REPEAT,
		#endif
		#if defined(GL_LINE_WIDTH)
			eLineWidth = (GLenum)GL_LINE_WIDTH,
		#endif
		#if defined(GL_LINE_WIDTH_GRANULARITY)
			eLineWidthGranularity = (GLenum)GL_LINE_WIDTH_GRANULARITY,
		#endif
		#if defined(GL_LINE_WIDTH_RANGE)
			eLineWidthRange = (GLenum)GL_LINE_WIDTH_RANGE,
		#endif
		#if defined(GL_LIST_BASE)
			eListBase = (GLenum)GL_LIST_BASE,
		#endif
		#if defined(GL_LIST_INDEX)
			eListIndex = (GLenum)GL_LIST_INDEX,
		#endif
		#if defined(GL_LIST_MODE)
			eListMode = (GLenum)GL_LIST_MODE,
		#endif
		#if defined(GL_LOGIC_OP)
			eLogicOp = (GLenum)GL_LOGIC_OP,
		#endif
		#if defined(GL_LOGIC_OP_MODE)
			eLogicOpMode = (GLenum)GL_LOGIC_OP_MODE,
		#endif
		#if defined(GL_MAJOR_VERSION)
			eMajorVersion = (GLenum)GL_MAJOR_VERSION,
		#endif
		#if defined(GL_MAP1_COLOR_4)
			eMap1Color4 = (GLenum)GL_MAP1_COLOR_4,
		#endif
		#if defined(GL_MAP1_GRID_DOMAIN)
			eMap1GridDomain = (GLenum)GL_MAP1_GRID_DOMAIN,
		#endif
		#if defined(GL_MAP1_GRID_SEGMENTS)
			eMap1GridSegments = (GLenum)GL_MAP1_GRID_SEGMENTS,
		#endif
		#if defined(GL_MAP1_INDEX)
			eMap1Index = (GLenum)GL_MAP1_INDEX,
		#endif
		#if defined(GL_MAP1_NORMAL)
			eMap1Normal = (GLenum)GL_MAP1_NORMAL,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_1)
			eMap1TextureCoord1 = (GLenum)GL_MAP1_TEXTURE_COORD_1,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_2)
			eMap1TextureCoord2 = (GLenum)GL_MAP1_TEXTURE_COORD_2,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_3)
			eMap1TextureCoord3 = (GLenum)GL_MAP1_TEXTURE_COORD_3,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_4)
			eMap1TextureCoord4 = (GLenum)GL_MAP1_TEXTURE_COORD_4,
		#endif
		#if defined(GL_MAP1_VERTEX_3)
			eMap1Vertex3 = (GLenum)GL_MAP1_VERTEX_3,
		#endif
		#if defined(GL_MAP1_VERTEX_4)
			eMap1Vertex4 = (GLenum)GL_MAP1_VERTEX_4,
		#endif
		#if defined(GL_MAP2_COLOR_4)
			eMap2Color4 = (GLenum)GL_MAP2_COLOR_4,
		#endif
		#if defined(GL_MAP2_GRID_DOMAIN)
			eMap2GridDomain = (GLenum)GL_MAP2_GRID_DOMAIN,
		#endif
		#if defined(GL_MAP2_GRID_SEGMENTS)
			eMap2GridSegments = (GLenum)GL_MAP2_GRID_SEGMENTS,
		#endif
		#if defined(GL_MAP2_INDEX)
			eMap2Index = (GLenum)GL_MAP2_INDEX,
		#endif
		#if defined(GL_MAP2_NORMAL)
			eMap2Normal = (GLenum)GL_MAP2_NORMAL,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_1)
			eMap2TextureCoord1 = (GLenum)GL_MAP2_TEXTURE_COORD_1,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_2)
			eMap2TextureCoord2 = (GLenum)GL_MAP2_TEXTURE_COORD_2,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_3)
			eMap2TextureCoord3 = (GLenum)GL_MAP2_TEXTURE_COORD_3,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_4)
			eMap2TextureCoord4 = (GLenum)GL_MAP2_TEXTURE_COORD_4,
		#endif
		#if defined(GL_MAP2_VERTEX_3)
			eMap2Vertex3 = (GLenum)GL_MAP2_VERTEX_3,
		#endif
		#if defined(GL_MAP2_VERTEX_4)
			eMap2Vertex4 = (GLenum)GL_MAP2_VERTEX_4,
		#endif
		#if defined(GL_MAP_COLOR)
			eMapColor = (GLenum)GL_MAP_COLOR,
		#endif
		#if defined(GL_MAP_STENCIL)
			eMapStencil = (GLenum)GL_MAP_STENCIL,
		#endif
		#if defined(GL_MATRIX_MODE)
			eMatrixMode = (GLenum)GL_MATRIX_MODE,
		#endif
		#if defined(GL_MAX_3D_TEXTURE_SIZE)
			eMax3dTextureSize = (GLenum)GL_MAX_3D_TEXTURE_SIZE,
		#endif
		#if defined(GL_MAX_3D_TEXTURE_SIZE_EXT)
			eMax3dTextureSizeExt = (GLenum)GL_MAX_3D_TEXTURE_SIZE_EXT,
		#endif
		#if defined(GL_MAX_4D_TEXTURE_SIZE_SGIS)
			eMax4dTextureSizeSgis = (GLenum)GL_MAX_4D_TEXTURE_SIZE_SGIS,
		#endif
		#if defined(GL_MAX_ACTIVE_LIGHTS_SGIX)
			eMaxActiveLightsSgix = (GLenum)GL_MAX_ACTIVE_LIGHTS_SGIX,
		#endif
		#if defined(GL_MAX_ARRAY_TEXTURE_LAYERS)
			eMaxArrayTextureLayers = (GLenum)GL_MAX_ARRAY_TEXTURE_LAYERS,
		#endif
		#if defined(GL_MAX_ASYNC_DRAW_PIXELS_SGIX)
			eMaxAsyncDrawPixelsSgix = (GLenum)GL_MAX_ASYNC_DRAW_PIXELS_SGIX,
		#endif
		#if defined(GL_MAX_ASYNC_HISTOGRAM_SGIX)
			eMaxAsyncHistogramSgix = (GLenum)GL_MAX_ASYNC_HISTOGRAM_SGIX,
		#endif
		#if defined(GL_MAX_ASYNC_READ_PIXELS_SGIX)
			eMaxAsyncReadPixelsSgix = (GLenum)GL_MAX_ASYNC_READ_PIXELS_SGIX,
		#endif
		#if defined(GL_MAX_ASYNC_TEX_IMAGE_SGIX)
			eMaxAsyncTexImageSgix = (GLenum)GL_MAX_ASYNC_TEX_IMAGE_SGIX,
		#endif
		#if defined(GL_MAX_ATTRIB_STACK_DEPTH)
			eMaxAttribStackDepth = (GLenum)GL_MAX_ATTRIB_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_CLIENT_ATTRIB_STACK_DEPTH)
			eMaxClientAttribStackDepth = (GLenum)GL_MAX_CLIENT_ATTRIB_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_CLIPMAP_DEPTH_SGIX)
			eMaxClipmapDepthSgix = (GLenum)GL_MAX_CLIPMAP_DEPTH_SGIX,
		#endif
		#if defined(GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX)
			eMaxClipmapVirtualDepthSgix = (GLenum)GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX,
		#endif
		#if defined(GL_MAX_CLIP_DISTANCES)
			eMaxClipDistances = (GLenum)GL_MAX_CLIP_DISTANCES,
		#endif
		#if defined(GL_MAX_CLIP_PLANES)
			eMaxClipPlanes = (GLenum)GL_MAX_CLIP_PLANES,
		#endif
		#if defined(GL_MAX_COLOR_ATTACHMENTS)
			eMaxColorAttachments = (GLenum)GL_MAX_COLOR_ATTACHMENTS,
		#endif
		#if defined(GL_MAX_COLOR_ATTACHMENTS_EXT)
			eMaxColorAttachmentsExt = (GLenum)GL_MAX_COLOR_ATTACHMENTS_EXT,
		#endif
		#if defined(GL_MAX_COLOR_ATTACHMENTS_NV)
			eMaxColorAttachmentsNv = (GLenum)GL_MAX_COLOR_ATTACHMENTS_NV,
		#endif
		#if defined(GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI)
			eMaxColorMatrixStackDepthSgi = (GLenum)GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI,
		#endif
		#if defined(GL_MAX_COLOR_TEXTURE_SAMPLES)
			eMaxColorTextureSamples = (GLenum)GL_MAX_COLOR_TEXTURE_SAMPLES,
		#endif
		#if defined(GL_MAX_COMBINED_ATOMIC_COUNTERS)
			eMaxCombinedAtomicCounters = (GLenum)GL_MAX_COMBINED_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS)
			eMaxCombinedComputeUniformComponents = (GLenum)GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS)
			eMaxCombinedFragmentUniformComponents = (GLenum)GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS)
			eMaxCombinedGeometryUniformComponents = (GLenum)GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS)
			eMaxCombinedShaderStorageBlocks = (GLenum)GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS)
			eMaxCombinedTextureImageUnits = (GLenum)GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS,
		#endif
		#if defined(GL_MAX_COMBINED_UNIFORM_BLOCKS)
			eMaxCombinedUniformBlocks = (GLenum)GL_MAX_COMBINED_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS)
			eMaxCombinedVertexUniformComponents = (GLenum)GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_COMPUTE_ATOMIC_COUNTERS)
			eMaxComputeAtomicCounters = (GLenum)GL_MAX_COMPUTE_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS)
			eMaxComputeAtomicCounterBuffers = (GLenum)GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS,
		#endif
		#if defined(GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS)
			eMaxComputeShaderStorageBlocks = (GLenum)GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS)
			eMaxComputeTextureImageUnits = (GLenum)GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS,
		#endif
		#if defined(GL_MAX_COMPUTE_UNIFORM_BLOCKS)
			eMaxComputeUniformBlocks = (GLenum)GL_MAX_COMPUTE_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_COMPUTE_UNIFORM_COMPONENTS)
			eMaxComputeUniformComponents = (GLenum)GL_MAX_COMPUTE_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_COMPUTE_WORK_GROUP_COUNT)
			eMaxComputeWorkGroupCount = (GLenum)GL_MAX_COMPUTE_WORK_GROUP_COUNT,
		#endif
		#if defined(GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS)
			eMaxComputeWorkGroupInvocations = (GLenum)GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS,
		#endif
		#if defined(GL_MAX_COMPUTE_WORK_GROUP_SIZE)
			eMaxComputeWorkGroupSize = (GLenum)GL_MAX_COMPUTE_WORK_GROUP_SIZE,
		#endif
		#if defined(GL_MAX_CUBE_MAP_TEXTURE_SIZE)
			eMaxCubeMapTextureSize = (GLenum)GL_MAX_CUBE_MAP_TEXTURE_SIZE,
		#endif
		#if defined(GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB)
			eMaxCubeMapTextureSizeArb = (GLenum)GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB,
		#endif
		#if defined(GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT)
			eMaxCubeMapTextureSizeExt = (GLenum)GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT,
		#endif
		#if defined(GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES)
			eMaxCubeMapTextureSizeOes = (GLenum)GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES,
		#endif
		#if defined(GL_MAX_DEBUG_GROUP_STACK_DEPTH)
			eMaxDebugGroupStackDepth = (GLenum)GL_MAX_DEBUG_GROUP_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_DEPTH_TEXTURE_SAMPLES)
			eMaxDepthTextureSamples = (GLenum)GL_MAX_DEPTH_TEXTURE_SAMPLES,
		#endif
		#if defined(GL_MAX_DRAW_BUFFERS)
			eMaxDrawBuffers = (GLenum)GL_MAX_DRAW_BUFFERS,
		#endif
		#if defined(GL_MAX_DUAL_SOURCE_DRAW_BUFFERS)
			eMaxDualSourceDrawBuffers = (GLenum)GL_MAX_DUAL_SOURCE_DRAW_BUFFERS,
		#endif
		#if defined(GL_MAX_ELEMENTS_INDICES)
			eMaxElementsIndices = (GLenum)GL_MAX_ELEMENTS_INDICES,
		#endif
		#if defined(GL_MAX_ELEMENTS_VERTICES)
			eMaxElementsVertices = (GLenum)GL_MAX_ELEMENTS_VERTICES,
		#endif
		#if defined(GL_MAX_ELEMENT_INDEX)
			eMaxElementIndex = (GLenum)GL_MAX_ELEMENT_INDEX,
		#endif
		#if defined(GL_MAX_EVAL_ORDER)
			eMaxEvalOrder = (GLenum)GL_MAX_EVAL_ORDER,
		#endif
		#if defined(GL_MAX_FOG_FUNC_POINTS_SGIS)
			eMaxFogFuncPointsSgis = (GLenum)GL_MAX_FOG_FUNC_POINTS_SGIS,
		#endif
		#if defined(GL_MAX_FRAGMENT_ATOMIC_COUNTERS)
			eMaxFragmentAtomicCounters = (GLenum)GL_MAX_FRAGMENT_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_FRAGMENT_INPUT_COMPONENTS)
			eMaxFragmentInputComponents = (GLenum)GL_MAX_FRAGMENT_INPUT_COMPONENTS,
		#endif
		#if defined(GL_MAX_FRAGMENT_LIGHTS_SGIX)
			eMaxFragmentLightsSgix = (GLenum)GL_MAX_FRAGMENT_LIGHTS_SGIX,
		#endif
		#if defined(GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS)
			eMaxFragmentShaderStorageBlocks = (GLenum)GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_LAYERS_EXT)
			eMaxFragmentShadingRateAttachmentLayersExt = (GLenum)GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_LAYERS_EXT,
		#endif
		#if defined(GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_ASPECT_RATIO_EXT)
			eMaxFragmentShadingRateAttachmentTexelAspectRatioExt = (GLenum)GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_ASPECT_RATIO_EXT,
		#endif
		#if defined(GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT)
			eMaxFragmentShadingRateAttachmentTexelHeightExt = (GLenum)GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT,
		#endif
		#if defined(GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT)
			eMaxFragmentShadingRateAttachmentTexelWidthExt = (GLenum)GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT,
		#endif
		#if defined(GL_MAX_FRAGMENT_UNIFORM_BLOCKS)
			eMaxFragmentUniformBlocks = (GLenum)GL_MAX_FRAGMENT_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS)
			eMaxFragmentUniformComponents = (GLenum)GL_MAX_FRAGMENT_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_FRAGMENT_UNIFORM_VECTORS)
			eMaxFragmentUniformVectors = (GLenum)GL_MAX_FRAGMENT_UNIFORM_VECTORS,
		#endif
		#if defined(GL_MAX_FRAMEBUFFER_HEIGHT)
			eMaxFramebufferHeight = (GLenum)GL_MAX_FRAMEBUFFER_HEIGHT,
		#endif
		#if defined(GL_MAX_FRAMEBUFFER_LAYERS)
			eMaxFramebufferLayers = (GLenum)GL_MAX_FRAMEBUFFER_LAYERS,
		#endif
		#if defined(GL_MAX_FRAMEBUFFER_SAMPLES)
			eMaxFramebufferSamples = (GLenum)GL_MAX_FRAMEBUFFER_SAMPLES,
		#endif
		#if defined(GL_MAX_FRAMEBUFFER_WIDTH)
			eMaxFramebufferWidth = (GLenum)GL_MAX_FRAMEBUFFER_WIDTH,
		#endif
		#if defined(GL_MAX_FRAMEZOOM_FACTOR_SGIX)
			eMaxFramezoomFactorSgix = (GLenum)GL_MAX_FRAMEZOOM_FACTOR_SGIX,
		#endif
		#if defined(GL_MAX_GEOMETRY_ATOMIC_COUNTERS)
			eMaxGeometryAtomicCounters = (GLenum)GL_MAX_GEOMETRY_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_GEOMETRY_INPUT_COMPONENTS)
			eMaxGeometryInputComponents = (GLenum)GL_MAX_GEOMETRY_INPUT_COMPONENTS,
		#endif
		#if defined(GL_MAX_GEOMETRY_OUTPUT_COMPONENTS)
			eMaxGeometryOutputComponents = (GLenum)GL_MAX_GEOMETRY_OUTPUT_COMPONENTS,
		#endif
		#if defined(GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS)
			eMaxGeometryShaderStorageBlocks = (GLenum)GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS)
			eMaxGeometryTextureImageUnits = (GLenum)GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS,
		#endif
		#if defined(GL_MAX_GEOMETRY_UNIFORM_BLOCKS)
			eMaxGeometryUniformBlocks = (GLenum)GL_MAX_GEOMETRY_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_GEOMETRY_UNIFORM_COMPONENTS)
			eMaxGeometryUniformComponents = (GLenum)GL_MAX_GEOMETRY_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_INTEGER_SAMPLES)
			eMaxIntegerSamples = (GLenum)GL_MAX_INTEGER_SAMPLES,
		#endif
		#if defined(GL_MAX_LABEL_LENGTH)
			eMaxLabelLength = (GLenum)GL_MAX_LABEL_LENGTH,
		#endif
		#if defined(GL_MAX_LIGHTS)
			eMaxLights = (GLenum)GL_MAX_LIGHTS,
		#endif
		#if defined(GL_MAX_LIST_NESTING)
			eMaxListNesting = (GLenum)GL_MAX_LIST_NESTING,
		#endif
		#if defined(GL_MAX_MODELVIEW_STACK_DEPTH)
			eMaxModelviewStackDepth = (GLenum)GL_MAX_MODELVIEW_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_NAME_STACK_DEPTH)
			eMaxNameStackDepth = (GLenum)GL_MAX_NAME_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_PIXEL_MAP_TABLE)
			eMaxPixelMapTable = (GLenum)GL_MAX_PIXEL_MAP_TABLE,
		#endif
		#if defined(GL_MAX_PROGRAM_TEXEL_OFFSET)
			eMaxProgramTexelOffset = (GLenum)GL_MAX_PROGRAM_TEXEL_OFFSET,
		#endif
		#if defined(GL_MAX_PROJECTION_STACK_DEPTH)
			eMaxProjectionStackDepth = (GLenum)GL_MAX_PROJECTION_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_RECTANGLE_TEXTURE_SIZE)
			eMaxRectangleTextureSize = (GLenum)GL_MAX_RECTANGLE_TEXTURE_SIZE,
		#endif
		#if defined(GL_MAX_RENDERBUFFER_SIZE)
			eMaxRenderbufferSize = (GLenum)GL_MAX_RENDERBUFFER_SIZE,
		#endif
		#if defined(GL_MAX_SAMPLE_MASK_WORDS)
			eMaxSampleMaskWords = (GLenum)GL_MAX_SAMPLE_MASK_WORDS,
		#endif
		#if defined(GL_MAX_SERVER_WAIT_TIMEOUT)
			eMaxServerWaitTimeout = (GLenum)GL_MAX_SERVER_WAIT_TIMEOUT,
		#endif
		#if defined(GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS)
			eMaxShaderStorageBufferBindings = (GLenum)GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS,
		#endif
		#if defined(GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS)
			eMaxTessControlAtomicCounters = (GLenum)GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS)
			eMaxTessControlShaderStorageBlocks = (GLenum)GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS)
			eMaxTessControlUniformBlocks = (GLenum)GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS)
			eMaxTessEvaluationAtomicCounters = (GLenum)GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS)
			eMaxTessEvaluationShaderStorageBlocks = (GLenum)GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS)
			eMaxTessEvaluationUniformBlocks = (GLenum)GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_TEXTURE_BUFFER_SIZE)
			eMaxTextureBufferSize = (GLenum)GL_MAX_TEXTURE_BUFFER_SIZE,
		#endif
		#if defined(GL_MAX_TEXTURE_IMAGE_UNITS)
			eMaxTextureImageUnits = (GLenum)GL_MAX_TEXTURE_IMAGE_UNITS,
		#endif
		#if defined(GL_MAX_TEXTURE_LOD_BIAS)
			eMaxTextureLodBias = (GLenum)GL_MAX_TEXTURE_LOD_BIAS,
		#endif
		#if defined(GL_MAX_TEXTURE_SIZE)
			eMaxTextureSize = (GLenum)GL_MAX_TEXTURE_SIZE,
		#endif
		#if defined(GL_MAX_TEXTURE_STACK_DEPTH)
			eMaxTextureStackDepth = (GLenum)GL_MAX_TEXTURE_STACK_DEPTH,
		#endif
		#if defined(GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV)
			eMaxTimelineSemaphoreValueDifferenceNv = (GLenum)GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV,
		#endif
		#if defined(GL_MAX_UNIFORM_BLOCK_SIZE)
			eMaxUniformBlockSize = (GLenum)GL_MAX_UNIFORM_BLOCK_SIZE,
		#endif
		#if defined(GL_MAX_UNIFORM_BUFFER_BINDINGS)
			eMaxUniformBufferBindings = (GLenum)GL_MAX_UNIFORM_BUFFER_BINDINGS,
		#endif
		#if defined(GL_MAX_UNIFORM_LOCATIONS)
			eMaxUniformLocations = (GLenum)GL_MAX_UNIFORM_LOCATIONS,
		#endif
		#if defined(GL_MAX_VARYING_COMPONENTS)
			eMaxVaryingComponents = (GLenum)GL_MAX_VARYING_COMPONENTS,
		#endif
		#if defined(GL_MAX_VARYING_FLOATS)
			eMaxVaryingFloats = (GLenum)GL_MAX_VARYING_FLOATS,
		#endif
		#if defined(GL_MAX_VARYING_VECTORS)
			eMaxVaryingVectors = (GLenum)GL_MAX_VARYING_VECTORS,
		#endif
		#if defined(GL_MAX_VERTEX_ATOMIC_COUNTERS)
			eMaxVertexAtomicCounters = (GLenum)GL_MAX_VERTEX_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_MAX_VERTEX_ATTRIBS)
			eMaxVertexAttribs = (GLenum)GL_MAX_VERTEX_ATTRIBS,
		#endif
		#if defined(GL_MAX_VERTEX_ATTRIB_BINDINGS)
			eMaxVertexAttribBindings = (GLenum)GL_MAX_VERTEX_ATTRIB_BINDINGS,
		#endif
		#if defined(GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET)
			eMaxVertexAttribRelativeOffset = (GLenum)GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET,
		#endif
		#if defined(GL_MAX_VERTEX_OUTPUT_COMPONENTS)
			eMaxVertexOutputComponents = (GLenum)GL_MAX_VERTEX_OUTPUT_COMPONENTS,
		#endif
		#if defined(GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS)
			eMaxVertexShaderStorageBlocks = (GLenum)GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS,
		#endif
		#if defined(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS)
			eMaxVertexTextureImageUnits = (GLenum)GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS,
		#endif
		#if defined(GL_MAX_VERTEX_UNIFORM_BLOCKS)
			eMaxVertexUniformBlocks = (GLenum)GL_MAX_VERTEX_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_MAX_VERTEX_UNIFORM_COMPONENTS)
			eMaxVertexUniformComponents = (GLenum)GL_MAX_VERTEX_UNIFORM_COMPONENTS,
		#endif
		#if defined(GL_MAX_VERTEX_UNIFORM_VECTORS)
			eMaxVertexUniformVectors = (GLenum)GL_MAX_VERTEX_UNIFORM_VECTORS,
		#endif
		#if defined(GL_MAX_VIEWPORTS)
			eMaxViewports = (GLenum)GL_MAX_VIEWPORTS,
		#endif
		#if defined(GL_MAX_VIEWPORT_DIMS)
			eMaxViewportDims = (GLenum)GL_MAX_VIEWPORT_DIMS,
		#endif
		#if defined(GL_MINMAX_EXT)
			eMinmaxExt = (GLenum)GL_MINMAX_EXT,
		#endif
		#if defined(GL_MINOR_VERSION)
			eMinorVersion = (GLenum)GL_MINOR_VERSION,
		#endif
		#if defined(GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT)
			eMinFragmentShadingRateAttachmentTexelHeightExt = (GLenum)GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT,
		#endif
		#if defined(GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT)
			eMinFragmentShadingRateAttachmentTexelWidthExt = (GLenum)GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT,
		#endif
		#if defined(GL_MIN_MAP_BUFFER_ALIGNMENT)
			eMinMapBufferAlignment = (GLenum)GL_MIN_MAP_BUFFER_ALIGNMENT,
		#endif
		#if defined(GL_MIN_PROGRAM_TEXEL_OFFSET)
			eMinProgramTexelOffset = (GLenum)GL_MIN_PROGRAM_TEXEL_OFFSET,
		#endif
		#if defined(GL_MODELVIEW0_MATRIX_EXT)
			eModelview0MatrixExt = (GLenum)GL_MODELVIEW0_MATRIX_EXT,
		#endif
		#if defined(GL_MODELVIEW0_STACK_DEPTH_EXT)
			eModelview0StackDepthExt = (GLenum)GL_MODELVIEW0_STACK_DEPTH_EXT,
		#endif
		#if defined(GL_MODELVIEW_MATRIX)
			eModelviewMatrix = (GLenum)GL_MODELVIEW_MATRIX,
		#endif
		#if defined(GL_MODELVIEW_STACK_DEPTH)
			eModelviewStackDepth = (GLenum)GL_MODELVIEW_STACK_DEPTH,
		#endif
		#if defined(GL_MOTION_ESTIMATION_SEARCH_BLOCK_X_QCOM)
			eMotionEstimationSearchBlockXQcom = (GLenum)GL_MOTION_ESTIMATION_SEARCH_BLOCK_X_QCOM,
		#endif
		#if defined(GL_MOTION_ESTIMATION_SEARCH_BLOCK_Y_QCOM)
			eMotionEstimationSearchBlockYQcom = (GLenum)GL_MOTION_ESTIMATION_SEARCH_BLOCK_Y_QCOM,
		#endif
		#if defined(GL_MULTISAMPLE_SGIS)
			eMultisampleSgis = (GLenum)GL_MULTISAMPLE_SGIS,
		#endif
		#if defined(GL_NAME_STACK_DEPTH)
			eNameStackDepth = (GLenum)GL_NAME_STACK_DEPTH,
		#endif
		#if defined(GL_NORMALIZE)
			eNormalize = (GLenum)GL_NORMALIZE,
		#endif
		#if defined(GL_NORMAL_ARRAY)
			eNormalArray = (GLenum)GL_NORMAL_ARRAY,
		#endif
		#if defined(GL_NORMAL_ARRAY_COUNT_EXT)
			eNormalArrayCountExt = (GLenum)GL_NORMAL_ARRAY_COUNT_EXT,
		#endif
		#if defined(GL_NORMAL_ARRAY_STRIDE)
			eNormalArrayStride = (GLenum)GL_NORMAL_ARRAY_STRIDE,
		#endif
		#if defined(GL_NORMAL_ARRAY_TYPE)
			eNormalArrayType = (GLenum)GL_NORMAL_ARRAY_TYPE,
		#endif
		#if defined(GL_NUM_COMPRESSED_TEXTURE_FORMATS)
			eNumCompressedTextureFormats = (GLenum)GL_NUM_COMPRESSED_TEXTURE_FORMATS,
		#endif
		#if defined(GL_NUM_DEVICE_UUIDS_EXT)
			eNumDeviceUuidsExt = (GLenum)GL_NUM_DEVICE_UUIDS_EXT,
		#endif
		#if defined(GL_NUM_EXTENSIONS)
			eNumExtensions = (GLenum)GL_NUM_EXTENSIONS,
		#endif
		#if defined(GL_NUM_PROGRAM_BINARY_FORMATS)
			eNumProgramBinaryFormats = (GLenum)GL_NUM_PROGRAM_BINARY_FORMATS,
		#endif
		#if defined(GL_NUM_SHADER_BINARY_FORMATS)
			eNumShaderBinaryFormats = (GLenum)GL_NUM_SHADER_BINARY_FORMATS,
		#endif
		#if defined(GL_PACK_ALIGNMENT)
			ePackAlignment = (GLenum)GL_PACK_ALIGNMENT,
		#endif
		#if defined(GL_PACK_CMYK_HINT_EXT)
			ePackCmykHintExt = (GLenum)GL_PACK_CMYK_HINT_EXT,
		#endif
		#if defined(GL_PACK_IMAGE_DEPTH_SGIS)
			ePackImageDepthSgis = (GLenum)GL_PACK_IMAGE_DEPTH_SGIS,
		#endif
		#if defined(GL_PACK_IMAGE_HEIGHT)
			ePackImageHeight = (GLenum)GL_PACK_IMAGE_HEIGHT,
		#endif
		#if defined(GL_PACK_IMAGE_HEIGHT_EXT)
			ePackImageHeightExt = (GLenum)GL_PACK_IMAGE_HEIGHT_EXT,
		#endif
		#if defined(GL_PACK_LSB_FIRST)
			ePackLsbFirst = (GLenum)GL_PACK_LSB_FIRST,
		#endif
		#if defined(GL_PACK_RESAMPLE_SGIX)
			ePackResampleSgix = (GLenum)GL_PACK_RESAMPLE_SGIX,
		#endif
		#if defined(GL_PACK_ROW_LENGTH)
			ePackRowLength = (GLenum)GL_PACK_ROW_LENGTH,
		#endif
		#if defined(GL_PACK_ROW_LENGTH_NV)
			ePackRowLengthNv = (GLenum)GL_PACK_ROW_LENGTH_NV,
		#endif
		#if defined(GL_PACK_SKIP_IMAGES)
			ePackSkipImages = (GLenum)GL_PACK_SKIP_IMAGES,
		#endif
		#if defined(GL_PACK_SKIP_IMAGES_EXT)
			ePackSkipImagesExt = (GLenum)GL_PACK_SKIP_IMAGES_EXT,
		#endif
		#if defined(GL_PACK_SKIP_PIXELS)
			ePackSkipPixels = (GLenum)GL_PACK_SKIP_PIXELS,
		#endif
		#if defined(GL_PACK_SKIP_PIXELS_NV)
			ePackSkipPixelsNv = (GLenum)GL_PACK_SKIP_PIXELS_NV,
		#endif
		#if defined(GL_PACK_SKIP_ROWS)
			ePackSkipRows = (GLenum)GL_PACK_SKIP_ROWS,
		#endif
		#if defined(GL_PACK_SKIP_ROWS_NV)
			ePackSkipRowsNv = (GLenum)GL_PACK_SKIP_ROWS_NV,
		#endif
		#if defined(GL_PACK_SKIP_VOLUMES_SGIS)
			ePackSkipVolumesSgis = (GLenum)GL_PACK_SKIP_VOLUMES_SGIS,
		#endif
		#if defined(GL_PACK_SUBSAMPLE_RATE_SGIX)
			ePackSubsampleRateSgix = (GLenum)GL_PACK_SUBSAMPLE_RATE_SGIX,
		#endif
		#if defined(GL_PACK_SWAP_BYTES)
			ePackSwapBytes = (GLenum)GL_PACK_SWAP_BYTES,
		#endif
		#if defined(GL_PERSPECTIVE_CORRECTION_HINT)
			ePerspectiveCorrectionHint = (GLenum)GL_PERSPECTIVE_CORRECTION_HINT,
		#endif
		#if defined(GL_PIXEL_MAP_A_TO_A_SIZE)
			ePixelMapAToASize = (GLenum)GL_PIXEL_MAP_A_TO_A_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_B_TO_B_SIZE)
			ePixelMapBToBSize = (GLenum)GL_PIXEL_MAP_B_TO_B_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_G_TO_G_SIZE)
			ePixelMapGToGSize = (GLenum)GL_PIXEL_MAP_G_TO_G_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_A_SIZE)
			ePixelMapIToASize = (GLenum)GL_PIXEL_MAP_I_TO_A_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_B_SIZE)
			ePixelMapIToBSize = (GLenum)GL_PIXEL_MAP_I_TO_B_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_G_SIZE)
			ePixelMapIToGSize = (GLenum)GL_PIXEL_MAP_I_TO_G_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_I_SIZE)
			ePixelMapIToISize = (GLenum)GL_PIXEL_MAP_I_TO_I_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_R_SIZE)
			ePixelMapIToRSize = (GLenum)GL_PIXEL_MAP_I_TO_R_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_R_TO_R_SIZE)
			ePixelMapRToRSize = (GLenum)GL_PIXEL_MAP_R_TO_R_SIZE,
		#endif
		#if defined(GL_PIXEL_MAP_S_TO_S_SIZE)
			ePixelMapSToSSize = (GLenum)GL_PIXEL_MAP_S_TO_S_SIZE,
		#endif
		#if defined(GL_PIXEL_PACK_BUFFER_BINDING)
			ePixelPackBufferBinding = (GLenum)GL_PIXEL_PACK_BUFFER_BINDING,
		#endif
		#if defined(GL_PIXEL_TEXTURE_SGIS)
			ePixelTextureSgis = (GLenum)GL_PIXEL_TEXTURE_SGIS,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_MODE_SGIX)
			ePixelTexGenModeSgix = (GLenum)GL_PIXEL_TEX_GEN_MODE_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_SGIX)
			ePixelTexGenSgix = (GLenum)GL_PIXEL_TEX_GEN_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX)
			ePixelTileBestAlignmentSgix = (GLenum)GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_CACHE_INCREMENT_SGIX)
			ePixelTileCacheIncrementSgix = (GLenum)GL_PIXEL_TILE_CACHE_INCREMENT_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_CACHE_SIZE_SGIX)
			ePixelTileCacheSizeSgix = (GLenum)GL_PIXEL_TILE_CACHE_SIZE_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_GRID_DEPTH_SGIX)
			ePixelTileGridDepthSgix = (GLenum)GL_PIXEL_TILE_GRID_DEPTH_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_GRID_HEIGHT_SGIX)
			ePixelTileGridHeightSgix = (GLenum)GL_PIXEL_TILE_GRID_HEIGHT_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_GRID_WIDTH_SGIX)
			ePixelTileGridWidthSgix = (GLenum)GL_PIXEL_TILE_GRID_WIDTH_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_HEIGHT_SGIX)
			ePixelTileHeightSgix = (GLenum)GL_PIXEL_TILE_HEIGHT_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_WIDTH_SGIX)
			ePixelTileWidthSgix = (GLenum)GL_PIXEL_TILE_WIDTH_SGIX,
		#endif
		#if defined(GL_PIXEL_UNPACK_BUFFER_BINDING)
			ePixelUnpackBufferBinding = (GLenum)GL_PIXEL_UNPACK_BUFFER_BINDING,
		#endif
		#if defined(GL_POINT_DISTANCE_ATTENUATION)
			ePointDistanceAttenuation = (GLenum)GL_POINT_DISTANCE_ATTENUATION,
		#endif
		#if defined(GL_POINT_DISTANCE_ATTENUATION_ARB)
			ePointDistanceAttenuationArb = (GLenum)GL_POINT_DISTANCE_ATTENUATION_ARB,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE)
			ePointFadeThresholdSize = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE_ARB)
			ePointFadeThresholdSizeArb = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE_ARB,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE_EXT)
			ePointFadeThresholdSizeExt = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE_EXT,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE_SGIS)
			ePointFadeThresholdSizeSgis = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE_SGIS,
		#endif
		#if defined(GL_POINT_SIZE)
			ePointSize = (GLenum)GL_POINT_SIZE,
		#endif
		#if defined(GL_POINT_SIZE_GRANULARITY)
			ePointSizeGranularity = (GLenum)GL_POINT_SIZE_GRANULARITY,
		#endif
		#if defined(GL_POINT_SIZE_MAX)
			ePointSizeMax = (GLenum)GL_POINT_SIZE_MAX,
		#endif
		#if defined(GL_POINT_SIZE_MAX_ARB)
			ePointSizeMaxArb = (GLenum)GL_POINT_SIZE_MAX_ARB,
		#endif
		#if defined(GL_POINT_SIZE_MAX_EXT)
			ePointSizeMaxExt = (GLenum)GL_POINT_SIZE_MAX_EXT,
		#endif
		#if defined(GL_POINT_SIZE_MAX_SGIS)
			ePointSizeMaxSgis = (GLenum)GL_POINT_SIZE_MAX_SGIS,
		#endif
		#if defined(GL_POINT_SIZE_MIN)
			ePointSizeMin = (GLenum)GL_POINT_SIZE_MIN,
		#endif
		#if defined(GL_POINT_SIZE_MIN_ARB)
			ePointSizeMinArb = (GLenum)GL_POINT_SIZE_MIN_ARB,
		#endif
		#if defined(GL_POINT_SIZE_MIN_EXT)
			ePointSizeMinExt = (GLenum)GL_POINT_SIZE_MIN_EXT,
		#endif
		#if defined(GL_POINT_SIZE_MIN_SGIS)
			ePointSizeMinSgis = (GLenum)GL_POINT_SIZE_MIN_SGIS,
		#endif
		#if defined(GL_POINT_SIZE_RANGE)
			ePointSizeRange = (GLenum)GL_POINT_SIZE_RANGE,
		#endif
		#if defined(GL_POINT_SMOOTH)
			ePointSmooth = (GLenum)GL_POINT_SMOOTH,
		#endif
		#if defined(GL_POINT_SMOOTH_HINT)
			ePointSmoothHint = (GLenum)GL_POINT_SMOOTH_HINT,
		#endif
		#if defined(GL_POLYGON_MODE)
			ePolygonMode = (GLenum)GL_POLYGON_MODE,
		#endif
		#if defined(GL_POLYGON_OFFSET_BIAS_EXT)
			ePolygonOffsetBiasExt = (GLenum)GL_POLYGON_OFFSET_BIAS_EXT,
		#endif
		#if defined(GL_POLYGON_OFFSET_FACTOR)
			ePolygonOffsetFactor = (GLenum)GL_POLYGON_OFFSET_FACTOR,
		#endif
		#if defined(GL_POLYGON_OFFSET_FILL)
			ePolygonOffsetFill = (GLenum)GL_POLYGON_OFFSET_FILL,
		#endif
		#if defined(GL_POLYGON_OFFSET_LINE)
			ePolygonOffsetLine = (GLenum)GL_POLYGON_OFFSET_LINE,
		#endif
		#if defined(GL_POLYGON_OFFSET_POINT)
			ePolygonOffsetPoint = (GLenum)GL_POLYGON_OFFSET_POINT,
		#endif
		#if defined(GL_POLYGON_OFFSET_UNITS)
			ePolygonOffsetUnits = (GLenum)GL_POLYGON_OFFSET_UNITS,
		#endif
		#if defined(GL_POLYGON_SMOOTH)
			ePolygonSmooth = (GLenum)GL_POLYGON_SMOOTH,
		#endif
		#if defined(GL_POLYGON_SMOOTH_HINT)
			ePolygonSmoothHint = (GLenum)GL_POLYGON_SMOOTH_HINT,
		#endif
		#if defined(GL_POLYGON_STIPPLE)
			ePolygonStipple = (GLenum)GL_POLYGON_STIPPLE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI)
			ePostColorMatrixAlphaBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI)
			ePostColorMatrixAlphaScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI)
			ePostColorMatrixBlueBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI)
			ePostColorMatrixBlueScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI)
			ePostColorMatrixColorTableSgi = (GLenum)GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI)
			ePostColorMatrixGreenBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI)
			ePostColorMatrixGreenScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_RED_BIAS_SGI)
			ePostColorMatrixRedBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_RED_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_RED_SCALE_SGI)
			ePostColorMatrixRedScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_RED_SCALE_SGI,
		#endif
		#if defined(GL_POST_CONVOLUTION_ALPHA_BIAS_EXT)
			ePostConvolutionAlphaBiasExt = (GLenum)GL_POST_CONVOLUTION_ALPHA_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_ALPHA_SCALE_EXT)
			ePostConvolutionAlphaScaleExt = (GLenum)GL_POST_CONVOLUTION_ALPHA_SCALE_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_BLUE_BIAS_EXT)
			ePostConvolutionBlueBiasExt = (GLenum)GL_POST_CONVOLUTION_BLUE_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_BLUE_SCALE_EXT)
			ePostConvolutionBlueScaleExt = (GLenum)GL_POST_CONVOLUTION_BLUE_SCALE_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_COLOR_TABLE_SGI)
			ePostConvolutionColorTableSgi = (GLenum)GL_POST_CONVOLUTION_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_POST_CONVOLUTION_GREEN_BIAS_EXT)
			ePostConvolutionGreenBiasExt = (GLenum)GL_POST_CONVOLUTION_GREEN_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_GREEN_SCALE_EXT)
			ePostConvolutionGreenScaleExt = (GLenum)GL_POST_CONVOLUTION_GREEN_SCALE_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_RED_BIAS_EXT)
			ePostConvolutionRedBiasExt = (GLenum)GL_POST_CONVOLUTION_RED_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_RED_SCALE_EXT)
			ePostConvolutionRedScaleExt = (GLenum)GL_POST_CONVOLUTION_RED_SCALE_EXT,
		#endif
		#if defined(GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX)
			ePostTextureFilterBiasRangeSgix = (GLenum)GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX,
		#endif
		#if defined(GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX)
			ePostTextureFilterScaleRangeSgix = (GLenum)GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX,
		#endif
		#if defined(GL_PRIMITIVE_RESTART_INDEX)
			ePrimitiveRestartIndex = (GLenum)GL_PRIMITIVE_RESTART_INDEX,
		#endif
		#if defined(GL_PROGRAM_BINARY_FORMATS)
			eProgramBinaryFormats = (GLenum)GL_PROGRAM_BINARY_FORMATS,
		#endif
		#if defined(GL_PROGRAM_PIPELINE_BINDING)
			eProgramPipelineBinding = (GLenum)GL_PROGRAM_PIPELINE_BINDING,
		#endif
		#if defined(GL_PROGRAM_POINT_SIZE)
			eProgramPointSize = (GLenum)GL_PROGRAM_POINT_SIZE,
		#endif
		#if defined(GL_PROJECTION_MATRIX)
			eProjectionMatrix = (GLenum)GL_PROJECTION_MATRIX,
		#endif
		#if defined(GL_PROJECTION_STACK_DEPTH)
			eProjectionStackDepth = (GLenum)GL_PROJECTION_STACK_DEPTH,
		#endif
		#if defined(GL_PROVOKING_VERTEX)
			eProvokingVertex = (GLenum)GL_PROVOKING_VERTEX,
		#endif
		#if defined(GL_READ_BUFFER)
			eReadBuffer = (GLenum)GL_READ_BUFFER,
		#endif
		#if defined(GL_READ_BUFFER_EXT)
			eReadBufferExt = (GLenum)GL_READ_BUFFER_EXT,
		#endif
		#if defined(GL_READ_BUFFER_NV)
			eReadBufferNv = (GLenum)GL_READ_BUFFER_NV,
		#endif
		#if defined(GL_READ_FRAMEBUFFER_BINDING)
			eReadFramebufferBinding = (GLenum)GL_READ_FRAMEBUFFER_BINDING,
		#endif
		#if defined(GL_RED_BIAS)
			eRedBias = (GLenum)GL_RED_BIAS,
		#endif
		#if defined(GL_RED_BITS)
			eRedBits = (GLenum)GL_RED_BITS,
		#endif
		#if defined(GL_RED_SCALE)
			eRedScale = (GLenum)GL_RED_SCALE,
		#endif
		#if defined(GL_REFERENCE_PLANE_EQUATION_SGIX)
			eReferencePlaneEquationSgix = (GLenum)GL_REFERENCE_PLANE_EQUATION_SGIX,
		#endif
		#if defined(GL_REFERENCE_PLANE_SGIX)
			eReferencePlaneSgix = (GLenum)GL_REFERENCE_PLANE_SGIX,
		#endif
		#if defined(GL_RENDERBUFFER_BINDING)
			eRenderbufferBinding = (GLenum)GL_RENDERBUFFER_BINDING,
		#endif
		#if defined(GL_RENDER_MODE)
			eRenderMode = (GLenum)GL_RENDER_MODE,
		#endif
		#if defined(GL_RESCALE_NORMAL_EXT)
			eRescaleNormalExt = (GLenum)GL_RESCALE_NORMAL_EXT,
		#endif
		#if defined(GL_RGBA_MODE)
			eRgbaMode = (GLenum)GL_RGBA_MODE,
		#endif
		#if defined(GL_SAMPLER_BINDING)
			eSamplerBinding = (GLenum)GL_SAMPLER_BINDING,
		#endif
		#if defined(GL_SAMPLES)
			eSamples = (GLenum)GL_SAMPLES,
		#endif
		#if defined(GL_SAMPLES_SGIS)
			eSamplesSgis = (GLenum)GL_SAMPLES_SGIS,
		#endif
		#if defined(GL_SAMPLE_ALPHA_TO_MASK_SGIS)
			eSampleAlphaToMaskSgis = (GLenum)GL_SAMPLE_ALPHA_TO_MASK_SGIS,
		#endif
		#if defined(GL_SAMPLE_ALPHA_TO_ONE_SGIS)
			eSampleAlphaToOneSgis = (GLenum)GL_SAMPLE_ALPHA_TO_ONE_SGIS,
		#endif
		#if defined(GL_SAMPLE_BUFFERS)
			eSampleBuffers = (GLenum)GL_SAMPLE_BUFFERS,
		#endif
		#if defined(GL_SAMPLE_BUFFERS_SGIS)
			eSampleBuffersSgis = (GLenum)GL_SAMPLE_BUFFERS_SGIS,
		#endif
		#if defined(GL_SAMPLE_COVERAGE_INVERT)
			eSampleCoverageInvert = (GLenum)GL_SAMPLE_COVERAGE_INVERT,
		#endif
		#if defined(GL_SAMPLE_COVERAGE_VALUE)
			eSampleCoverageValue = (GLenum)GL_SAMPLE_COVERAGE_VALUE,
		#endif
		#if defined(GL_SAMPLE_MASK_INVERT_SGIS)
			eSampleMaskInvertSgis = (GLenum)GL_SAMPLE_MASK_INVERT_SGIS,
		#endif
		#if defined(GL_SAMPLE_MASK_SGIS)
			eSampleMaskSgis = (GLenum)GL_SAMPLE_MASK_SGIS,
		#endif
		#if defined(GL_SAMPLE_MASK_VALUE_SGIS)
			eSampleMaskValueSgis = (GLenum)GL_SAMPLE_MASK_VALUE_SGIS,
		#endif
		#if defined(GL_SAMPLE_PATTERN_SGIS)
			eSamplePatternSgis = (GLenum)GL_SAMPLE_PATTERN_SGIS,
		#endif
		#if defined(GL_SCISSOR_BOX)
			eScissorBox = (GLenum)GL_SCISSOR_BOX,
		#endif
		#if defined(GL_SCISSOR_TEST)
			eScissorTest = (GLenum)GL_SCISSOR_TEST,
		#endif
		#if defined(GL_SELECTION_BUFFER_SIZE)
			eSelectionBufferSize = (GLenum)GL_SELECTION_BUFFER_SIZE,
		#endif
		#if defined(GL_SEPARABLE_2D_EXT)
			eSeparable2dExt = (GLenum)GL_SEPARABLE_2D_EXT,
		#endif
		#if defined(GL_SHADER_BINARY_FORMATS)
			eShaderBinaryFormats = (GLenum)GL_SHADER_BINARY_FORMATS,
		#endif
		#if defined(GL_SHADER_COMPILER)
			eShaderCompiler = (GLenum)GL_SHADER_COMPILER,
		#endif
		#if defined(GL_SHADER_CORE_ACTIVE_COUNT_ARM)
			eShaderCoreActiveCountArm = (GLenum)GL_SHADER_CORE_ACTIVE_COUNT_ARM,
		#endif
		#if defined(GL_SHADER_CORE_COUNT_ARM)
			eShaderCoreCountArm = (GLenum)GL_SHADER_CORE_COUNT_ARM,
		#endif
		#if defined(GL_SHADER_CORE_FMA_RATE_ARM)
			eShaderCoreFmaRateArm = (GLenum)GL_SHADER_CORE_FMA_RATE_ARM,
		#endif
		#if defined(GL_SHADER_CORE_MAX_WARP_COUNT_ARM)
			eShaderCoreMaxWarpCountArm = (GLenum)GL_SHADER_CORE_MAX_WARP_COUNT_ARM,
		#endif
		#if defined(GL_SHADER_CORE_PIXEL_RATE_ARM)
			eShaderCorePixelRateArm = (GLenum)GL_SHADER_CORE_PIXEL_RATE_ARM,
		#endif
		#if defined(GL_SHADER_CORE_PRESENT_MASK_ARM)
			eShaderCorePresentMaskArm = (GLenum)GL_SHADER_CORE_PRESENT_MASK_ARM,
		#endif
		#if defined(GL_SHADER_CORE_TEXEL_RATE_ARM)
			eShaderCoreTexelRateArm = (GLenum)GL_SHADER_CORE_TEXEL_RATE_ARM,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER_BINDING)
			eShaderStorageBufferBinding = (GLenum)GL_SHADER_STORAGE_BUFFER_BINDING,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT)
			eShaderStorageBufferOffsetAlignment = (GLenum)GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER_SIZE)
			eShaderStorageBufferSize = (GLenum)GL_SHADER_STORAGE_BUFFER_SIZE,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER_START)
			eShaderStorageBufferStart = (GLenum)GL_SHADER_STORAGE_BUFFER_START,
		#endif
		#if defined(GL_SHADE_MODEL)
			eShadeModel = (GLenum)GL_SHADE_MODEL,
		#endif
		#if defined(GL_SHADING_RATE_EXT)
			eShadingRateExt = (GLenum)GL_SHADING_RATE_EXT,
		#endif
		#if defined(GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV)
			eShadingRateImagePaletteCountNv = (GLenum)GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV,
		#endif
		#if defined(GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV)
			eShadingRateImagePerPrimitiveNv = (GLenum)GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV,
		#endif
		#if defined(GL_SHADING_RATE_QCOM)
			eShadingRateQcom = (GLenum)GL_SHADING_RATE_QCOM,
		#endif
		#if defined(GL_SHARED_TEXTURE_PALETTE_EXT)
			eSharedTexturePaletteExt = (GLenum)GL_SHARED_TEXTURE_PALETTE_EXT,
		#endif
		#if defined(GL_SMOOTH_LINE_WIDTH_GRANULARITY)
			eSmoothLineWidthGranularity = (GLenum)GL_SMOOTH_LINE_WIDTH_GRANULARITY,
		#endif
		#if defined(GL_SMOOTH_LINE_WIDTH_RANGE)
			eSmoothLineWidthRange = (GLenum)GL_SMOOTH_LINE_WIDTH_RANGE,
		#endif
		#if defined(GL_SMOOTH_POINT_SIZE_GRANULARITY)
			eSmoothPointSizeGranularity = (GLenum)GL_SMOOTH_POINT_SIZE_GRANULARITY,
		#endif
		#if defined(GL_SMOOTH_POINT_SIZE_RANGE)
			eSmoothPointSizeRange = (GLenum)GL_SMOOTH_POINT_SIZE_RANGE,
		#endif
		#if defined(GL_SPRITE_AXIS_SGIX)
			eSpriteAxisSgix = (GLenum)GL_SPRITE_AXIS_SGIX,
		#endif
		#if defined(GL_SPRITE_MODE_SGIX)
			eSpriteModeSgix = (GLenum)GL_SPRITE_MODE_SGIX,
		#endif
		#if defined(GL_SPRITE_SGIX)
			eSpriteSgix = (GLenum)GL_SPRITE_SGIX,
		#endif
		#if defined(GL_SPRITE_TRANSLATION_SGIX)
			eSpriteTranslationSgix = (GLenum)GL_SPRITE_TRANSLATION_SGIX,
		#endif
		#if defined(GL_STENCIL_BACK_FAIL)
			eStencilBackFail = (GLenum)GL_STENCIL_BACK_FAIL,
		#endif
		#if defined(GL_STENCIL_BACK_FUNC)
			eStencilBackFunc = (GLenum)GL_STENCIL_BACK_FUNC,
		#endif
		#if defined(GL_STENCIL_BACK_PASS_DEPTH_FAIL)
			eStencilBackPassDepthFail = (GLenum)GL_STENCIL_BACK_PASS_DEPTH_FAIL,
		#endif
		#if defined(GL_STENCIL_BACK_PASS_DEPTH_PASS)
			eStencilBackPassDepthPass = (GLenum)GL_STENCIL_BACK_PASS_DEPTH_PASS,
		#endif
		#if defined(GL_STENCIL_BACK_REF)
			eStencilBackRef = (GLenum)GL_STENCIL_BACK_REF,
		#endif
		#if defined(GL_STENCIL_BACK_VALUE_MASK)
			eStencilBackValueMask = (GLenum)GL_STENCIL_BACK_VALUE_MASK,
		#endif
		#if defined(GL_STENCIL_BACK_WRITEMASK)
			eStencilBackWritemask = (GLenum)GL_STENCIL_BACK_WRITEMASK,
		#endif
		#if defined(GL_STENCIL_BITS)
			eStencilBits = (GLenum)GL_STENCIL_BITS,
		#endif
		#if defined(GL_STENCIL_CLEAR_VALUE)
			eStencilClearValue = (GLenum)GL_STENCIL_CLEAR_VALUE,
		#endif
		#if defined(GL_STENCIL_FAIL)
			eStencilFail = (GLenum)GL_STENCIL_FAIL,
		#endif
		#if defined(GL_STENCIL_FUNC)
			eStencilFunc = (GLenum)GL_STENCIL_FUNC,
		#endif
		#if defined(GL_STENCIL_PASS_DEPTH_FAIL)
			eStencilPassDepthFail = (GLenum)GL_STENCIL_PASS_DEPTH_FAIL,
		#endif
		#if defined(GL_STENCIL_PASS_DEPTH_PASS)
			eStencilPassDepthPass = (GLenum)GL_STENCIL_PASS_DEPTH_PASS,
		#endif
		#if defined(GL_STENCIL_REF)
			eStencilRef = (GLenum)GL_STENCIL_REF,
		#endif
		#if defined(GL_STENCIL_TEST)
			eStencilTest = (GLenum)GL_STENCIL_TEST,
		#endif
		#if defined(GL_STENCIL_VALUE_MASK)
			eStencilValueMask = (GLenum)GL_STENCIL_VALUE_MASK,
		#endif
		#if defined(GL_STENCIL_WRITEMASK)
			eStencilWritemask = (GLenum)GL_STENCIL_WRITEMASK,
		#endif
		#if defined(GL_STEREO)
			eStereo = (GLenum)GL_STEREO,
		#endif
		#if defined(GL_SUBPIXEL_BITS)
			eSubpixelBits = (GLenum)GL_SUBPIXEL_BITS,
		#endif
		#if defined(GL_TEXTURE_1D)
			eTexture1d = (GLenum)GL_TEXTURE_1D,
		#endif
		#if defined(GL_TEXTURE_2D)
			eTexture2d = (GLenum)GL_TEXTURE_2D,
		#endif
		#if defined(GL_TEXTURE_3D_BINDING_EXT)
			eTexture3dBindingExt = (GLenum)GL_TEXTURE_3D_BINDING_EXT,
		#endif
		#if defined(GL_TEXTURE_3D_EXT)
			eTexture3dExt = (GLenum)GL_TEXTURE_3D_EXT,
		#endif
		#if defined(GL_TEXTURE_4D_BINDING_SGIS)
			eTexture4dBindingSgis = (GLenum)GL_TEXTURE_4D_BINDING_SGIS,
		#endif
		#if defined(GL_TEXTURE_4D_SGIS)
			eTexture4dSgis = (GLenum)GL_TEXTURE_4D_SGIS,
		#endif
		#if defined(GL_TEXTURE_BINDING_1D)
			eTextureBinding1d = (GLenum)GL_TEXTURE_BINDING_1D,
		#endif
		#if defined(GL_TEXTURE_BINDING_1D_ARRAY)
			eTextureBinding1dArray = (GLenum)GL_TEXTURE_BINDING_1D_ARRAY,
		#endif
		#if defined(GL_TEXTURE_BINDING_2D)
			eTextureBinding2d = (GLenum)GL_TEXTURE_BINDING_2D,
		#endif
		#if defined(GL_TEXTURE_BINDING_2D_ARRAY)
			eTextureBinding2dArray = (GLenum)GL_TEXTURE_BINDING_2D_ARRAY,
		#endif
		#if defined(GL_TEXTURE_BINDING_2D_MULTISAMPLE)
			eTextureBinding2dMultisample = (GLenum)GL_TEXTURE_BINDING_2D_MULTISAMPLE,
		#endif
		#if defined(GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY)
			eTextureBinding2dMultisampleArray = (GLenum)GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_TEXTURE_BINDING_3D)
			eTextureBinding3d = (GLenum)GL_TEXTURE_BINDING_3D,
		#endif
		#if defined(GL_TEXTURE_BINDING_BUFFER)
			eTextureBindingBuffer = (GLenum)GL_TEXTURE_BINDING_BUFFER,
		#endif
		#if defined(GL_TEXTURE_BINDING_CUBE_MAP)
			eTextureBindingCubeMap = (GLenum)GL_TEXTURE_BINDING_CUBE_MAP,
		#endif
		#if defined(GL_TEXTURE_BINDING_CUBE_MAP_ARB)
			eTextureBindingCubeMapArb = (GLenum)GL_TEXTURE_BINDING_CUBE_MAP_ARB,
		#endif
		#if defined(GL_TEXTURE_BINDING_CUBE_MAP_EXT)
			eTextureBindingCubeMapExt = (GLenum)GL_TEXTURE_BINDING_CUBE_MAP_EXT,
		#endif
		#if defined(GL_TEXTURE_BINDING_CUBE_MAP_OES)
			eTextureBindingCubeMapOes = (GLenum)GL_TEXTURE_BINDING_CUBE_MAP_OES,
		#endif
		#if defined(GL_TEXTURE_BINDING_RECTANGLE)
			eTextureBindingRectangle = (GLenum)GL_TEXTURE_BINDING_RECTANGLE,
		#endif
		#if defined(GL_TEXTURE_BINDING_RECTANGLE_ARB)
			eTextureBindingRectangleArb = (GLenum)GL_TEXTURE_BINDING_RECTANGLE_ARB,
		#endif
		#if defined(GL_TEXTURE_BINDING_RECTANGLE_NV)
			eTextureBindingRectangleNv = (GLenum)GL_TEXTURE_BINDING_RECTANGLE_NV,
		#endif
		#if defined(GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT)
			eTextureBufferOffsetAlignment = (GLenum)GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT,
		#endif
		#if defined(GL_TEXTURE_COLOR_TABLE_SGI)
			eTextureColorTableSgi = (GLenum)GL_TEXTURE_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_TEXTURE_COMPRESSION_HINT)
			eTextureCompressionHint = (GLenum)GL_TEXTURE_COMPRESSION_HINT,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY)
			eTextureCoordArray = (GLenum)GL_TEXTURE_COORD_ARRAY,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY_COUNT_EXT)
			eTextureCoordArrayCountExt = (GLenum)GL_TEXTURE_COORD_ARRAY_COUNT_EXT,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY_SIZE)
			eTextureCoordArraySize = (GLenum)GL_TEXTURE_COORD_ARRAY_SIZE,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY_STRIDE)
			eTextureCoordArrayStride = (GLenum)GL_TEXTURE_COORD_ARRAY_STRIDE,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY_TYPE)
			eTextureCoordArrayType = (GLenum)GL_TEXTURE_COORD_ARRAY_TYPE,
		#endif
		#if defined(GL_TEXTURE_GEN_Q)
			eTextureGenQ = (GLenum)GL_TEXTURE_GEN_Q,
		#endif
		#if defined(GL_TEXTURE_GEN_R)
			eTextureGenR = (GLenum)GL_TEXTURE_GEN_R,
		#endif
		#if defined(GL_TEXTURE_GEN_S)
			eTextureGenS = (GLenum)GL_TEXTURE_GEN_S,
		#endif
		#if defined(GL_TEXTURE_GEN_STR_OES)
			eTextureGenStrOes = (GLenum)GL_TEXTURE_GEN_STR_OES,
		#endif
		#if defined(GL_TEXTURE_GEN_T)
			eTextureGenT = (GLenum)GL_TEXTURE_GEN_T,
		#endif
		#if defined(GL_TEXTURE_MATRIX)
			eTextureMatrix = (GLenum)GL_TEXTURE_MATRIX,
		#endif
		#if defined(GL_TEXTURE_STACK_DEPTH)
			eTextureStackDepth = (GLenum)GL_TEXTURE_STACK_DEPTH,
		#endif
		#if defined(GL_TIMESTAMP)
			eTimestamp = (GLenum)GL_TIMESTAMP,
		#endif
		#if defined(GL_TIMESTAMP_EXT)
			eTimestampExt = (GLenum)GL_TIMESTAMP_EXT,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING)
			eTransformFeedbackBufferBinding = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_BINDING,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE)
			eTransformFeedbackBufferSize = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_SIZE,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_START)
			eTransformFeedbackBufferStart = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_START,
		#endif
		#if defined(GL_UNIFORM_BUFFER_BINDING)
			eUniformBufferBinding = (GLenum)GL_UNIFORM_BUFFER_BINDING,
		#endif
		#if defined(GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT)
			eUniformBufferOffsetAlignment = (GLenum)GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT,
		#endif
		#if defined(GL_UNIFORM_BUFFER_SIZE)
			eUniformBufferSize = (GLenum)GL_UNIFORM_BUFFER_SIZE,
		#endif
		#if defined(GL_UNIFORM_BUFFER_START)
			eUniformBufferStart = (GLenum)GL_UNIFORM_BUFFER_START,
		#endif
		#if defined(GL_UNPACK_ALIGNMENT)
			eUnpackAlignment = (GLenum)GL_UNPACK_ALIGNMENT,
		#endif
		#if defined(GL_UNPACK_CMYK_HINT_EXT)
			eUnpackCmykHintExt = (GLenum)GL_UNPACK_CMYK_HINT_EXT,
		#endif
		#if defined(GL_UNPACK_IMAGE_DEPTH_SGIS)
			eUnpackImageDepthSgis = (GLenum)GL_UNPACK_IMAGE_DEPTH_SGIS,
		#endif
		#if defined(GL_UNPACK_IMAGE_HEIGHT)
			eUnpackImageHeight = (GLenum)GL_UNPACK_IMAGE_HEIGHT,
		#endif
		#if defined(GL_UNPACK_IMAGE_HEIGHT_EXT)
			eUnpackImageHeightExt = (GLenum)GL_UNPACK_IMAGE_HEIGHT_EXT,
		#endif
		#if defined(GL_UNPACK_LSB_FIRST)
			eUnpackLsbFirst = (GLenum)GL_UNPACK_LSB_FIRST,
		#endif
		#if defined(GL_UNPACK_RESAMPLE_SGIX)
			eUnpackResampleSgix = (GLenum)GL_UNPACK_RESAMPLE_SGIX,
		#endif
		#if defined(GL_UNPACK_ROW_LENGTH)
			eUnpackRowLength = (GLenum)GL_UNPACK_ROW_LENGTH,
		#endif
		#if defined(GL_UNPACK_SKIP_IMAGES)
			eUnpackSkipImages = (GLenum)GL_UNPACK_SKIP_IMAGES,
		#endif
		#if defined(GL_UNPACK_SKIP_IMAGES_EXT)
			eUnpackSkipImagesExt = (GLenum)GL_UNPACK_SKIP_IMAGES_EXT,
		#endif
		#if defined(GL_UNPACK_SKIP_PIXELS)
			eUnpackSkipPixels = (GLenum)GL_UNPACK_SKIP_PIXELS,
		#endif
		#if defined(GL_UNPACK_SKIP_ROWS)
			eUnpackSkipRows = (GLenum)GL_UNPACK_SKIP_ROWS,
		#endif
		#if defined(GL_UNPACK_SKIP_VOLUMES_SGIS)
			eUnpackSkipVolumesSgis = (GLenum)GL_UNPACK_SKIP_VOLUMES_SGIS,
		#endif
		#if defined(GL_UNPACK_SUBSAMPLE_RATE_SGIX)
			eUnpackSubsampleRateSgix = (GLenum)GL_UNPACK_SUBSAMPLE_RATE_SGIX,
		#endif
		#if defined(GL_UNPACK_SWAP_BYTES)
			eUnpackSwapBytes = (GLenum)GL_UNPACK_SWAP_BYTES,
		#endif
		#if defined(GL_VERTEX_ARRAY)
			eVertexArray = (GLenum)GL_VERTEX_ARRAY,
		#endif
		#if defined(GL_VERTEX_ARRAY_BINDING)
			eVertexArrayBinding = (GLenum)GL_VERTEX_ARRAY_BINDING,
		#endif
		#if defined(GL_VERTEX_ARRAY_COUNT_EXT)
			eVertexArrayCountExt = (GLenum)GL_VERTEX_ARRAY_COUNT_EXT,
		#endif
		#if defined(GL_VERTEX_ARRAY_SIZE)
			eVertexArraySize = (GLenum)GL_VERTEX_ARRAY_SIZE,
		#endif
		#if defined(GL_VERTEX_ARRAY_STRIDE)
			eVertexArrayStride = (GLenum)GL_VERTEX_ARRAY_STRIDE,
		#endif
		#if defined(GL_VERTEX_ARRAY_TYPE)
			eVertexArrayType = (GLenum)GL_VERTEX_ARRAY_TYPE,
		#endif
		#if defined(GL_VERTEX_BINDING_DIVISOR)
			eVertexBindingDivisor = (GLenum)GL_VERTEX_BINDING_DIVISOR,
		#endif
		#if defined(GL_VERTEX_BINDING_OFFSET)
			eVertexBindingOffset = (GLenum)GL_VERTEX_BINDING_OFFSET,
		#endif
		#if defined(GL_VERTEX_BINDING_STRIDE)
			eVertexBindingStride = (GLenum)GL_VERTEX_BINDING_STRIDE,
		#endif
		#if defined(GL_VERTEX_PRECLIP_HINT_SGIX)
			eVertexPreclipHintSgix = (GLenum)GL_VERTEX_PRECLIP_HINT_SGIX,
		#endif
		#if defined(GL_VERTEX_PRECLIP_SGIX)
			eVertexPreclipSgix = (GLenum)GL_VERTEX_PRECLIP_SGIX,
		#endif
		#if defined(GL_VIEWPORT)
			eViewport = (GLenum)GL_VIEWPORT,
		#endif
		#if defined(GL_VIEWPORT_BOUNDS_RANGE)
			eViewportBoundsRange = (GLenum)GL_VIEWPORT_BOUNDS_RANGE,
		#endif
		#if defined(GL_VIEWPORT_INDEX_PROVOKING_VERTEX)
			eViewportIndexProvokingVertex = (GLenum)GL_VIEWPORT_INDEX_PROVOKING_VERTEX,
		#endif
		#if defined(GL_VIEWPORT_SUBPIXEL_BITS)
			eViewportSubpixelBits = (GLenum)GL_VIEWPORT_SUBPIXEL_BITS,
		#endif
		#if defined(GL_ZOOM_X)
			eZoomX = (GLenum)GL_ZOOM_X,
		#endif
		#if defined(GL_ZOOM_Y)
			eZoomY = (GLenum)GL_ZOOM_Y,
		#endif
	};

	enum class VertexShaderTextureUnitParameter : GLenum {
		#if defined(GL_CURRENT_TEXTURE_COORDS)
			eCurrentTextureCoords = (GLenum)GL_CURRENT_TEXTURE_COORDS,
		#endif
		#if defined(GL_TEXTURE_MATRIX)
			eTextureMatrix = (GLenum)GL_TEXTURE_MATRIX,
		#endif
	};

	enum class EnableCap : GLenum {
		#if defined(GL_ALPHA_TEST)
			eAlphaTest = (GLenum)GL_ALPHA_TEST,
		#endif
		#if defined(GL_ASYNC_DRAW_PIXELS_SGIX)
			eAsyncDrawPixelsSgix = (GLenum)GL_ASYNC_DRAW_PIXELS_SGIX,
		#endif
		#if defined(GL_ASYNC_HISTOGRAM_SGIX)
			eAsyncHistogramSgix = (GLenum)GL_ASYNC_HISTOGRAM_SGIX,
		#endif
		#if defined(GL_ASYNC_READ_PIXELS_SGIX)
			eAsyncReadPixelsSgix = (GLenum)GL_ASYNC_READ_PIXELS_SGIX,
		#endif
		#if defined(GL_ASYNC_TEX_IMAGE_SGIX)
			eAsyncTexImageSgix = (GLenum)GL_ASYNC_TEX_IMAGE_SGIX,
		#endif
		#if defined(GL_AUTO_NORMAL)
			eAutoNormal = (GLenum)GL_AUTO_NORMAL,
		#endif
		#if defined(GL_BLEND)
			eBlend = (GLenum)GL_BLEND,
		#endif
		#if defined(GL_CALLIGRAPHIC_FRAGMENT_SGIX)
			eCalligraphicFragmentSgix = (GLenum)GL_CALLIGRAPHIC_FRAGMENT_SGIX,
		#endif
		#if defined(GL_CLIP_DISTANCE0)
			eClipDistance0 = (GLenum)GL_CLIP_DISTANCE0,
		#endif
		#if defined(GL_CLIP_DISTANCE1)
			eClipDistance1 = (GLenum)GL_CLIP_DISTANCE1,
		#endif
		#if defined(GL_CLIP_DISTANCE2)
			eClipDistance2 = (GLenum)GL_CLIP_DISTANCE2,
		#endif
		#if defined(GL_CLIP_DISTANCE3)
			eClipDistance3 = (GLenum)GL_CLIP_DISTANCE3,
		#endif
		#if defined(GL_CLIP_DISTANCE4)
			eClipDistance4 = (GLenum)GL_CLIP_DISTANCE4,
		#endif
		#if defined(GL_CLIP_DISTANCE5)
			eClipDistance5 = (GLenum)GL_CLIP_DISTANCE5,
		#endif
		#if defined(GL_CLIP_DISTANCE6)
			eClipDistance6 = (GLenum)GL_CLIP_DISTANCE6,
		#endif
		#if defined(GL_CLIP_DISTANCE7)
			eClipDistance7 = (GLenum)GL_CLIP_DISTANCE7,
		#endif
		#if defined(GL_CLIP_PLANE0)
			eClipPlane0 = (GLenum)GL_CLIP_PLANE0,
		#endif
		#if defined(GL_CLIP_PLANE1)
			eClipPlane1 = (GLenum)GL_CLIP_PLANE1,
		#endif
		#if defined(GL_CLIP_PLANE2)
			eClipPlane2 = (GLenum)GL_CLIP_PLANE2,
		#endif
		#if defined(GL_CLIP_PLANE3)
			eClipPlane3 = (GLenum)GL_CLIP_PLANE3,
		#endif
		#if defined(GL_CLIP_PLANE4)
			eClipPlane4 = (GLenum)GL_CLIP_PLANE4,
		#endif
		#if defined(GL_CLIP_PLANE5)
			eClipPlane5 = (GLenum)GL_CLIP_PLANE5,
		#endif
		#if defined(GL_COLOR_ARRAY)
			eColorArray = (GLenum)GL_COLOR_ARRAY,
		#endif
		#if defined(GL_COLOR_LOGIC_OP)
			eColorLogicOp = (GLenum)GL_COLOR_LOGIC_OP,
		#endif
		#if defined(GL_COLOR_MATERIAL)
			eColorMaterial = (GLenum)GL_COLOR_MATERIAL,
		#endif
		#if defined(GL_COLOR_TABLE)
			eColorTable = (GLenum)GL_COLOR_TABLE,
		#endif
		#if defined(GL_COLOR_TABLE_SGI)
			eColorTableSgi = (GLenum)GL_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_CONVOLUTION_1D_EXT)
			eConvolution1dExt = (GLenum)GL_CONVOLUTION_1D_EXT,
		#endif
		#if defined(GL_CONVOLUTION_2D_EXT)
			eConvolution2dExt = (GLenum)GL_CONVOLUTION_2D_EXT,
		#endif
		#if defined(GL_CULL_FACE)
			eCullFace = (GLenum)GL_CULL_FACE,
		#endif
		#if defined(GL_DEBUG_OUTPUT)
			eDebugOutput = (GLenum)GL_DEBUG_OUTPUT,
		#endif
		#if defined(GL_DEBUG_OUTPUT_SYNCHRONOUS)
			eDebugOutputSynchronous = (GLenum)GL_DEBUG_OUTPUT_SYNCHRONOUS,
		#endif
		#if defined(GL_DEPTH_CLAMP)
			eDepthClamp = (GLenum)GL_DEPTH_CLAMP,
		#endif
		#if defined(GL_DEPTH_TEST)
			eDepthTest = (GLenum)GL_DEPTH_TEST,
		#endif
		#if defined(GL_DITHER)
			eDither = (GLenum)GL_DITHER,
		#endif
		#if defined(GL_EDGE_FLAG_ARRAY)
			eEdgeFlagArray = (GLenum)GL_EDGE_FLAG_ARRAY,
		#endif
		#if defined(GL_FETCH_PER_SAMPLE_ARM)
			eFetchPerSampleArm = (GLenum)GL_FETCH_PER_SAMPLE_ARM,
		#endif
		#if defined(GL_FOG)
			eFog = (GLenum)GL_FOG,
		#endif
		#if defined(GL_FOG_OFFSET_SGIX)
			eFogOffsetSgix = (GLenum)GL_FOG_OFFSET_SGIX,
		#endif
		#if defined(GL_FRAGMENT_COLOR_MATERIAL_SGIX)
			eFragmentColorMaterialSgix = (GLenum)GL_FRAGMENT_COLOR_MATERIAL_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT0_SGIX)
			eFragmentLight0Sgix = (GLenum)GL_FRAGMENT_LIGHT0_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT1_SGIX)
			eFragmentLight1Sgix = (GLenum)GL_FRAGMENT_LIGHT1_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT2_SGIX)
			eFragmentLight2Sgix = (GLenum)GL_FRAGMENT_LIGHT2_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT3_SGIX)
			eFragmentLight3Sgix = (GLenum)GL_FRAGMENT_LIGHT3_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT4_SGIX)
			eFragmentLight4Sgix = (GLenum)GL_FRAGMENT_LIGHT4_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT5_SGIX)
			eFragmentLight5Sgix = (GLenum)GL_FRAGMENT_LIGHT5_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT6_SGIX)
			eFragmentLight6Sgix = (GLenum)GL_FRAGMENT_LIGHT6_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT7_SGIX)
			eFragmentLight7Sgix = (GLenum)GL_FRAGMENT_LIGHT7_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHTING_SGIX)
			eFragmentLightingSgix = (GLenum)GL_FRAGMENT_LIGHTING_SGIX,
		#endif
		#if defined(GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM)
			eFramebufferFetchNoncoherentQcom = (GLenum)GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM,
		#endif
		#if defined(GL_FRAMEBUFFER_SRGB)
			eFramebufferSrgb = (GLenum)GL_FRAMEBUFFER_SRGB,
		#endif
		#if defined(GL_FRAMEZOOM_SGIX)
			eFramezoomSgix = (GLenum)GL_FRAMEZOOM_SGIX,
		#endif
		#if defined(GL_HISTOGRAM_EXT)
			eHistogramExt = (GLenum)GL_HISTOGRAM_EXT,
		#endif
		#if defined(GL_INDEX_ARRAY)
			eIndexArray = (GLenum)GL_INDEX_ARRAY,
		#endif
		#if defined(GL_INDEX_LOGIC_OP)
			eIndexLogicOp = (GLenum)GL_INDEX_LOGIC_OP,
		#endif
		#if defined(GL_INTERLACE_SGIX)
			eInterlaceSgix = (GLenum)GL_INTERLACE_SGIX,
		#endif
		#if defined(GL_IR_INSTRUMENT1_SGIX)
			eIrInstrument1Sgix = (GLenum)GL_IR_INSTRUMENT1_SGIX,
		#endif
		#if defined(GL_LIGHT0)
			eLight0 = (GLenum)GL_LIGHT0,
		#endif
		#if defined(GL_LIGHT1)
			eLight1 = (GLenum)GL_LIGHT1,
		#endif
		#if defined(GL_LIGHT2)
			eLight2 = (GLenum)GL_LIGHT2,
		#endif
		#if defined(GL_LIGHT3)
			eLight3 = (GLenum)GL_LIGHT3,
		#endif
		#if defined(GL_LIGHT4)
			eLight4 = (GLenum)GL_LIGHT4,
		#endif
		#if defined(GL_LIGHT5)
			eLight5 = (GLenum)GL_LIGHT5,
		#endif
		#if defined(GL_LIGHT6)
			eLight6 = (GLenum)GL_LIGHT6,
		#endif
		#if defined(GL_LIGHT7)
			eLight7 = (GLenum)GL_LIGHT7,
		#endif
		#if defined(GL_LIGHTING)
			eLighting = (GLenum)GL_LIGHTING,
		#endif
		#if defined(GL_LINE_SMOOTH)
			eLineSmooth = (GLenum)GL_LINE_SMOOTH,
		#endif
		#if defined(GL_LINE_STIPPLE)
			eLineStipple = (GLenum)GL_LINE_STIPPLE,
		#endif
		#if defined(GL_MAP1_COLOR_4)
			eMap1Color4 = (GLenum)GL_MAP1_COLOR_4,
		#endif
		#if defined(GL_MAP1_INDEX)
			eMap1Index = (GLenum)GL_MAP1_INDEX,
		#endif
		#if defined(GL_MAP1_NORMAL)
			eMap1Normal = (GLenum)GL_MAP1_NORMAL,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_1)
			eMap1TextureCoord1 = (GLenum)GL_MAP1_TEXTURE_COORD_1,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_2)
			eMap1TextureCoord2 = (GLenum)GL_MAP1_TEXTURE_COORD_2,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_3)
			eMap1TextureCoord3 = (GLenum)GL_MAP1_TEXTURE_COORD_3,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_4)
			eMap1TextureCoord4 = (GLenum)GL_MAP1_TEXTURE_COORD_4,
		#endif
		#if defined(GL_MAP1_VERTEX_3)
			eMap1Vertex3 = (GLenum)GL_MAP1_VERTEX_3,
		#endif
		#if defined(GL_MAP1_VERTEX_4)
			eMap1Vertex4 = (GLenum)GL_MAP1_VERTEX_4,
		#endif
		#if defined(GL_MAP2_COLOR_4)
			eMap2Color4 = (GLenum)GL_MAP2_COLOR_4,
		#endif
		#if defined(GL_MAP2_INDEX)
			eMap2Index = (GLenum)GL_MAP2_INDEX,
		#endif
		#if defined(GL_MAP2_NORMAL)
			eMap2Normal = (GLenum)GL_MAP2_NORMAL,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_1)
			eMap2TextureCoord1 = (GLenum)GL_MAP2_TEXTURE_COORD_1,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_2)
			eMap2TextureCoord2 = (GLenum)GL_MAP2_TEXTURE_COORD_2,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_3)
			eMap2TextureCoord3 = (GLenum)GL_MAP2_TEXTURE_COORD_3,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_4)
			eMap2TextureCoord4 = (GLenum)GL_MAP2_TEXTURE_COORD_4,
		#endif
		#if defined(GL_MAP2_VERTEX_3)
			eMap2Vertex3 = (GLenum)GL_MAP2_VERTEX_3,
		#endif
		#if defined(GL_MAP2_VERTEX_4)
			eMap2Vertex4 = (GLenum)GL_MAP2_VERTEX_4,
		#endif
		#if defined(GL_MINMAX_EXT)
			eMinmaxExt = (GLenum)GL_MINMAX_EXT,
		#endif
		#if defined(GL_MULTISAMPLE)
			eMultisample = (GLenum)GL_MULTISAMPLE,
		#endif
		#if defined(GL_MULTISAMPLE_SGIS)
			eMultisampleSgis = (GLenum)GL_MULTISAMPLE_SGIS,
		#endif
		#if defined(GL_NORMALIZE)
			eNormalize = (GLenum)GL_NORMALIZE,
		#endif
		#if defined(GL_NORMAL_ARRAY)
			eNormalArray = (GLenum)GL_NORMAL_ARRAY,
		#endif
		#if defined(GL_PIXEL_TEXTURE_SGIS)
			ePixelTextureSgis = (GLenum)GL_PIXEL_TEXTURE_SGIS,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_SGIX)
			ePixelTexGenSgix = (GLenum)GL_PIXEL_TEX_GEN_SGIX,
		#endif
		#if defined(GL_POINT_SMOOTH)
			ePointSmooth = (GLenum)GL_POINT_SMOOTH,
		#endif
		#if defined(GL_POLYGON_OFFSET_FILL)
			ePolygonOffsetFill = (GLenum)GL_POLYGON_OFFSET_FILL,
		#endif
		#if defined(GL_POLYGON_OFFSET_LINE)
			ePolygonOffsetLine = (GLenum)GL_POLYGON_OFFSET_LINE,
		#endif
		#if defined(GL_POLYGON_OFFSET_POINT)
			ePolygonOffsetPoint = (GLenum)GL_POLYGON_OFFSET_POINT,
		#endif
		#if defined(GL_POLYGON_SMOOTH)
			ePolygonSmooth = (GLenum)GL_POLYGON_SMOOTH,
		#endif
		#if defined(GL_POLYGON_STIPPLE)
			ePolygonStipple = (GLenum)GL_POLYGON_STIPPLE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_COLOR_TABLE)
			ePostColorMatrixColorTable = (GLenum)GL_POST_COLOR_MATRIX_COLOR_TABLE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI)
			ePostColorMatrixColorTableSgi = (GLenum)GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_POST_CONVOLUTION_COLOR_TABLE)
			ePostConvolutionColorTable = (GLenum)GL_POST_CONVOLUTION_COLOR_TABLE,
		#endif
		#if defined(GL_POST_CONVOLUTION_COLOR_TABLE_SGI)
			ePostConvolutionColorTableSgi = (GLenum)GL_POST_CONVOLUTION_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_PRIMITIVE_RESTART)
			ePrimitiveRestart = (GLenum)GL_PRIMITIVE_RESTART,
		#endif
		#if defined(GL_PRIMITIVE_RESTART_FIXED_INDEX)
			ePrimitiveRestartFixedIndex = (GLenum)GL_PRIMITIVE_RESTART_FIXED_INDEX,
		#endif
		#if defined(GL_PROGRAM_POINT_SIZE)
			eProgramPointSize = (GLenum)GL_PROGRAM_POINT_SIZE,
		#endif
		#if defined(GL_RASTERIZER_DISCARD)
			eRasterizerDiscard = (GLenum)GL_RASTERIZER_DISCARD,
		#endif
		#if defined(GL_REFERENCE_PLANE_SGIX)
			eReferencePlaneSgix = (GLenum)GL_REFERENCE_PLANE_SGIX,
		#endif
		#if defined(GL_RESCALE_NORMAL_EXT)
			eRescaleNormalExt = (GLenum)GL_RESCALE_NORMAL_EXT,
		#endif
		#if defined(GL_SAMPLE_ALPHA_TO_COVERAGE)
			eSampleAlphaToCoverage = (GLenum)GL_SAMPLE_ALPHA_TO_COVERAGE,
		#endif
		#if defined(GL_SAMPLE_ALPHA_TO_MASK_SGIS)
			eSampleAlphaToMaskSgis = (GLenum)GL_SAMPLE_ALPHA_TO_MASK_SGIS,
		#endif
		#if defined(GL_SAMPLE_ALPHA_TO_ONE)
			eSampleAlphaToOne = (GLenum)GL_SAMPLE_ALPHA_TO_ONE,
		#endif
		#if defined(GL_SAMPLE_ALPHA_TO_ONE_SGIS)
			eSampleAlphaToOneSgis = (GLenum)GL_SAMPLE_ALPHA_TO_ONE_SGIS,
		#endif
		#if defined(GL_SAMPLE_COVERAGE)
			eSampleCoverage = (GLenum)GL_SAMPLE_COVERAGE,
		#endif
		#if defined(GL_SAMPLE_MASK)
			eSampleMask = (GLenum)GL_SAMPLE_MASK,
		#endif
		#if defined(GL_SAMPLE_MASK_SGIS)
			eSampleMaskSgis = (GLenum)GL_SAMPLE_MASK_SGIS,
		#endif
		#if defined(GL_SAMPLE_SHADING)
			eSampleShading = (GLenum)GL_SAMPLE_SHADING,
		#endif
		#if defined(GL_SCISSOR_TEST)
			eScissorTest = (GLenum)GL_SCISSOR_TEST,
		#endif
		#if defined(GL_SEPARABLE_2D_EXT)
			eSeparable2dExt = (GLenum)GL_SEPARABLE_2D_EXT,
		#endif
		#if defined(GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV)
			eShadingRateImagePerPrimitiveNv = (GLenum)GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV,
		#endif
		#if defined(GL_SHADING_RATE_PRESERVE_ASPECT_RATIO_QCOM)
			eShadingRatePreserveAspectRatioQcom = (GLenum)GL_SHADING_RATE_PRESERVE_ASPECT_RATIO_QCOM,
		#endif
		#if defined(GL_SHARED_TEXTURE_PALETTE_EXT)
			eSharedTexturePaletteExt = (GLenum)GL_SHARED_TEXTURE_PALETTE_EXT,
		#endif
		#if defined(GL_SPRITE_SGIX)
			eSpriteSgix = (GLenum)GL_SPRITE_SGIX,
		#endif
		#if defined(GL_STENCIL_TEST)
			eStencilTest = (GLenum)GL_STENCIL_TEST,
		#endif
		#if defined(GL_TEXTURE_1D)
			eTexture1d = (GLenum)GL_TEXTURE_1D,
		#endif
		#if defined(GL_TEXTURE_2D)
			eTexture2d = (GLenum)GL_TEXTURE_2D,
		#endif
		#if defined(GL_TEXTURE_3D_EXT)
			eTexture3dExt = (GLenum)GL_TEXTURE_3D_EXT,
		#endif
		#if defined(GL_TEXTURE_4D_SGIS)
			eTexture4dSgis = (GLenum)GL_TEXTURE_4D_SGIS,
		#endif
		#if defined(GL_TEXTURE_COLOR_TABLE_SGI)
			eTextureColorTableSgi = (GLenum)GL_TEXTURE_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY)
			eTextureCoordArray = (GLenum)GL_TEXTURE_COORD_ARRAY,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP)
			eTextureCubeMap = (GLenum)GL_TEXTURE_CUBE_MAP,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARB)
			eTextureCubeMapArb = (GLenum)GL_TEXTURE_CUBE_MAP_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_EXT)
			eTextureCubeMapExt = (GLenum)GL_TEXTURE_CUBE_MAP_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_OES)
			eTextureCubeMapOes = (GLenum)GL_TEXTURE_CUBE_MAP_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_SEAMLESS)
			eTextureCubeMapSeamless = (GLenum)GL_TEXTURE_CUBE_MAP_SEAMLESS,
		#endif
		#if defined(GL_TEXTURE_GEN_Q)
			eTextureGenQ = (GLenum)GL_TEXTURE_GEN_Q,
		#endif
		#if defined(GL_TEXTURE_GEN_R)
			eTextureGenR = (GLenum)GL_TEXTURE_GEN_R,
		#endif
		#if defined(GL_TEXTURE_GEN_S)
			eTextureGenS = (GLenum)GL_TEXTURE_GEN_S,
		#endif
		#if defined(GL_TEXTURE_GEN_STR_OES)
			eTextureGenStrOes = (GLenum)GL_TEXTURE_GEN_STR_OES,
		#endif
		#if defined(GL_TEXTURE_GEN_T)
			eTextureGenT = (GLenum)GL_TEXTURE_GEN_T,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE)
			eTextureRectangle = (GLenum)GL_TEXTURE_RECTANGLE,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE_ARB)
			eTextureRectangleArb = (GLenum)GL_TEXTURE_RECTANGLE_ARB,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE_NV)
			eTextureRectangleNv = (GLenum)GL_TEXTURE_RECTANGLE_NV,
		#endif
		#if defined(GL_VERTEX_ARRAY)
			eVertexArray = (GLenum)GL_VERTEX_ARRAY,
		#endif
	};

	enum class LightModelParameter : GLenum {
		#if defined(GL_LIGHT_MODEL_AMBIENT)
			eLightModelAmbient = (GLenum)GL_LIGHT_MODEL_AMBIENT,
		#endif
		#if defined(GL_LIGHT_MODEL_COLOR_CONTROL)
			eLightModelColorControl = (GLenum)GL_LIGHT_MODEL_COLOR_CONTROL,
		#endif
		#if defined(GL_LIGHT_MODEL_COLOR_CONTROL_EXT)
			eLightModelColorControlExt = (GLenum)GL_LIGHT_MODEL_COLOR_CONTROL_EXT,
		#endif
		#if defined(GL_LIGHT_MODEL_LOCAL_VIEWER)
			eLightModelLocalViewer = (GLenum)GL_LIGHT_MODEL_LOCAL_VIEWER,
		#endif
		#if defined(GL_LIGHT_MODEL_TWO_SIDE)
			eLightModelTwoSide = (GLenum)GL_LIGHT_MODEL_TWO_SIDE,
		#endif
	};

	enum class FogPName : GLenum {
		#if defined(GL_FOG_COORD_SRC)
			eFogCoordSrc = (GLenum)GL_FOG_COORD_SRC,
		#endif
		#if defined(GL_FOG_DENSITY)
			eFogDensity = (GLenum)GL_FOG_DENSITY,
		#endif
		#if defined(GL_FOG_END)
			eFogEnd = (GLenum)GL_FOG_END,
		#endif
		#if defined(GL_FOG_INDEX)
			eFogIndex = (GLenum)GL_FOG_INDEX,
		#endif
		#if defined(GL_FOG_MODE)
			eFogMode = (GLenum)GL_FOG_MODE,
		#endif
		#if defined(GL_FOG_START)
			eFogStart = (GLenum)GL_FOG_START,
		#endif
	};

	enum class FogParameter : GLenum {
		#if defined(GL_FOG_COLOR)
			eFogColor = (GLenum)GL_FOG_COLOR,
		#endif
		#if defined(GL_FOG_DENSITY)
			eFogDensity = (GLenum)GL_FOG_DENSITY,
		#endif
		#if defined(GL_FOG_END)
			eFogEnd = (GLenum)GL_FOG_END,
		#endif
		#if defined(GL_FOG_INDEX)
			eFogIndex = (GLenum)GL_FOG_INDEX,
		#endif
		#if defined(GL_FOG_MODE)
			eFogMode = (GLenum)GL_FOG_MODE,
		#endif
		#if defined(GL_FOG_OFFSET_VALUE_SGIX)
			eFogOffsetValueSgix = (GLenum)GL_FOG_OFFSET_VALUE_SGIX,
		#endif
		#if defined(GL_FOG_START)
			eFogStart = (GLenum)GL_FOG_START,
		#endif
	};

	enum class GetFramebufferParameter : GLenum {
		#if defined(GL_DOUBLEBUFFER)
			eDoublebuffer = (GLenum)GL_DOUBLEBUFFER,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS)
			eFramebufferDefaultFixedSampleLocations = (GLenum)GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_HEIGHT)
			eFramebufferDefaultHeight = (GLenum)GL_FRAMEBUFFER_DEFAULT_HEIGHT,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_LAYERS)
			eFramebufferDefaultLayers = (GLenum)GL_FRAMEBUFFER_DEFAULT_LAYERS,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_SAMPLES)
			eFramebufferDefaultSamples = (GLenum)GL_FRAMEBUFFER_DEFAULT_SAMPLES,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_WIDTH)
			eFramebufferDefaultWidth = (GLenum)GL_FRAMEBUFFER_DEFAULT_WIDTH,
		#endif
		#if defined(GL_IMPLEMENTATION_COLOR_READ_FORMAT)
			eImplementationColorReadFormat = (GLenum)GL_IMPLEMENTATION_COLOR_READ_FORMAT,
		#endif
		#if defined(GL_IMPLEMENTATION_COLOR_READ_TYPE)
			eImplementationColorReadType = (GLenum)GL_IMPLEMENTATION_COLOR_READ_TYPE,
		#endif
		#if defined(GL_SAMPLES)
			eSamples = (GLenum)GL_SAMPLES,
		#endif
		#if defined(GL_SAMPLE_BUFFERS)
			eSampleBuffers = (GLenum)GL_SAMPLE_BUFFERS,
		#endif
		#if defined(GL_STEREO)
			eStereo = (GLenum)GL_STEREO,
		#endif
	};

	enum class HintTarget : GLenum {
		#if defined(GL_ALLOW_DRAW_FRG_HINT_PGI)
			eAllowDrawFrgHintPgi = (GLenum)GL_ALLOW_DRAW_FRG_HINT_PGI,
		#endif
		#if defined(GL_ALLOW_DRAW_MEM_HINT_PGI)
			eAllowDrawMemHintPgi = (GLenum)GL_ALLOW_DRAW_MEM_HINT_PGI,
		#endif
		#if defined(GL_ALLOW_DRAW_OBJ_HINT_PGI)
			eAllowDrawObjHintPgi = (GLenum)GL_ALLOW_DRAW_OBJ_HINT_PGI,
		#endif
		#if defined(GL_ALLOW_DRAW_WIN_HINT_PGI)
			eAllowDrawWinHintPgi = (GLenum)GL_ALLOW_DRAW_WIN_HINT_PGI,
		#endif
		#if defined(GL_ALWAYS_FAST_HINT_PGI)
			eAlwaysFastHintPgi = (GLenum)GL_ALWAYS_FAST_HINT_PGI,
		#endif
		#if defined(GL_ALWAYS_SOFT_HINT_PGI)
			eAlwaysSoftHintPgi = (GLenum)GL_ALWAYS_SOFT_HINT_PGI,
		#endif
		#if defined(GL_BACK_NORMALS_HINT_PGI)
			eBackNormalsHintPgi = (GLenum)GL_BACK_NORMALS_HINT_PGI,
		#endif
		#if defined(GL_BINNING_CONTROL_HINT_QCOM)
			eBinningControlHintQcom = (GLenum)GL_BINNING_CONTROL_HINT_QCOM,
		#endif
		#if defined(GL_CLIP_FAR_HINT_PGI)
			eClipFarHintPgi = (GLenum)GL_CLIP_FAR_HINT_PGI,
		#endif
		#if defined(GL_CLIP_NEAR_HINT_PGI)
			eClipNearHintPgi = (GLenum)GL_CLIP_NEAR_HINT_PGI,
		#endif
		#if defined(GL_CLIP_VOLUME_CLIPPING_HINT_EXT)
			eClipVolumeClippingHintExt = (GLenum)GL_CLIP_VOLUME_CLIPPING_HINT_EXT,
		#endif
		#if defined(GL_CONSERVE_MEMORY_HINT_PGI)
			eConserveMemoryHintPgi = (GLenum)GL_CONSERVE_MEMORY_HINT_PGI,
		#endif
		#if defined(GL_CONVOLUTION_HINT_SGIX)
			eConvolutionHintSgix = (GLenum)GL_CONVOLUTION_HINT_SGIX,
		#endif
		#if defined(GL_FOG_HINT)
			eFogHint = (GLenum)GL_FOG_HINT,
		#endif
		#if defined(GL_FRAGMENT_SHADER_DERIVATIVE_HINT)
			eFragmentShaderDerivativeHint = (GLenum)GL_FRAGMENT_SHADER_DERIVATIVE_HINT,
		#endif
		#if defined(GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB)
			eFragmentShaderDerivativeHintArb = (GLenum)GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB,
		#endif
		#if defined(GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES)
			eFragmentShaderDerivativeHintOes = (GLenum)GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES,
		#endif
		#if defined(GL_FULL_STIPPLE_HINT_PGI)
			eFullStippleHintPgi = (GLenum)GL_FULL_STIPPLE_HINT_PGI,
		#endif
		#if defined(GL_GENERATE_MIPMAP_HINT)
			eGenerateMipmapHint = (GLenum)GL_GENERATE_MIPMAP_HINT,
		#endif
		#if defined(GL_GENERATE_MIPMAP_HINT_SGIS)
			eGenerateMipmapHintSgis = (GLenum)GL_GENERATE_MIPMAP_HINT_SGIS,
		#endif
		#if defined(GL_LINE_QUALITY_HINT_SGIX)
			eLineQualityHintSgix = (GLenum)GL_LINE_QUALITY_HINT_SGIX,
		#endif
		#if defined(GL_LINE_SMOOTH_HINT)
			eLineSmoothHint = (GLenum)GL_LINE_SMOOTH_HINT,
		#endif
		#if defined(GL_MATERIAL_SIDE_HINT_PGI)
			eMaterialSideHintPgi = (GLenum)GL_MATERIAL_SIDE_HINT_PGI,
		#endif
		#if defined(GL_MAX_VERTEX_HINT_PGI)
			eMaxVertexHintPgi = (GLenum)GL_MAX_VERTEX_HINT_PGI,
		#endif
		#if defined(GL_MULTISAMPLE_FILTER_HINT_NV)
			eMultisampleFilterHintNv = (GLenum)GL_MULTISAMPLE_FILTER_HINT_NV,
		#endif
		#if defined(GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI)
			eNativeGraphicsBeginHintPgi = (GLenum)GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI,
		#endif
		#if defined(GL_NATIVE_GRAPHICS_END_HINT_PGI)
			eNativeGraphicsEndHintPgi = (GLenum)GL_NATIVE_GRAPHICS_END_HINT_PGI,
		#endif
		#if defined(GL_PACK_CMYK_HINT_EXT)
			ePackCmykHintExt = (GLenum)GL_PACK_CMYK_HINT_EXT,
		#endif
		#if defined(GL_PERSPECTIVE_CORRECTION_HINT)
			ePerspectiveCorrectionHint = (GLenum)GL_PERSPECTIVE_CORRECTION_HINT,
		#endif
		#if defined(GL_PHONG_HINT_WIN)
			ePhongHintWin = (GLenum)GL_PHONG_HINT_WIN,
		#endif
		#if defined(GL_POINT_SMOOTH_HINT)
			ePointSmoothHint = (GLenum)GL_POINT_SMOOTH_HINT,
		#endif
		#if defined(GL_POLYGON_SMOOTH_HINT)
			ePolygonSmoothHint = (GLenum)GL_POLYGON_SMOOTH_HINT,
		#endif
		#if defined(GL_PREFER_DOUBLEBUFFER_HINT_PGI)
			ePreferDoublebufferHintPgi = (GLenum)GL_PREFER_DOUBLEBUFFER_HINT_PGI,
		#endif
		#if defined(GL_PROGRAM_BINARY_RETRIEVABLE_HINT)
			eProgramBinaryRetrievableHint = (GLenum)GL_PROGRAM_BINARY_RETRIEVABLE_HINT,
		#endif
		#if defined(GL_RECLAIM_MEMORY_HINT_PGI)
			eReclaimMemoryHintPgi = (GLenum)GL_RECLAIM_MEMORY_HINT_PGI,
		#endif
		#if defined(GL_SCALEBIAS_HINT_SGIX)
			eScalebiasHintSgix = (GLenum)GL_SCALEBIAS_HINT_SGIX,
		#endif
		#if defined(GL_STRICT_DEPTHFUNC_HINT_PGI)
			eStrictDepthfuncHintPgi = (GLenum)GL_STRICT_DEPTHFUNC_HINT_PGI,
		#endif
		#if defined(GL_STRICT_LIGHTING_HINT_PGI)
			eStrictLightingHintPgi = (GLenum)GL_STRICT_LIGHTING_HINT_PGI,
		#endif
		#if defined(GL_STRICT_SCISSOR_HINT_PGI)
			eStrictScissorHintPgi = (GLenum)GL_STRICT_SCISSOR_HINT_PGI,
		#endif
		#if defined(GL_TEXTURE_COMPRESSION_HINT)
			eTextureCompressionHint = (GLenum)GL_TEXTURE_COMPRESSION_HINT,
		#endif
		#if defined(GL_TEXTURE_COMPRESSION_HINT_ARB)
			eTextureCompressionHintArb = (GLenum)GL_TEXTURE_COMPRESSION_HINT_ARB,
		#endif
		#if defined(GL_TEXTURE_MULTI_BUFFER_HINT_SGIX)
			eTextureMultiBufferHintSgix = (GLenum)GL_TEXTURE_MULTI_BUFFER_HINT_SGIX,
		#endif
		#if defined(GL_TEXTURE_STORAGE_HINT_APPLE)
			eTextureStorageHintApple = (GLenum)GL_TEXTURE_STORAGE_HINT_APPLE,
		#endif
		#if defined(GL_TRANSFORM_HINT_APPLE)
			eTransformHintApple = (GLenum)GL_TRANSFORM_HINT_APPLE,
		#endif
		#if defined(GL_UNPACK_CMYK_HINT_EXT)
			eUnpackCmykHintExt = (GLenum)GL_UNPACK_CMYK_HINT_EXT,
		#endif
		#if defined(GL_VERTEX_ARRAY_STORAGE_HINT_APPLE)
			eVertexArrayStorageHintApple = (GLenum)GL_VERTEX_ARRAY_STORAGE_HINT_APPLE,
		#endif
		#if defined(GL_VERTEX_CONSISTENT_HINT_PGI)
			eVertexConsistentHintPgi = (GLenum)GL_VERTEX_CONSISTENT_HINT_PGI,
		#endif
		#if defined(GL_VERTEX_DATA_HINT_PGI)
			eVertexDataHintPgi = (GLenum)GL_VERTEX_DATA_HINT_PGI,
		#endif
		#if defined(GL_VERTEX_PRECLIP_HINT_SGIX)
			eVertexPreclipHintSgix = (GLenum)GL_VERTEX_PRECLIP_HINT_SGIX,
		#endif
		#if defined(GL_VERTEX_PRECLIP_SGIX)
			eVertexPreclipSgix = (GLenum)GL_VERTEX_PRECLIP_SGIX,
		#endif
		#if defined(GL_WIDE_LINE_HINT_PGI)
			eWideLineHintPgi = (GLenum)GL_WIDE_LINE_HINT_PGI,
		#endif
	};

	enum class PixelMap : GLenum {
		#if defined(GL_PIXEL_MAP_A_TO_A)
			ePixelMapAToA = (GLenum)GL_PIXEL_MAP_A_TO_A,
		#endif
		#if defined(GL_PIXEL_MAP_B_TO_B)
			ePixelMapBToB = (GLenum)GL_PIXEL_MAP_B_TO_B,
		#endif
		#if defined(GL_PIXEL_MAP_G_TO_G)
			ePixelMapGToG = (GLenum)GL_PIXEL_MAP_G_TO_G,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_A)
			ePixelMapIToA = (GLenum)GL_PIXEL_MAP_I_TO_A,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_B)
			ePixelMapIToB = (GLenum)GL_PIXEL_MAP_I_TO_B,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_G)
			ePixelMapIToG = (GLenum)GL_PIXEL_MAP_I_TO_G,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_I)
			ePixelMapIToI = (GLenum)GL_PIXEL_MAP_I_TO_I,
		#endif
		#if defined(GL_PIXEL_MAP_I_TO_R)
			ePixelMapIToR = (GLenum)GL_PIXEL_MAP_I_TO_R,
		#endif
		#if defined(GL_PIXEL_MAP_R_TO_R)
			ePixelMapRToR = (GLenum)GL_PIXEL_MAP_R_TO_R,
		#endif
		#if defined(GL_PIXEL_MAP_S_TO_S)
			ePixelMapSToS = (GLenum)GL_PIXEL_MAP_S_TO_S,
		#endif
	};

	enum class PixelStoreParameter : GLenum {
		#if defined(GL_PACK_ALIGNMENT)
			ePackAlignment = (GLenum)GL_PACK_ALIGNMENT,
		#endif
		#if defined(GL_PACK_IMAGE_DEPTH_SGIS)
			ePackImageDepthSgis = (GLenum)GL_PACK_IMAGE_DEPTH_SGIS,
		#endif
		#if defined(GL_PACK_IMAGE_HEIGHT)
			ePackImageHeight = (GLenum)GL_PACK_IMAGE_HEIGHT,
		#endif
		#if defined(GL_PACK_IMAGE_HEIGHT_EXT)
			ePackImageHeightExt = (GLenum)GL_PACK_IMAGE_HEIGHT_EXT,
		#endif
		#if defined(GL_PACK_LSB_FIRST)
			ePackLsbFirst = (GLenum)GL_PACK_LSB_FIRST,
		#endif
		#if defined(GL_PACK_RESAMPLE_OML)
			ePackResampleOml = (GLenum)GL_PACK_RESAMPLE_OML,
		#endif
		#if defined(GL_PACK_RESAMPLE_SGIX)
			ePackResampleSgix = (GLenum)GL_PACK_RESAMPLE_SGIX,
		#endif
		#if defined(GL_PACK_ROW_LENGTH)
			ePackRowLength = (GLenum)GL_PACK_ROW_LENGTH,
		#endif
		#if defined(GL_PACK_ROW_LENGTH_NV)
			ePackRowLengthNv = (GLenum)GL_PACK_ROW_LENGTH_NV,
		#endif
		#if defined(GL_PACK_SKIP_IMAGES)
			ePackSkipImages = (GLenum)GL_PACK_SKIP_IMAGES,
		#endif
		#if defined(GL_PACK_SKIP_IMAGES_EXT)
			ePackSkipImagesExt = (GLenum)GL_PACK_SKIP_IMAGES_EXT,
		#endif
		#if defined(GL_PACK_SKIP_PIXELS)
			ePackSkipPixels = (GLenum)GL_PACK_SKIP_PIXELS,
		#endif
		#if defined(GL_PACK_SKIP_PIXELS_NV)
			ePackSkipPixelsNv = (GLenum)GL_PACK_SKIP_PIXELS_NV,
		#endif
		#if defined(GL_PACK_SKIP_ROWS)
			ePackSkipRows = (GLenum)GL_PACK_SKIP_ROWS,
		#endif
		#if defined(GL_PACK_SKIP_ROWS_NV)
			ePackSkipRowsNv = (GLenum)GL_PACK_SKIP_ROWS_NV,
		#endif
		#if defined(GL_PACK_SKIP_VOLUMES_SGIS)
			ePackSkipVolumesSgis = (GLenum)GL_PACK_SKIP_VOLUMES_SGIS,
		#endif
		#if defined(GL_PACK_SUBSAMPLE_RATE_SGIX)
			ePackSubsampleRateSgix = (GLenum)GL_PACK_SUBSAMPLE_RATE_SGIX,
		#endif
		#if defined(GL_PACK_SWAP_BYTES)
			ePackSwapBytes = (GLenum)GL_PACK_SWAP_BYTES,
		#endif
		#if defined(GL_PIXEL_TILE_CACHE_SIZE_SGIX)
			ePixelTileCacheSizeSgix = (GLenum)GL_PIXEL_TILE_CACHE_SIZE_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_GRID_DEPTH_SGIX)
			ePixelTileGridDepthSgix = (GLenum)GL_PIXEL_TILE_GRID_DEPTH_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_GRID_HEIGHT_SGIX)
			ePixelTileGridHeightSgix = (GLenum)GL_PIXEL_TILE_GRID_HEIGHT_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_GRID_WIDTH_SGIX)
			ePixelTileGridWidthSgix = (GLenum)GL_PIXEL_TILE_GRID_WIDTH_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_HEIGHT_SGIX)
			ePixelTileHeightSgix = (GLenum)GL_PIXEL_TILE_HEIGHT_SGIX,
		#endif
		#if defined(GL_PIXEL_TILE_WIDTH_SGIX)
			ePixelTileWidthSgix = (GLenum)GL_PIXEL_TILE_WIDTH_SGIX,
		#endif
		#if defined(GL_UNPACK_ALIGNMENT)
			eUnpackAlignment = (GLenum)GL_UNPACK_ALIGNMENT,
		#endif
		#if defined(GL_UNPACK_IMAGE_DEPTH_SGIS)
			eUnpackImageDepthSgis = (GLenum)GL_UNPACK_IMAGE_DEPTH_SGIS,
		#endif
		#if defined(GL_UNPACK_IMAGE_HEIGHT)
			eUnpackImageHeight = (GLenum)GL_UNPACK_IMAGE_HEIGHT,
		#endif
		#if defined(GL_UNPACK_IMAGE_HEIGHT_EXT)
			eUnpackImageHeightExt = (GLenum)GL_UNPACK_IMAGE_HEIGHT_EXT,
		#endif
		#if defined(GL_UNPACK_LSB_FIRST)
			eUnpackLsbFirst = (GLenum)GL_UNPACK_LSB_FIRST,
		#endif
		#if defined(GL_UNPACK_RESAMPLE_OML)
			eUnpackResampleOml = (GLenum)GL_UNPACK_RESAMPLE_OML,
		#endif
		#if defined(GL_UNPACK_RESAMPLE_SGIX)
			eUnpackResampleSgix = (GLenum)GL_UNPACK_RESAMPLE_SGIX,
		#endif
		#if defined(GL_UNPACK_ROW_LENGTH)
			eUnpackRowLength = (GLenum)GL_UNPACK_ROW_LENGTH,
		#endif
		#if defined(GL_UNPACK_ROW_LENGTH_EXT)
			eUnpackRowLengthExt = (GLenum)GL_UNPACK_ROW_LENGTH_EXT,
		#endif
		#if defined(GL_UNPACK_SKIP_IMAGES)
			eUnpackSkipImages = (GLenum)GL_UNPACK_SKIP_IMAGES,
		#endif
		#if defined(GL_UNPACK_SKIP_IMAGES_EXT)
			eUnpackSkipImagesExt = (GLenum)GL_UNPACK_SKIP_IMAGES_EXT,
		#endif
		#if defined(GL_UNPACK_SKIP_PIXELS)
			eUnpackSkipPixels = (GLenum)GL_UNPACK_SKIP_PIXELS,
		#endif
		#if defined(GL_UNPACK_SKIP_PIXELS_EXT)
			eUnpackSkipPixelsExt = (GLenum)GL_UNPACK_SKIP_PIXELS_EXT,
		#endif
		#if defined(GL_UNPACK_SKIP_ROWS)
			eUnpackSkipRows = (GLenum)GL_UNPACK_SKIP_ROWS,
		#endif
		#if defined(GL_UNPACK_SKIP_ROWS_EXT)
			eUnpackSkipRowsExt = (GLenum)GL_UNPACK_SKIP_ROWS_EXT,
		#endif
		#if defined(GL_UNPACK_SKIP_VOLUMES_SGIS)
			eUnpackSkipVolumesSgis = (GLenum)GL_UNPACK_SKIP_VOLUMES_SGIS,
		#endif
		#if defined(GL_UNPACK_SUBSAMPLE_RATE_SGIX)
			eUnpackSubsampleRateSgix = (GLenum)GL_UNPACK_SUBSAMPLE_RATE_SGIX,
		#endif
		#if defined(GL_UNPACK_SWAP_BYTES)
			eUnpackSwapBytes = (GLenum)GL_UNPACK_SWAP_BYTES,
		#endif
	};

	enum class PixelTransferParameter : GLenum {
		#if defined(GL_ALPHA_BIAS)
			eAlphaBias = (GLenum)GL_ALPHA_BIAS,
		#endif
		#if defined(GL_ALPHA_SCALE)
			eAlphaScale = (GLenum)GL_ALPHA_SCALE,
		#endif
		#if defined(GL_BLUE_BIAS)
			eBlueBias = (GLenum)GL_BLUE_BIAS,
		#endif
		#if defined(GL_BLUE_SCALE)
			eBlueScale = (GLenum)GL_BLUE_SCALE,
		#endif
		#if defined(GL_DEPTH_BIAS)
			eDepthBias = (GLenum)GL_DEPTH_BIAS,
		#endif
		#if defined(GL_DEPTH_SCALE)
			eDepthScale = (GLenum)GL_DEPTH_SCALE,
		#endif
		#if defined(GL_GREEN_BIAS)
			eGreenBias = (GLenum)GL_GREEN_BIAS,
		#endif
		#if defined(GL_GREEN_SCALE)
			eGreenScale = (GLenum)GL_GREEN_SCALE,
		#endif
		#if defined(GL_INDEX_OFFSET)
			eIndexOffset = (GLenum)GL_INDEX_OFFSET,
		#endif
		#if defined(GL_INDEX_SHIFT)
			eIndexShift = (GLenum)GL_INDEX_SHIFT,
		#endif
		#if defined(GL_MAP_COLOR)
			eMapColor = (GLenum)GL_MAP_COLOR,
		#endif
		#if defined(GL_MAP_STENCIL)
			eMapStencil = (GLenum)GL_MAP_STENCIL,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_ALPHA_BIAS)
			ePostColorMatrixAlphaBias = (GLenum)GL_POST_COLOR_MATRIX_ALPHA_BIAS,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI)
			ePostColorMatrixAlphaBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_ALPHA_SCALE)
			ePostColorMatrixAlphaScale = (GLenum)GL_POST_COLOR_MATRIX_ALPHA_SCALE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI)
			ePostColorMatrixAlphaScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_BLUE_BIAS)
			ePostColorMatrixBlueBias = (GLenum)GL_POST_COLOR_MATRIX_BLUE_BIAS,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI)
			ePostColorMatrixBlueBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_BLUE_SCALE)
			ePostColorMatrixBlueScale = (GLenum)GL_POST_COLOR_MATRIX_BLUE_SCALE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI)
			ePostColorMatrixBlueScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_GREEN_BIAS)
			ePostColorMatrixGreenBias = (GLenum)GL_POST_COLOR_MATRIX_GREEN_BIAS,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI)
			ePostColorMatrixGreenBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_GREEN_SCALE)
			ePostColorMatrixGreenScale = (GLenum)GL_POST_COLOR_MATRIX_GREEN_SCALE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI)
			ePostColorMatrixGreenScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_RED_BIAS)
			ePostColorMatrixRedBias = (GLenum)GL_POST_COLOR_MATRIX_RED_BIAS,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_RED_BIAS_SGI)
			ePostColorMatrixRedBiasSgi = (GLenum)GL_POST_COLOR_MATRIX_RED_BIAS_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_RED_SCALE)
			ePostColorMatrixRedScale = (GLenum)GL_POST_COLOR_MATRIX_RED_SCALE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_RED_SCALE_SGI)
			ePostColorMatrixRedScaleSgi = (GLenum)GL_POST_COLOR_MATRIX_RED_SCALE_SGI,
		#endif
		#if defined(GL_POST_CONVOLUTION_ALPHA_BIAS)
			ePostConvolutionAlphaBias = (GLenum)GL_POST_CONVOLUTION_ALPHA_BIAS,
		#endif
		#if defined(GL_POST_CONVOLUTION_ALPHA_BIAS_EXT)
			ePostConvolutionAlphaBiasExt = (GLenum)GL_POST_CONVOLUTION_ALPHA_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_ALPHA_SCALE)
			ePostConvolutionAlphaScale = (GLenum)GL_POST_CONVOLUTION_ALPHA_SCALE,
		#endif
		#if defined(GL_POST_CONVOLUTION_ALPHA_SCALE_EXT)
			ePostConvolutionAlphaScaleExt = (GLenum)GL_POST_CONVOLUTION_ALPHA_SCALE_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_BLUE_BIAS)
			ePostConvolutionBlueBias = (GLenum)GL_POST_CONVOLUTION_BLUE_BIAS,
		#endif
		#if defined(GL_POST_CONVOLUTION_BLUE_BIAS_EXT)
			ePostConvolutionBlueBiasExt = (GLenum)GL_POST_CONVOLUTION_BLUE_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_BLUE_SCALE)
			ePostConvolutionBlueScale = (GLenum)GL_POST_CONVOLUTION_BLUE_SCALE,
		#endif
		#if defined(GL_POST_CONVOLUTION_BLUE_SCALE_EXT)
			ePostConvolutionBlueScaleExt = (GLenum)GL_POST_CONVOLUTION_BLUE_SCALE_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_GREEN_BIAS)
			ePostConvolutionGreenBias = (GLenum)GL_POST_CONVOLUTION_GREEN_BIAS,
		#endif
		#if defined(GL_POST_CONVOLUTION_GREEN_BIAS_EXT)
			ePostConvolutionGreenBiasExt = (GLenum)GL_POST_CONVOLUTION_GREEN_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_GREEN_SCALE)
			ePostConvolutionGreenScale = (GLenum)GL_POST_CONVOLUTION_GREEN_SCALE,
		#endif
		#if defined(GL_POST_CONVOLUTION_GREEN_SCALE_EXT)
			ePostConvolutionGreenScaleExt = (GLenum)GL_POST_CONVOLUTION_GREEN_SCALE_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_RED_BIAS)
			ePostConvolutionRedBias = (GLenum)GL_POST_CONVOLUTION_RED_BIAS,
		#endif
		#if defined(GL_POST_CONVOLUTION_RED_BIAS_EXT)
			ePostConvolutionRedBiasExt = (GLenum)GL_POST_CONVOLUTION_RED_BIAS_EXT,
		#endif
		#if defined(GL_POST_CONVOLUTION_RED_SCALE)
			ePostConvolutionRedScale = (GLenum)GL_POST_CONVOLUTION_RED_SCALE,
		#endif
		#if defined(GL_POST_CONVOLUTION_RED_SCALE_EXT)
			ePostConvolutionRedScaleExt = (GLenum)GL_POST_CONVOLUTION_RED_SCALE_EXT,
		#endif
		#if defined(GL_RED_BIAS)
			eRedBias = (GLenum)GL_RED_BIAS,
		#endif
		#if defined(GL_RED_SCALE)
			eRedScale = (GLenum)GL_RED_SCALE,
		#endif
	};

	enum class IndexMaterialParameterEXT : GLenum {
		#if defined(GL_INDEX_OFFSET)
			eIndexOffset = (GLenum)GL_INDEX_OFFSET,
		#endif
	};

	enum class TextureEnvParameter : GLenum {
		#if defined(GL_ADD_SIGNED)
			eAddSigned = (GLenum)GL_ADD_SIGNED,
		#endif
		#if defined(GL_ADD_SIGNED_ARB)
			eAddSignedArb = (GLenum)GL_ADD_SIGNED_ARB,
		#endif
		#if defined(GL_ADD_SIGNED_EXT)
			eAddSignedExt = (GLenum)GL_ADD_SIGNED_EXT,
		#endif
		#if defined(GL_ALPHA_SCALE)
			eAlphaScale = (GLenum)GL_ALPHA_SCALE,
		#endif
		#if defined(GL_COMBINE)
			eCombine = (GLenum)GL_COMBINE,
		#endif
		#if defined(GL_COMBINE_ALPHA)
			eCombineAlpha = (GLenum)GL_COMBINE_ALPHA,
		#endif
		#if defined(GL_COMBINE_ALPHA_ARB)
			eCombineAlphaArb = (GLenum)GL_COMBINE_ALPHA_ARB,
		#endif
		#if defined(GL_COMBINE_ALPHA_EXT)
			eCombineAlphaExt = (GLenum)GL_COMBINE_ALPHA_EXT,
		#endif
		#if defined(GL_COMBINE_ARB)
			eCombineArb = (GLenum)GL_COMBINE_ARB,
		#endif
		#if defined(GL_COMBINE_EXT)
			eCombineExt = (GLenum)GL_COMBINE_EXT,
		#endif
		#if defined(GL_COMBINE_RGB)
			eCombineRgb = (GLenum)GL_COMBINE_RGB,
		#endif
		#if defined(GL_COMBINE_RGB_ARB)
			eCombineRgbArb = (GLenum)GL_COMBINE_RGB_ARB,
		#endif
		#if defined(GL_COMBINE_RGB_EXT)
			eCombineRgbExt = (GLenum)GL_COMBINE_RGB_EXT,
		#endif
		#if defined(GL_CONSTANT)
			eConstant = (GLenum)GL_CONSTANT,
		#endif
		#if defined(GL_CONSTANT_ARB)
			eConstantArb = (GLenum)GL_CONSTANT_ARB,
		#endif
		#if defined(GL_CONSTANT_EXT)
			eConstantExt = (GLenum)GL_CONSTANT_EXT,
		#endif
		#if defined(GL_CONSTANT_NV)
			eConstantNv = (GLenum)GL_CONSTANT_NV,
		#endif
		#if defined(GL_COORD_REPLACE)
			eCoordReplace = (GLenum)GL_COORD_REPLACE,
		#endif
		#if defined(GL_INTERPOLATE)
			eInterpolate = (GLenum)GL_INTERPOLATE,
		#endif
		#if defined(GL_INTERPOLATE_ARB)
			eInterpolateArb = (GLenum)GL_INTERPOLATE_ARB,
		#endif
		#if defined(GL_INTERPOLATE_EXT)
			eInterpolateExt = (GLenum)GL_INTERPOLATE_EXT,
		#endif
		#if defined(GL_OPERAND0_ALPHA)
			eOperand0Alpha = (GLenum)GL_OPERAND0_ALPHA,
		#endif
		#if defined(GL_OPERAND0_ALPHA_ARB)
			eOperand0AlphaArb = (GLenum)GL_OPERAND0_ALPHA_ARB,
		#endif
		#if defined(GL_OPERAND0_ALPHA_EXT)
			eOperand0AlphaExt = (GLenum)GL_OPERAND0_ALPHA_EXT,
		#endif
		#if defined(GL_OPERAND0_RGB)
			eOperand0Rgb = (GLenum)GL_OPERAND0_RGB,
		#endif
		#if defined(GL_OPERAND0_RGB_ARB)
			eOperand0RgbArb = (GLenum)GL_OPERAND0_RGB_ARB,
		#endif
		#if defined(GL_OPERAND0_RGB_EXT)
			eOperand0RgbExt = (GLenum)GL_OPERAND0_RGB_EXT,
		#endif
		#if defined(GL_OPERAND1_ALPHA)
			eOperand1Alpha = (GLenum)GL_OPERAND1_ALPHA,
		#endif
		#if defined(GL_OPERAND1_ALPHA_ARB)
			eOperand1AlphaArb = (GLenum)GL_OPERAND1_ALPHA_ARB,
		#endif
		#if defined(GL_OPERAND1_ALPHA_EXT)
			eOperand1AlphaExt = (GLenum)GL_OPERAND1_ALPHA_EXT,
		#endif
		#if defined(GL_OPERAND1_RGB)
			eOperand1Rgb = (GLenum)GL_OPERAND1_RGB,
		#endif
		#if defined(GL_OPERAND1_RGB_ARB)
			eOperand1RgbArb = (GLenum)GL_OPERAND1_RGB_ARB,
		#endif
		#if defined(GL_OPERAND1_RGB_EXT)
			eOperand1RgbExt = (GLenum)GL_OPERAND1_RGB_EXT,
		#endif
		#if defined(GL_OPERAND2_ALPHA)
			eOperand2Alpha = (GLenum)GL_OPERAND2_ALPHA,
		#endif
		#if defined(GL_OPERAND2_ALPHA_ARB)
			eOperand2AlphaArb = (GLenum)GL_OPERAND2_ALPHA_ARB,
		#endif
		#if defined(GL_OPERAND2_ALPHA_EXT)
			eOperand2AlphaExt = (GLenum)GL_OPERAND2_ALPHA_EXT,
		#endif
		#if defined(GL_OPERAND2_RGB)
			eOperand2Rgb = (GLenum)GL_OPERAND2_RGB,
		#endif
		#if defined(GL_OPERAND2_RGB_ARB)
			eOperand2RgbArb = (GLenum)GL_OPERAND2_RGB_ARB,
		#endif
		#if defined(GL_OPERAND2_RGB_EXT)
			eOperand2RgbExt = (GLenum)GL_OPERAND2_RGB_EXT,
		#endif
		#if defined(GL_OPERAND3_ALPHA_NV)
			eOperand3AlphaNv = (GLenum)GL_OPERAND3_ALPHA_NV,
		#endif
		#if defined(GL_OPERAND3_RGB_NV)
			eOperand3RgbNv = (GLenum)GL_OPERAND3_RGB_NV,
		#endif
		#if defined(GL_PREVIOUS)
			ePrevious = (GLenum)GL_PREVIOUS,
		#endif
		#if defined(GL_PREVIOUS_ARB)
			ePreviousArb = (GLenum)GL_PREVIOUS_ARB,
		#endif
		#if defined(GL_PREVIOUS_EXT)
			ePreviousExt = (GLenum)GL_PREVIOUS_EXT,
		#endif
		#if defined(GL_PRIMARY_COLOR)
			ePrimaryColor = (GLenum)GL_PRIMARY_COLOR,
		#endif
		#if defined(GL_PRIMARY_COLOR_ARB)
			ePrimaryColorArb = (GLenum)GL_PRIMARY_COLOR_ARB,
		#endif
		#if defined(GL_PRIMARY_COLOR_EXT)
			ePrimaryColorExt = (GLenum)GL_PRIMARY_COLOR_EXT,
		#endif
		#if defined(GL_RGB_SCALE)
			eRgbScale = (GLenum)GL_RGB_SCALE,
		#endif
		#if defined(GL_RGB_SCALE_ARB)
			eRgbScaleArb = (GLenum)GL_RGB_SCALE_ARB,
		#endif
		#if defined(GL_RGB_SCALE_EXT)
			eRgbScaleExt = (GLenum)GL_RGB_SCALE_EXT,
		#endif
		#if defined(GL_SOURCE0_ALPHA)
			eSource0Alpha = (GLenum)GL_SOURCE0_ALPHA,
		#endif
		#if defined(GL_SOURCE0_ALPHA_ARB)
			eSource0AlphaArb = (GLenum)GL_SOURCE0_ALPHA_ARB,
		#endif
		#if defined(GL_SOURCE0_ALPHA_EXT)
			eSource0AlphaExt = (GLenum)GL_SOURCE0_ALPHA_EXT,
		#endif
		#if defined(GL_SOURCE0_RGB)
			eSource0Rgb = (GLenum)GL_SOURCE0_RGB,
		#endif
		#if defined(GL_SOURCE0_RGB_ARB)
			eSource0RgbArb = (GLenum)GL_SOURCE0_RGB_ARB,
		#endif
		#if defined(GL_SOURCE0_RGB_EXT)
			eSource0RgbExt = (GLenum)GL_SOURCE0_RGB_EXT,
		#endif
		#if defined(GL_SOURCE1_ALPHA)
			eSource1Alpha = (GLenum)GL_SOURCE1_ALPHA,
		#endif
		#if defined(GL_SOURCE1_ALPHA_ARB)
			eSource1AlphaArb = (GLenum)GL_SOURCE1_ALPHA_ARB,
		#endif
		#if defined(GL_SOURCE1_ALPHA_EXT)
			eSource1AlphaExt = (GLenum)GL_SOURCE1_ALPHA_EXT,
		#endif
		#if defined(GL_SOURCE1_RGB)
			eSource1Rgb = (GLenum)GL_SOURCE1_RGB,
		#endif
		#if defined(GL_SOURCE1_RGB_ARB)
			eSource1RgbArb = (GLenum)GL_SOURCE1_RGB_ARB,
		#endif
		#if defined(GL_SOURCE1_RGB_EXT)
			eSource1RgbExt = (GLenum)GL_SOURCE1_RGB_EXT,
		#endif
		#if defined(GL_SOURCE2_ALPHA)
			eSource2Alpha = (GLenum)GL_SOURCE2_ALPHA,
		#endif
		#if defined(GL_SOURCE2_ALPHA_ARB)
			eSource2AlphaArb = (GLenum)GL_SOURCE2_ALPHA_ARB,
		#endif
		#if defined(GL_SOURCE2_ALPHA_EXT)
			eSource2AlphaExt = (GLenum)GL_SOURCE2_ALPHA_EXT,
		#endif
		#if defined(GL_SOURCE2_RGB)
			eSource2Rgb = (GLenum)GL_SOURCE2_RGB,
		#endif
		#if defined(GL_SOURCE2_RGB_ARB)
			eSource2RgbArb = (GLenum)GL_SOURCE2_RGB_ARB,
		#endif
		#if defined(GL_SOURCE2_RGB_EXT)
			eSource2RgbExt = (GLenum)GL_SOURCE2_RGB_EXT,
		#endif
		#if defined(GL_SOURCE3_ALPHA_NV)
			eSource3AlphaNv = (GLenum)GL_SOURCE3_ALPHA_NV,
		#endif
		#if defined(GL_SOURCE3_RGB_NV)
			eSource3RgbNv = (GLenum)GL_SOURCE3_RGB_NV,
		#endif
		#if defined(GL_SRC0_ALPHA)
			eSrc0Alpha = (GLenum)GL_SRC0_ALPHA,
		#endif
		#if defined(GL_SRC0_RGB)
			eSrc0Rgb = (GLenum)GL_SRC0_RGB,
		#endif
		#if defined(GL_SRC1_ALPHA)
			eSrc1Alpha = (GLenum)GL_SRC1_ALPHA,
		#endif
		#if defined(GL_SRC1_ALPHA_EXT)
			eSrc1AlphaExt = (GLenum)GL_SRC1_ALPHA_EXT,
		#endif
		#if defined(GL_SRC1_RGB)
			eSrc1Rgb = (GLenum)GL_SRC1_RGB,
		#endif
		#if defined(GL_SRC2_ALPHA)
			eSrc2Alpha = (GLenum)GL_SRC2_ALPHA,
		#endif
		#if defined(GL_SRC2_RGB)
			eSrc2Rgb = (GLenum)GL_SRC2_RGB,
		#endif
		#if defined(GL_TEXTURE_ENV_COLOR)
			eTextureEnvColor = (GLenum)GL_TEXTURE_ENV_COLOR,
		#endif
		#if defined(GL_TEXTURE_ENV_MODE)
			eTextureEnvMode = (GLenum)GL_TEXTURE_ENV_MODE,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS)
			eTextureLodBias = (GLenum)GL_TEXTURE_LOD_BIAS,
		#endif
	};

	enum class MapTarget : GLenum {
		#if defined(GL_GEOMETRY_DEFORMATION_SGIX)
			eGeometryDeformationSgix = (GLenum)GL_GEOMETRY_DEFORMATION_SGIX,
		#endif
		#if defined(GL_MAP1_COLOR_4)
			eMap1Color4 = (GLenum)GL_MAP1_COLOR_4,
		#endif
		#if defined(GL_MAP1_INDEX)
			eMap1Index = (GLenum)GL_MAP1_INDEX,
		#endif
		#if defined(GL_MAP1_NORMAL)
			eMap1Normal = (GLenum)GL_MAP1_NORMAL,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_1)
			eMap1TextureCoord1 = (GLenum)GL_MAP1_TEXTURE_COORD_1,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_2)
			eMap1TextureCoord2 = (GLenum)GL_MAP1_TEXTURE_COORD_2,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_3)
			eMap1TextureCoord3 = (GLenum)GL_MAP1_TEXTURE_COORD_3,
		#endif
		#if defined(GL_MAP1_TEXTURE_COORD_4)
			eMap1TextureCoord4 = (GLenum)GL_MAP1_TEXTURE_COORD_4,
		#endif
		#if defined(GL_MAP1_VERTEX_3)
			eMap1Vertex3 = (GLenum)GL_MAP1_VERTEX_3,
		#endif
		#if defined(GL_MAP1_VERTEX_4)
			eMap1Vertex4 = (GLenum)GL_MAP1_VERTEX_4,
		#endif
		#if defined(GL_MAP2_COLOR_4)
			eMap2Color4 = (GLenum)GL_MAP2_COLOR_4,
		#endif
		#if defined(GL_MAP2_INDEX)
			eMap2Index = (GLenum)GL_MAP2_INDEX,
		#endif
		#if defined(GL_MAP2_NORMAL)
			eMap2Normal = (GLenum)GL_MAP2_NORMAL,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_1)
			eMap2TextureCoord1 = (GLenum)GL_MAP2_TEXTURE_COORD_1,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_2)
			eMap2TextureCoord2 = (GLenum)GL_MAP2_TEXTURE_COORD_2,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_3)
			eMap2TextureCoord3 = (GLenum)GL_MAP2_TEXTURE_COORD_3,
		#endif
		#if defined(GL_MAP2_TEXTURE_COORD_4)
			eMap2TextureCoord4 = (GLenum)GL_MAP2_TEXTURE_COORD_4,
		#endif
		#if defined(GL_MAP2_VERTEX_3)
			eMap2Vertex3 = (GLenum)GL_MAP2_VERTEX_3,
		#endif
		#if defined(GL_MAP2_VERTEX_4)
			eMap2Vertex4 = (GLenum)GL_MAP2_VERTEX_4,
		#endif
		#if defined(GL_TEXTURE_DEFORMATION_SGIX)
			eTextureDeformationSgix = (GLenum)GL_TEXTURE_DEFORMATION_SGIX,
		#endif
	};

	enum class CopyImageSubDataTarget : GLenum {
		#if defined(GL_RENDERBUFFER)
			eRenderbuffer = (GLenum)GL_RENDERBUFFER,
		#endif
		#if defined(GL_TEXTURE_1D)
			eTexture1d = (GLenum)GL_TEXTURE_1D,
		#endif
		#if defined(GL_TEXTURE_1D_ARRAY)
			eTexture1dArray = (GLenum)GL_TEXTURE_1D_ARRAY,
		#endif
		#if defined(GL_TEXTURE_2D)
			eTexture2d = (GLenum)GL_TEXTURE_2D,
		#endif
		#if defined(GL_TEXTURE_2D_ARRAY)
			eTexture2dArray = (GLenum)GL_TEXTURE_2D_ARRAY,
		#endif
		#if defined(GL_TEXTURE_2D_MULTISAMPLE)
			eTexture2dMultisample = (GLenum)GL_TEXTURE_2D_MULTISAMPLE,
		#endif
		#if defined(GL_TEXTURE_2D_MULTISAMPLE_ARRAY)
			eTexture2dMultisampleArray = (GLenum)GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_TEXTURE_3D)
			eTexture3d = (GLenum)GL_TEXTURE_3D,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP)
			eTextureCubeMap = (GLenum)GL_TEXTURE_CUBE_MAP,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARRAY)
			eTextureCubeMapArray = (GLenum)GL_TEXTURE_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE)
			eTextureRectangle = (GLenum)GL_TEXTURE_RECTANGLE,
		#endif
	};

	enum class TextureTarget : GLenum {
		#if defined(GL_DETAIL_TEXTURE_2D_SGIS)
			eDetailTexture2dSgis = (GLenum)GL_DETAIL_TEXTURE_2D_SGIS,
		#endif
		#if defined(GL_PROXY_TEXTURE_1D)
			eProxyTexture1d = (GLenum)GL_PROXY_TEXTURE_1D,
		#endif
		#if defined(GL_PROXY_TEXTURE_1D_ARRAY)
			eProxyTexture1dArray = (GLenum)GL_PROXY_TEXTURE_1D_ARRAY,
		#endif
		#if defined(GL_PROXY_TEXTURE_1D_ARRAY_EXT)
			eProxyTexture1dArrayExt = (GLenum)GL_PROXY_TEXTURE_1D_ARRAY_EXT,
		#endif
		#if defined(GL_PROXY_TEXTURE_1D_EXT)
			eProxyTexture1dExt = (GLenum)GL_PROXY_TEXTURE_1D_EXT,
		#endif
		#if defined(GL_PROXY_TEXTURE_2D)
			eProxyTexture2d = (GLenum)GL_PROXY_TEXTURE_2D,
		#endif
		#if defined(GL_PROXY_TEXTURE_2D_ARRAY)
			eProxyTexture2dArray = (GLenum)GL_PROXY_TEXTURE_2D_ARRAY,
		#endif
		#if defined(GL_PROXY_TEXTURE_2D_ARRAY_EXT)
			eProxyTexture2dArrayExt = (GLenum)GL_PROXY_TEXTURE_2D_ARRAY_EXT,
		#endif
		#if defined(GL_PROXY_TEXTURE_2D_EXT)
			eProxyTexture2dExt = (GLenum)GL_PROXY_TEXTURE_2D_EXT,
		#endif
		#if defined(GL_PROXY_TEXTURE_2D_MULTISAMPLE)
			eProxyTexture2dMultisample = (GLenum)GL_PROXY_TEXTURE_2D_MULTISAMPLE,
		#endif
		#if defined(GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY)
			eProxyTexture2dMultisampleArray = (GLenum)GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_PROXY_TEXTURE_3D)
			eProxyTexture3d = (GLenum)GL_PROXY_TEXTURE_3D,
		#endif
		#if defined(GL_PROXY_TEXTURE_3D_EXT)
			eProxyTexture3dExt = (GLenum)GL_PROXY_TEXTURE_3D_EXT,
		#endif
		#if defined(GL_PROXY_TEXTURE_4D_SGIS)
			eProxyTexture4dSgis = (GLenum)GL_PROXY_TEXTURE_4D_SGIS,
		#endif
		#if defined(GL_PROXY_TEXTURE_CUBE_MAP)
			eProxyTextureCubeMap = (GLenum)GL_PROXY_TEXTURE_CUBE_MAP,
		#endif
		#if defined(GL_PROXY_TEXTURE_CUBE_MAP_ARB)
			eProxyTextureCubeMapArb = (GLenum)GL_PROXY_TEXTURE_CUBE_MAP_ARB,
		#endif
		#if defined(GL_PROXY_TEXTURE_CUBE_MAP_ARRAY)
			eProxyTextureCubeMapArray = (GLenum)GL_PROXY_TEXTURE_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB)
			eProxyTextureCubeMapArrayArb = (GLenum)GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB,
		#endif
		#if defined(GL_PROXY_TEXTURE_CUBE_MAP_EXT)
			eProxyTextureCubeMapExt = (GLenum)GL_PROXY_TEXTURE_CUBE_MAP_EXT,
		#endif
		#if defined(GL_PROXY_TEXTURE_RECTANGLE)
			eProxyTextureRectangle = (GLenum)GL_PROXY_TEXTURE_RECTANGLE,
		#endif
		#if defined(GL_PROXY_TEXTURE_RECTANGLE_ARB)
			eProxyTextureRectangleArb = (GLenum)GL_PROXY_TEXTURE_RECTANGLE_ARB,
		#endif
		#if defined(GL_PROXY_TEXTURE_RECTANGLE_NV)
			eProxyTextureRectangleNv = (GLenum)GL_PROXY_TEXTURE_RECTANGLE_NV,
		#endif
		#if defined(GL_RENDERBUFFER)
			eRenderbuffer = (GLenum)GL_RENDERBUFFER,
		#endif
		#if defined(GL_TEXTURE_1D)
			eTexture1d = (GLenum)GL_TEXTURE_1D,
		#endif
		#if defined(GL_TEXTURE_1D_ARRAY)
			eTexture1dArray = (GLenum)GL_TEXTURE_1D_ARRAY,
		#endif
		#if defined(GL_TEXTURE_2D)
			eTexture2d = (GLenum)GL_TEXTURE_2D,
		#endif
		#if defined(GL_TEXTURE_2D_ARRAY)
			eTexture2dArray = (GLenum)GL_TEXTURE_2D_ARRAY,
		#endif
		#if defined(GL_TEXTURE_2D_MULTISAMPLE)
			eTexture2dMultisample = (GLenum)GL_TEXTURE_2D_MULTISAMPLE,
		#endif
		#if defined(GL_TEXTURE_2D_MULTISAMPLE_ARRAY)
			eTexture2dMultisampleArray = (GLenum)GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_TEXTURE_3D)
			eTexture3d = (GLenum)GL_TEXTURE_3D,
		#endif
		#if defined(GL_TEXTURE_3D_EXT)
			eTexture3dExt = (GLenum)GL_TEXTURE_3D_EXT,
		#endif
		#if defined(GL_TEXTURE_3D_OES)
			eTexture3dOes = (GLenum)GL_TEXTURE_3D_OES,
		#endif
		#if defined(GL_TEXTURE_4D_SGIS)
			eTexture4dSgis = (GLenum)GL_TEXTURE_4D_SGIS,
		#endif
		#if defined(GL_TEXTURE_BUFFER)
			eTextureBuffer = (GLenum)GL_TEXTURE_BUFFER,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP)
			eTextureCubeMap = (GLenum)GL_TEXTURE_CUBE_MAP,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARB)
			eTextureCubeMapArb = (GLenum)GL_TEXTURE_CUBE_MAP_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARRAY)
			eTextureCubeMapArray = (GLenum)GL_TEXTURE_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARRAY_ARB)
			eTextureCubeMapArrayArb = (GLenum)GL_TEXTURE_CUBE_MAP_ARRAY_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARRAY_EXT)
			eTextureCubeMapArrayExt = (GLenum)GL_TEXTURE_CUBE_MAP_ARRAY_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_ARRAY_OES)
			eTextureCubeMapArrayOes = (GLenum)GL_TEXTURE_CUBE_MAP_ARRAY_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_EXT)
			eTextureCubeMapExt = (GLenum)GL_TEXTURE_CUBE_MAP_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_X)
			eTextureCubeMapNegativeX = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB)
			eTextureCubeMapNegativeXArb = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT)
			eTextureCubeMapNegativeXExt = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES)
			eTextureCubeMapNegativeXOes = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y)
			eTextureCubeMapNegativeY = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB)
			eTextureCubeMapNegativeYArb = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT)
			eTextureCubeMapNegativeYExt = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES)
			eTextureCubeMapNegativeYOes = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z)
			eTextureCubeMapNegativeZ = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB)
			eTextureCubeMapNegativeZArb = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT)
			eTextureCubeMapNegativeZExt = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES)
			eTextureCubeMapNegativeZOes = (GLenum)GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_OES)
			eTextureCubeMapOes = (GLenum)GL_TEXTURE_CUBE_MAP_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_X)
			eTextureCubeMapPositiveX = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_X,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB)
			eTextureCubeMapPositiveXArb = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT)
			eTextureCubeMapPositiveXExt = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES)
			eTextureCubeMapPositiveXOes = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Y)
			eTextureCubeMapPositiveY = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB)
			eTextureCubeMapPositiveYArb = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT)
			eTextureCubeMapPositiveYExt = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES)
			eTextureCubeMapPositiveYOes = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Z)
			eTextureCubeMapPositiveZ = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB)
			eTextureCubeMapPositiveZArb = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT)
			eTextureCubeMapPositiveZExt = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT,
		#endif
		#if defined(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES)
			eTextureCubeMapPositiveZOes = (GLenum)GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE)
			eTextureRectangle = (GLenum)GL_TEXTURE_RECTANGLE,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE_ARB)
			eTextureRectangleArb = (GLenum)GL_TEXTURE_RECTANGLE_ARB,
		#endif
		#if defined(GL_TEXTURE_RECTANGLE_NV)
			eTextureRectangleNv = (GLenum)GL_TEXTURE_RECTANGLE_NV,
		#endif
	};

	enum class GetPointervPName : GLenum {
		#if defined(GL_COLOR_ARRAY_POINTER)
			eColorArrayPointer = (GLenum)GL_COLOR_ARRAY_POINTER,
		#endif
		#if defined(GL_COLOR_ARRAY_POINTER_EXT)
			eColorArrayPointerExt = (GLenum)GL_COLOR_ARRAY_POINTER_EXT,
		#endif
		#if defined(GL_DEBUG_CALLBACK_FUNCTION)
			eDebugCallbackFunction = (GLenum)GL_DEBUG_CALLBACK_FUNCTION,
		#endif
		#if defined(GL_DEBUG_CALLBACK_USER_PARAM)
			eDebugCallbackUserParam = (GLenum)GL_DEBUG_CALLBACK_USER_PARAM,
		#endif
		#if defined(GL_EDGE_FLAG_ARRAY_POINTER)
			eEdgeFlagArrayPointer = (GLenum)GL_EDGE_FLAG_ARRAY_POINTER,
		#endif
		#if defined(GL_EDGE_FLAG_ARRAY_POINTER_EXT)
			eEdgeFlagArrayPointerExt = (GLenum)GL_EDGE_FLAG_ARRAY_POINTER_EXT,
		#endif
		#if defined(GL_FEEDBACK_BUFFER_POINTER)
			eFeedbackBufferPointer = (GLenum)GL_FEEDBACK_BUFFER_POINTER,
		#endif
		#if defined(GL_INDEX_ARRAY_POINTER)
			eIndexArrayPointer = (GLenum)GL_INDEX_ARRAY_POINTER,
		#endif
		#if defined(GL_INDEX_ARRAY_POINTER_EXT)
			eIndexArrayPointerExt = (GLenum)GL_INDEX_ARRAY_POINTER_EXT,
		#endif
		#if defined(GL_INSTRUMENT_BUFFER_POINTER_SGIX)
			eInstrumentBufferPointerSgix = (GLenum)GL_INSTRUMENT_BUFFER_POINTER_SGIX,
		#endif
		#if defined(GL_NORMAL_ARRAY_POINTER)
			eNormalArrayPointer = (GLenum)GL_NORMAL_ARRAY_POINTER,
		#endif
		#if defined(GL_NORMAL_ARRAY_POINTER_EXT)
			eNormalArrayPointerExt = (GLenum)GL_NORMAL_ARRAY_POINTER_EXT,
		#endif
		#if defined(GL_SELECTION_BUFFER_POINTER)
			eSelectionBufferPointer = (GLenum)GL_SELECTION_BUFFER_POINTER,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY_POINTER)
			eTextureCoordArrayPointer = (GLenum)GL_TEXTURE_COORD_ARRAY_POINTER,
		#endif
		#if defined(GL_TEXTURE_COORD_ARRAY_POINTER_EXT)
			eTextureCoordArrayPointerExt = (GLenum)GL_TEXTURE_COORD_ARRAY_POINTER_EXT,
		#endif
		#if defined(GL_VERTEX_ARRAY_POINTER)
			eVertexArrayPointer = (GLenum)GL_VERTEX_ARRAY_POINTER,
		#endif
		#if defined(GL_VERTEX_ARRAY_POINTER_EXT)
			eVertexArrayPointerExt = (GLenum)GL_VERTEX_ARRAY_POINTER_EXT,
		#endif
	};

	enum class TextureParameterName : GLenum {
		#if defined(GL_DEPTH_STENCIL_TEXTURE_MODE)
			eDepthStencilTextureMode = (GLenum)GL_DEPTH_STENCIL_TEXTURE_MODE,
		#endif
		#if defined(GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS)
			eDetailTextureFuncPointsSgis = (GLenum)GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS,
		#endif
		#if defined(GL_DETAIL_TEXTURE_LEVEL_SGIS)
			eDetailTextureLevelSgis = (GLenum)GL_DETAIL_TEXTURE_LEVEL_SGIS,
		#endif
		#if defined(GL_DETAIL_TEXTURE_MODE_SGIS)
			eDetailTextureModeSgis = (GLenum)GL_DETAIL_TEXTURE_MODE_SGIS,
		#endif
		#if defined(GL_DUAL_TEXTURE_SELECT_SGIS)
			eDualTextureSelectSgis = (GLenum)GL_DUAL_TEXTURE_SELECT_SGIS,
		#endif
		#if defined(GL_GENERATE_MIPMAP)
			eGenerateMipmap = (GLenum)GL_GENERATE_MIPMAP,
		#endif
		#if defined(GL_GENERATE_MIPMAP_SGIS)
			eGenerateMipmapSgis = (GLenum)GL_GENERATE_MIPMAP_SGIS,
		#endif
		#if defined(GL_POST_TEXTURE_FILTER_BIAS_SGIX)
			ePostTextureFilterBiasSgix = (GLenum)GL_POST_TEXTURE_FILTER_BIAS_SGIX,
		#endif
		#if defined(GL_POST_TEXTURE_FILTER_SCALE_SGIX)
			ePostTextureFilterScaleSgix = (GLenum)GL_POST_TEXTURE_FILTER_SCALE_SGIX,
		#endif
		#if defined(GL_QUAD_TEXTURE_SELECT_SGIS)
			eQuadTextureSelectSgis = (GLenum)GL_QUAD_TEXTURE_SELECT_SGIS,
		#endif
		#if defined(GL_SHADOW_AMBIENT_SGIX)
			eShadowAmbientSgix = (GLenum)GL_SHADOW_AMBIENT_SGIX,
		#endif
		#if defined(GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS)
			eSharpenTextureFuncPointsSgis = (GLenum)GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS,
		#endif
		#if defined(GL_TEXTURE_4DSIZE_SGIS)
			eTexture4dsizeSgis = (GLenum)GL_TEXTURE_4DSIZE_SGIS,
		#endif
		#if defined(GL_TEXTURE_ALPHA_SIZE)
			eTextureAlphaSize = (GLenum)GL_TEXTURE_ALPHA_SIZE,
		#endif
		#if defined(GL_TEXTURE_BASE_LEVEL)
			eTextureBaseLevel = (GLenum)GL_TEXTURE_BASE_LEVEL,
		#endif
		#if defined(GL_TEXTURE_BASE_LEVEL_SGIS)
			eTextureBaseLevelSgis = (GLenum)GL_TEXTURE_BASE_LEVEL_SGIS,
		#endif
		#if defined(GL_TEXTURE_BLUE_SIZE)
			eTextureBlueSize = (GLenum)GL_TEXTURE_BLUE_SIZE,
		#endif
		#if defined(GL_TEXTURE_BORDER)
			eTextureBorder = (GLenum)GL_TEXTURE_BORDER,
		#endif
		#if defined(GL_TEXTURE_BORDER_COLOR)
			eTextureBorderColor = (GLenum)GL_TEXTURE_BORDER_COLOR,
		#endif
		#if defined(GL_TEXTURE_BORDER_COLOR_NV)
			eTextureBorderColorNv = (GLenum)GL_TEXTURE_BORDER_COLOR_NV,
		#endif
		#if defined(GL_TEXTURE_CBCR_DEGAMMA_QCOM)
			eTextureCbcrDegammaQcom = (GLenum)GL_TEXTURE_CBCR_DEGAMMA_QCOM,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_CENTER_SGIX)
			eTextureClipmapCenterSgix = (GLenum)GL_TEXTURE_CLIPMAP_CENTER_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_DEPTH_SGIX)
			eTextureClipmapDepthSgix = (GLenum)GL_TEXTURE_CLIPMAP_DEPTH_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_FRAME_SGIX)
			eTextureClipmapFrameSgix = (GLenum)GL_TEXTURE_CLIPMAP_FRAME_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX)
			eTextureClipmapLodOffsetSgix = (GLenum)GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_OFFSET_SGIX)
			eTextureClipmapOffsetSgix = (GLenum)GL_TEXTURE_CLIPMAP_OFFSET_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX)
			eTextureClipmapVirtualDepthSgix = (GLenum)GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX,
		#endif
		#if defined(GL_TEXTURE_COMPARE_FUNC)
			eTextureCompareFunc = (GLenum)GL_TEXTURE_COMPARE_FUNC,
		#endif
		#if defined(GL_TEXTURE_COMPARE_MODE)
			eTextureCompareMode = (GLenum)GL_TEXTURE_COMPARE_MODE,
		#endif
		#if defined(GL_TEXTURE_COMPARE_OPERATOR_SGIX)
			eTextureCompareOperatorSgix = (GLenum)GL_TEXTURE_COMPARE_OPERATOR_SGIX,
		#endif
		#if defined(GL_TEXTURE_COMPARE_SGIX)
			eTextureCompareSgix = (GLenum)GL_TEXTURE_COMPARE_SGIX,
		#endif
		#if defined(GL_TEXTURE_COMPONENTS)
			eTextureComponents = (GLenum)GL_TEXTURE_COMPONENTS,
		#endif
		#if defined(GL_TEXTURE_DEPTH_EXT)
			eTextureDepthExt = (GLenum)GL_TEXTURE_DEPTH_EXT,
		#endif
		#if defined(GL_TEXTURE_FILTER4_SIZE_SGIS)
			eTextureFilter4SizeSgis = (GLenum)GL_TEXTURE_FILTER4_SIZE_SGIS,
		#endif
		#if defined(GL_TEXTURE_FOVEATED_CUTOFF_DENSITY_QCOM)
			eTextureFoveatedCutoffDensityQcom = (GLenum)GL_TEXTURE_FOVEATED_CUTOFF_DENSITY_QCOM,
		#endif
		#if defined(GL_TEXTURE_GEQUAL_R_SGIX)
			eTextureGequalRSgix = (GLenum)GL_TEXTURE_GEQUAL_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_GREEN_SIZE)
			eTextureGreenSize = (GLenum)GL_TEXTURE_GREEN_SIZE,
		#endif
		#if defined(GL_TEXTURE_HEIGHT)
			eTextureHeight = (GLenum)GL_TEXTURE_HEIGHT,
		#endif
		#if defined(GL_TEXTURE_INTENSITY_SIZE)
			eTextureIntensitySize = (GLenum)GL_TEXTURE_INTENSITY_SIZE,
		#endif
		#if defined(GL_TEXTURE_INTERNAL_FORMAT)
			eTextureInternalFormat = (GLenum)GL_TEXTURE_INTERNAL_FORMAT,
		#endif
		#if defined(GL_TEXTURE_LEQUAL_R_SGIX)
			eTextureLequalRSgix = (GLenum)GL_TEXTURE_LEQUAL_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS)
			eTextureLodBias = (GLenum)GL_TEXTURE_LOD_BIAS,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS_R_SGIX)
			eTextureLodBiasRSgix = (GLenum)GL_TEXTURE_LOD_BIAS_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS_S_SGIX)
			eTextureLodBiasSSgix = (GLenum)GL_TEXTURE_LOD_BIAS_S_SGIX,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS_T_SGIX)
			eTextureLodBiasTSgix = (GLenum)GL_TEXTURE_LOD_BIAS_T_SGIX,
		#endif
		#if defined(GL_TEXTURE_LUMINANCE_SIZE)
			eTextureLuminanceSize = (GLenum)GL_TEXTURE_LUMINANCE_SIZE,
		#endif
		#if defined(GL_TEXTURE_MAG_FILTER)
			eTextureMagFilter = (GLenum)GL_TEXTURE_MAG_FILTER,
		#endif
		#if defined(GL_TEXTURE_MAX_ANISOTROPY)
			eTextureMaxAnisotropy = (GLenum)GL_TEXTURE_MAX_ANISOTROPY,
		#endif
		#if defined(GL_TEXTURE_MAX_CLAMP_R_SGIX)
			eTextureMaxClampRSgix = (GLenum)GL_TEXTURE_MAX_CLAMP_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_MAX_CLAMP_S_SGIX)
			eTextureMaxClampSSgix = (GLenum)GL_TEXTURE_MAX_CLAMP_S_SGIX,
		#endif
		#if defined(GL_TEXTURE_MAX_CLAMP_T_SGIX)
			eTextureMaxClampTSgix = (GLenum)GL_TEXTURE_MAX_CLAMP_T_SGIX,
		#endif
		#if defined(GL_TEXTURE_MAX_LEVEL)
			eTextureMaxLevel = (GLenum)GL_TEXTURE_MAX_LEVEL,
		#endif
		#if defined(GL_TEXTURE_MAX_LEVEL_SGIS)
			eTextureMaxLevelSgis = (GLenum)GL_TEXTURE_MAX_LEVEL_SGIS,
		#endif
		#if defined(GL_TEXTURE_MAX_LOD)
			eTextureMaxLod = (GLenum)GL_TEXTURE_MAX_LOD,
		#endif
		#if defined(GL_TEXTURE_MAX_LOD_SGIS)
			eTextureMaxLodSgis = (GLenum)GL_TEXTURE_MAX_LOD_SGIS,
		#endif
		#if defined(GL_TEXTURE_MEMORY_LAYOUT_INTEL)
			eTextureMemoryLayoutIntel = (GLenum)GL_TEXTURE_MEMORY_LAYOUT_INTEL,
		#endif
		#if defined(GL_TEXTURE_MIN_FILTER)
			eTextureMinFilter = (GLenum)GL_TEXTURE_MIN_FILTER,
		#endif
		#if defined(GL_TEXTURE_MIN_LOD)
			eTextureMinLod = (GLenum)GL_TEXTURE_MIN_LOD,
		#endif
		#if defined(GL_TEXTURE_MIN_LOD_SGIS)
			eTextureMinLodSgis = (GLenum)GL_TEXTURE_MIN_LOD_SGIS,
		#endif
		#if defined(GL_TEXTURE_PRIORITY)
			eTexturePriority = (GLenum)GL_TEXTURE_PRIORITY,
		#endif
		#if defined(GL_TEXTURE_PRIORITY_EXT)
			eTexturePriorityExt = (GLenum)GL_TEXTURE_PRIORITY_EXT,
		#endif
		#if defined(GL_TEXTURE_RED_SIZE)
			eTextureRedSize = (GLenum)GL_TEXTURE_RED_SIZE,
		#endif
		#if defined(GL_TEXTURE_RESIDENT)
			eTextureResident = (GLenum)GL_TEXTURE_RESIDENT,
		#endif
		#if defined(GL_TEXTURE_SWIZZLE_A)
			eTextureSwizzleA = (GLenum)GL_TEXTURE_SWIZZLE_A,
		#endif
		#if defined(GL_TEXTURE_SWIZZLE_B)
			eTextureSwizzleB = (GLenum)GL_TEXTURE_SWIZZLE_B,
		#endif
		#if defined(GL_TEXTURE_SWIZZLE_G)
			eTextureSwizzleG = (GLenum)GL_TEXTURE_SWIZZLE_G,
		#endif
		#if defined(GL_TEXTURE_SWIZZLE_R)
			eTextureSwizzleR = (GLenum)GL_TEXTURE_SWIZZLE_R,
		#endif
		#if defined(GL_TEXTURE_SWIZZLE_RGBA)
			eTextureSwizzleRgba = (GLenum)GL_TEXTURE_SWIZZLE_RGBA,
		#endif
		#if defined(GL_TEXTURE_TILING_EXT)
			eTextureTilingExt = (GLenum)GL_TEXTURE_TILING_EXT,
		#endif
		#if defined(GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM)
			eTextureUnnormalizedCoordinatesArm = (GLenum)GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM,
		#endif
		#if defined(GL_TEXTURE_WIDTH)
			eTextureWidth = (GLenum)GL_TEXTURE_WIDTH,
		#endif
		#if defined(GL_TEXTURE_WRAP_Q_SGIS)
			eTextureWrapQSgis = (GLenum)GL_TEXTURE_WRAP_Q_SGIS,
		#endif
		#if defined(GL_TEXTURE_WRAP_R)
			eTextureWrapR = (GLenum)GL_TEXTURE_WRAP_R,
		#endif
		#if defined(GL_TEXTURE_WRAP_R_EXT)
			eTextureWrapRExt = (GLenum)GL_TEXTURE_WRAP_R_EXT,
		#endif
		#if defined(GL_TEXTURE_WRAP_R_OES)
			eTextureWrapROes = (GLenum)GL_TEXTURE_WRAP_R_OES,
		#endif
		#if defined(GL_TEXTURE_WRAP_S)
			eTextureWrapS = (GLenum)GL_TEXTURE_WRAP_S,
		#endif
		#if defined(GL_TEXTURE_WRAP_T)
			eTextureWrapT = (GLenum)GL_TEXTURE_WRAP_T,
		#endif
		#if defined(GL_TEXTURE_Y_DEGAMMA_QCOM)
			eTextureYDegammaQcom = (GLenum)GL_TEXTURE_Y_DEGAMMA_QCOM,
		#endif
	};

	enum class GetTextureParameter : GLenum {
		#if defined(GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS)
			eDetailTextureFuncPointsSgis = (GLenum)GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS,
		#endif
		#if defined(GL_DETAIL_TEXTURE_LEVEL_SGIS)
			eDetailTextureLevelSgis = (GLenum)GL_DETAIL_TEXTURE_LEVEL_SGIS,
		#endif
		#if defined(GL_DETAIL_TEXTURE_MODE_SGIS)
			eDetailTextureModeSgis = (GLenum)GL_DETAIL_TEXTURE_MODE_SGIS,
		#endif
		#if defined(GL_DUAL_TEXTURE_SELECT_SGIS)
			eDualTextureSelectSgis = (GLenum)GL_DUAL_TEXTURE_SELECT_SGIS,
		#endif
		#if defined(GL_GENERATE_MIPMAP_SGIS)
			eGenerateMipmapSgis = (GLenum)GL_GENERATE_MIPMAP_SGIS,
		#endif
		#if defined(GL_NORMAL_MAP)
			eNormalMap = (GLenum)GL_NORMAL_MAP,
		#endif
		#if defined(GL_NORMAL_MAP_ARB)
			eNormalMapArb = (GLenum)GL_NORMAL_MAP_ARB,
		#endif
		#if defined(GL_NORMAL_MAP_EXT)
			eNormalMapExt = (GLenum)GL_NORMAL_MAP_EXT,
		#endif
		#if defined(GL_NORMAL_MAP_NV)
			eNormalMapNv = (GLenum)GL_NORMAL_MAP_NV,
		#endif
		#if defined(GL_NORMAL_MAP_OES)
			eNormalMapOes = (GLenum)GL_NORMAL_MAP_OES,
		#endif
		#if defined(GL_POST_TEXTURE_FILTER_BIAS_SGIX)
			ePostTextureFilterBiasSgix = (GLenum)GL_POST_TEXTURE_FILTER_BIAS_SGIX,
		#endif
		#if defined(GL_POST_TEXTURE_FILTER_SCALE_SGIX)
			ePostTextureFilterScaleSgix = (GLenum)GL_POST_TEXTURE_FILTER_SCALE_SGIX,
		#endif
		#if defined(GL_QUAD_TEXTURE_SELECT_SGIS)
			eQuadTextureSelectSgis = (GLenum)GL_QUAD_TEXTURE_SELECT_SGIS,
		#endif
		#if defined(GL_REFLECTION_MAP)
			eReflectionMap = (GLenum)GL_REFLECTION_MAP,
		#endif
		#if defined(GL_REFLECTION_MAP_ARB)
			eReflectionMapArb = (GLenum)GL_REFLECTION_MAP_ARB,
		#endif
		#if defined(GL_REFLECTION_MAP_EXT)
			eReflectionMapExt = (GLenum)GL_REFLECTION_MAP_EXT,
		#endif
		#if defined(GL_REFLECTION_MAP_NV)
			eReflectionMapNv = (GLenum)GL_REFLECTION_MAP_NV,
		#endif
		#if defined(GL_REFLECTION_MAP_OES)
			eReflectionMapOes = (GLenum)GL_REFLECTION_MAP_OES,
		#endif
		#if defined(GL_SHADOW_AMBIENT_SGIX)
			eShadowAmbientSgix = (GLenum)GL_SHADOW_AMBIENT_SGIX,
		#endif
		#if defined(GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS)
			eSharpenTextureFuncPointsSgis = (GLenum)GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_EXT)
			eSurfaceCompressionExt = (GLenum)GL_SURFACE_COMPRESSION_EXT,
		#endif
		#if defined(GL_TEXTURE_4DSIZE_SGIS)
			eTexture4dsizeSgis = (GLenum)GL_TEXTURE_4DSIZE_SGIS,
		#endif
		#if defined(GL_TEXTURE_ALPHA_SIZE)
			eTextureAlphaSize = (GLenum)GL_TEXTURE_ALPHA_SIZE,
		#endif
		#if defined(GL_TEXTURE_BASE_LEVEL_SGIS)
			eTextureBaseLevelSgis = (GLenum)GL_TEXTURE_BASE_LEVEL_SGIS,
		#endif
		#if defined(GL_TEXTURE_BLUE_SIZE)
			eTextureBlueSize = (GLenum)GL_TEXTURE_BLUE_SIZE,
		#endif
		#if defined(GL_TEXTURE_BORDER)
			eTextureBorder = (GLenum)GL_TEXTURE_BORDER,
		#endif
		#if defined(GL_TEXTURE_BORDER_COLOR)
			eTextureBorderColor = (GLenum)GL_TEXTURE_BORDER_COLOR,
		#endif
		#if defined(GL_TEXTURE_BORDER_COLOR_NV)
			eTextureBorderColorNv = (GLenum)GL_TEXTURE_BORDER_COLOR_NV,
		#endif
		#if defined(GL_TEXTURE_CBCR_DEGAMMA_QCOM)
			eTextureCbcrDegammaQcom = (GLenum)GL_TEXTURE_CBCR_DEGAMMA_QCOM,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_CENTER_SGIX)
			eTextureClipmapCenterSgix = (GLenum)GL_TEXTURE_CLIPMAP_CENTER_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_DEPTH_SGIX)
			eTextureClipmapDepthSgix = (GLenum)GL_TEXTURE_CLIPMAP_DEPTH_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_FRAME_SGIX)
			eTextureClipmapFrameSgix = (GLenum)GL_TEXTURE_CLIPMAP_FRAME_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX)
			eTextureClipmapLodOffsetSgix = (GLenum)GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_OFFSET_SGIX)
			eTextureClipmapOffsetSgix = (GLenum)GL_TEXTURE_CLIPMAP_OFFSET_SGIX,
		#endif
		#if defined(GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX)
			eTextureClipmapVirtualDepthSgix = (GLenum)GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX,
		#endif
		#if defined(GL_TEXTURE_COMPARE_OPERATOR_SGIX)
			eTextureCompareOperatorSgix = (GLenum)GL_TEXTURE_COMPARE_OPERATOR_SGIX,
		#endif
		#if defined(GL_TEXTURE_COMPARE_SGIX)
			eTextureCompareSgix = (GLenum)GL_TEXTURE_COMPARE_SGIX,
		#endif
		#if defined(GL_TEXTURE_COMPONENTS)
			eTextureComponents = (GLenum)GL_TEXTURE_COMPONENTS,
		#endif
		#if defined(GL_TEXTURE_DEPTH_EXT)
			eTextureDepthExt = (GLenum)GL_TEXTURE_DEPTH_EXT,
		#endif
		#if defined(GL_TEXTURE_FILTER4_SIZE_SGIS)
			eTextureFilter4SizeSgis = (GLenum)GL_TEXTURE_FILTER4_SIZE_SGIS,
		#endif
		#if defined(GL_TEXTURE_GEQUAL_R_SGIX)
			eTextureGequalRSgix = (GLenum)GL_TEXTURE_GEQUAL_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_GREEN_SIZE)
			eTextureGreenSize = (GLenum)GL_TEXTURE_GREEN_SIZE,
		#endif
		#if defined(GL_TEXTURE_HEIGHT)
			eTextureHeight = (GLenum)GL_TEXTURE_HEIGHT,
		#endif
		#if defined(GL_TEXTURE_INTENSITY_SIZE)
			eTextureIntensitySize = (GLenum)GL_TEXTURE_INTENSITY_SIZE,
		#endif
		#if defined(GL_TEXTURE_INTERNAL_FORMAT)
			eTextureInternalFormat = (GLenum)GL_TEXTURE_INTERNAL_FORMAT,
		#endif
		#if defined(GL_TEXTURE_LEQUAL_R_SGIX)
			eTextureLequalRSgix = (GLenum)GL_TEXTURE_LEQUAL_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS_R_SGIX)
			eTextureLodBiasRSgix = (GLenum)GL_TEXTURE_LOD_BIAS_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS_S_SGIX)
			eTextureLodBiasSSgix = (GLenum)GL_TEXTURE_LOD_BIAS_S_SGIX,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS_T_SGIX)
			eTextureLodBiasTSgix = (GLenum)GL_TEXTURE_LOD_BIAS_T_SGIX,
		#endif
		#if defined(GL_TEXTURE_LUMINANCE_SIZE)
			eTextureLuminanceSize = (GLenum)GL_TEXTURE_LUMINANCE_SIZE,
		#endif
		#if defined(GL_TEXTURE_MAG_FILTER)
			eTextureMagFilter = (GLenum)GL_TEXTURE_MAG_FILTER,
		#endif
		#if defined(GL_TEXTURE_MAX_CLAMP_R_SGIX)
			eTextureMaxClampRSgix = (GLenum)GL_TEXTURE_MAX_CLAMP_R_SGIX,
		#endif
		#if defined(GL_TEXTURE_MAX_CLAMP_S_SGIX)
			eTextureMaxClampSSgix = (GLenum)GL_TEXTURE_MAX_CLAMP_S_SGIX,
		#endif
		#if defined(GL_TEXTURE_MAX_CLAMP_T_SGIX)
			eTextureMaxClampTSgix = (GLenum)GL_TEXTURE_MAX_CLAMP_T_SGIX,
		#endif
		#if defined(GL_TEXTURE_MAX_LEVEL_SGIS)
			eTextureMaxLevelSgis = (GLenum)GL_TEXTURE_MAX_LEVEL_SGIS,
		#endif
		#if defined(GL_TEXTURE_MAX_LOD_SGIS)
			eTextureMaxLodSgis = (GLenum)GL_TEXTURE_MAX_LOD_SGIS,
		#endif
		#if defined(GL_TEXTURE_MIN_FILTER)
			eTextureMinFilter = (GLenum)GL_TEXTURE_MIN_FILTER,
		#endif
		#if defined(GL_TEXTURE_MIN_LOD_SGIS)
			eTextureMinLodSgis = (GLenum)GL_TEXTURE_MIN_LOD_SGIS,
		#endif
		#if defined(GL_TEXTURE_PRIORITY)
			eTexturePriority = (GLenum)GL_TEXTURE_PRIORITY,
		#endif
		#if defined(GL_TEXTURE_RED_SIZE)
			eTextureRedSize = (GLenum)GL_TEXTURE_RED_SIZE,
		#endif
		#if defined(GL_TEXTURE_RESIDENT)
			eTextureResident = (GLenum)GL_TEXTURE_RESIDENT,
		#endif
		#if defined(GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM)
			eTextureUnnormalizedCoordinatesArm = (GLenum)GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM,
		#endif
		#if defined(GL_TEXTURE_WIDTH)
			eTextureWidth = (GLenum)GL_TEXTURE_WIDTH,
		#endif
		#if defined(GL_TEXTURE_WRAP_Q_SGIS)
			eTextureWrapQSgis = (GLenum)GL_TEXTURE_WRAP_Q_SGIS,
		#endif
		#if defined(GL_TEXTURE_WRAP_R_EXT)
			eTextureWrapRExt = (GLenum)GL_TEXTURE_WRAP_R_EXT,
		#endif
		#if defined(GL_TEXTURE_WRAP_S)
			eTextureWrapS = (GLenum)GL_TEXTURE_WRAP_S,
		#endif
		#if defined(GL_TEXTURE_WRAP_T)
			eTextureWrapT = (GLenum)GL_TEXTURE_WRAP_T,
		#endif
		#if defined(GL_TEXTURE_Y_DEGAMMA_QCOM)
			eTextureYDegammaQcom = (GLenum)GL_TEXTURE_Y_DEGAMMA_QCOM,
		#endif
	};

	enum class SamplerParameterF : GLenum {
		#if defined(GL_TEXTURE_BORDER_COLOR)
			eTextureBorderColor = (GLenum)GL_TEXTURE_BORDER_COLOR,
		#endif
		#if defined(GL_TEXTURE_LOD_BIAS)
			eTextureLodBias = (GLenum)GL_TEXTURE_LOD_BIAS,
		#endif
		#if defined(GL_TEXTURE_MAX_ANISOTROPY)
			eTextureMaxAnisotropy = (GLenum)GL_TEXTURE_MAX_ANISOTROPY,
		#endif
		#if defined(GL_TEXTURE_MAX_LOD)
			eTextureMaxLod = (GLenum)GL_TEXTURE_MAX_LOD,
		#endif
		#if defined(GL_TEXTURE_MIN_LOD)
			eTextureMinLod = (GLenum)GL_TEXTURE_MIN_LOD,
		#endif
		#if defined(GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM)
			eTextureUnnormalizedCoordinatesArm = (GLenum)GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM,
		#endif
	};

	enum class DebugSeverity : GLenum {
		#if defined(GL_DEBUG_SEVERITY_HIGH)
			eDebugSeverityHigh = (GLenum)GL_DEBUG_SEVERITY_HIGH,
		#endif
		#if defined(GL_DEBUG_SEVERITY_LOW)
			eDebugSeverityLow = (GLenum)GL_DEBUG_SEVERITY_LOW,
		#endif
		#if defined(GL_DEBUG_SEVERITY_MEDIUM)
			eDebugSeverityMedium = (GLenum)GL_DEBUG_SEVERITY_MEDIUM,
		#endif
		#if defined(GL_DEBUG_SEVERITY_NOTIFICATION)
			eDebugSeverityNotification = (GLenum)GL_DEBUG_SEVERITY_NOTIFICATION,
		#endif
		#if defined(GL_DONT_CARE)
			eDontCare = (GLenum)GL_DONT_CARE,
		#endif
	};

	enum class HintMode : GLenum {
		#if defined(GL_DONT_CARE)
			eDontCare = (GLenum)GL_DONT_CARE,
		#endif
		#if defined(GL_FASTEST)
			eFastest = (GLenum)GL_FASTEST,
		#endif
		#if defined(GL_NICEST)
			eNicest = (GLenum)GL_NICEST,
		#endif
	};

	enum class DebugSource : GLenum {
		#if defined(GL_DEBUG_SOURCE_API)
			eDebugSourceApi = (GLenum)GL_DEBUG_SOURCE_API,
		#endif
		#if defined(GL_DEBUG_SOURCE_APPLICATION)
			eDebugSourceApplication = (GLenum)GL_DEBUG_SOURCE_APPLICATION,
		#endif
		#if defined(GL_DEBUG_SOURCE_OTHER)
			eDebugSourceOther = (GLenum)GL_DEBUG_SOURCE_OTHER,
		#endif
		#if defined(GL_DEBUG_SOURCE_SHADER_COMPILER)
			eDebugSourceShaderCompiler = (GLenum)GL_DEBUG_SOURCE_SHADER_COMPILER,
		#endif
		#if defined(GL_DEBUG_SOURCE_THIRD_PARTY)
			eDebugSourceThirdParty = (GLenum)GL_DEBUG_SOURCE_THIRD_PARTY,
		#endif
		#if defined(GL_DEBUG_SOURCE_WINDOW_SYSTEM)
			eDebugSourceWindowSystem = (GLenum)GL_DEBUG_SOURCE_WINDOW_SYSTEM,
		#endif
		#if defined(GL_DONT_CARE)
			eDontCare = (GLenum)GL_DONT_CARE,
		#endif
	};

	enum class DebugType : GLenum {
		#if defined(GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR)
			eDebugTypeDeprecatedBehavior = (GLenum)GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR,
		#endif
		#if defined(GL_DEBUG_TYPE_ERROR)
			eDebugTypeError = (GLenum)GL_DEBUG_TYPE_ERROR,
		#endif
		#if defined(GL_DEBUG_TYPE_MARKER)
			eDebugTypeMarker = (GLenum)GL_DEBUG_TYPE_MARKER,
		#endif
		#if defined(GL_DEBUG_TYPE_OTHER)
			eDebugTypeOther = (GLenum)GL_DEBUG_TYPE_OTHER,
		#endif
		#if defined(GL_DEBUG_TYPE_PERFORMANCE)
			eDebugTypePerformance = (GLenum)GL_DEBUG_TYPE_PERFORMANCE,
		#endif
		#if defined(GL_DEBUG_TYPE_POP_GROUP)
			eDebugTypePopGroup = (GLenum)GL_DEBUG_TYPE_POP_GROUP,
		#endif
		#if defined(GL_DEBUG_TYPE_PORTABILITY)
			eDebugTypePortability = (GLenum)GL_DEBUG_TYPE_PORTABILITY,
		#endif
		#if defined(GL_DEBUG_TYPE_PUSH_GROUP)
			eDebugTypePushGroup = (GLenum)GL_DEBUG_TYPE_PUSH_GROUP,
		#endif
		#if defined(GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR)
			eDebugTypeUndefinedBehavior = (GLenum)GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR,
		#endif
		#if defined(GL_DONT_CARE)
			eDontCare = (GLenum)GL_DONT_CARE,
		#endif
	};

	enum class LightParameter : GLenum {
		#if defined(GL_AMBIENT)
			eAmbient = (GLenum)GL_AMBIENT,
		#endif
		#if defined(GL_CONSTANT_ATTENUATION)
			eConstantAttenuation = (GLenum)GL_CONSTANT_ATTENUATION,
		#endif
		#if defined(GL_DIFFUSE)
			eDiffuse = (GLenum)GL_DIFFUSE,
		#endif
		#if defined(GL_LINEAR_ATTENUATION)
			eLinearAttenuation = (GLenum)GL_LINEAR_ATTENUATION,
		#endif
		#if defined(GL_POSITION)
			ePosition = (GLenum)GL_POSITION,
		#endif
		#if defined(GL_QUADRATIC_ATTENUATION)
			eQuadraticAttenuation = (GLenum)GL_QUADRATIC_ATTENUATION,
		#endif
		#if defined(GL_SPECULAR)
			eSpecular = (GLenum)GL_SPECULAR,
		#endif
		#if defined(GL_SPOT_CUTOFF)
			eSpotCutoff = (GLenum)GL_SPOT_CUTOFF,
		#endif
		#if defined(GL_SPOT_DIRECTION)
			eSpotDirection = (GLenum)GL_SPOT_DIRECTION,
		#endif
		#if defined(GL_SPOT_EXPONENT)
			eSpotExponent = (GLenum)GL_SPOT_EXPONENT,
		#endif
	};

	enum class MaterialParameter : GLenum {
		#if defined(GL_AMBIENT)
			eAmbient = (GLenum)GL_AMBIENT,
		#endif
		#if defined(GL_AMBIENT_AND_DIFFUSE)
			eAmbientAndDiffuse = (GLenum)GL_AMBIENT_AND_DIFFUSE,
		#endif
		#if defined(GL_COLOR_INDEXES)
			eColorIndexes = (GLenum)GL_COLOR_INDEXES,
		#endif
		#if defined(GL_DIFFUSE)
			eDiffuse = (GLenum)GL_DIFFUSE,
		#endif
		#if defined(GL_EMISSION)
			eEmission = (GLenum)GL_EMISSION,
		#endif
		#if defined(GL_SHININESS)
			eShininess = (GLenum)GL_SHININESS,
		#endif
		#if defined(GL_SPECULAR)
			eSpecular = (GLenum)GL_SPECULAR,
		#endif
	};

	enum class FragmentLightParameterSGIX : GLenum {
		#if defined(GL_AMBIENT)
			eAmbient = (GLenum)GL_AMBIENT,
		#endif
		#if defined(GL_CONSTANT_ATTENUATION)
			eConstantAttenuation = (GLenum)GL_CONSTANT_ATTENUATION,
		#endif
		#if defined(GL_DIFFUSE)
			eDiffuse = (GLenum)GL_DIFFUSE,
		#endif
		#if defined(GL_LINEAR_ATTENUATION)
			eLinearAttenuation = (GLenum)GL_LINEAR_ATTENUATION,
		#endif
		#if defined(GL_POSITION)
			ePosition = (GLenum)GL_POSITION,
		#endif
		#if defined(GL_QUADRATIC_ATTENUATION)
			eQuadraticAttenuation = (GLenum)GL_QUADRATIC_ATTENUATION,
		#endif
		#if defined(GL_SPECULAR)
			eSpecular = (GLenum)GL_SPECULAR,
		#endif
		#if defined(GL_SPOT_CUTOFF)
			eSpotCutoff = (GLenum)GL_SPOT_CUTOFF,
		#endif
		#if defined(GL_SPOT_DIRECTION)
			eSpotDirection = (GLenum)GL_SPOT_DIRECTION,
		#endif
		#if defined(GL_SPOT_EXPONENT)
			eSpotExponent = (GLenum)GL_SPOT_EXPONENT,
		#endif
	};

	enum class ColorMaterialParameter : GLenum {
		#if defined(GL_AMBIENT)
			eAmbient = (GLenum)GL_AMBIENT,
		#endif
		#if defined(GL_AMBIENT_AND_DIFFUSE)
			eAmbientAndDiffuse = (GLenum)GL_AMBIENT_AND_DIFFUSE,
		#endif
		#if defined(GL_DIFFUSE)
			eDiffuse = (GLenum)GL_DIFFUSE,
		#endif
		#if defined(GL_EMISSION)
			eEmission = (GLenum)GL_EMISSION,
		#endif
		#if defined(GL_SPECULAR)
			eSpecular = (GLenum)GL_SPECULAR,
		#endif
	};

	enum class ListMode : GLenum {
		#if defined(GL_COMPILE)
			eCompile = (GLenum)GL_COMPILE,
		#endif
		#if defined(GL_COMPILE_AND_EXECUTE)
			eCompileAndExecute = (GLenum)GL_COMPILE_AND_EXECUTE,
		#endif
	};

	enum class VertexAttribIType : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class WeightPointerTypeARB : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class TangentPointerTypeEXT : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_DOUBLE_EXT)
			eDoubleExt = (GLenum)GL_DOUBLE_EXT,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class BinormalPointerTypeEXT : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_DOUBLE_EXT)
			eDoubleExt = (GLenum)GL_DOUBLE_EXT,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class ColorPointerType : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class ListNameType : GLenum {
		#if defined(GL_2_BYTES)
			e2Bytes = (GLenum)GL_2_BYTES,
		#endif
		#if defined(GL_3_BYTES)
			e3Bytes = (GLenum)GL_3_BYTES,
		#endif
		#if defined(GL_4_BYTES)
			e4Bytes = (GLenum)GL_4_BYTES,
		#endif
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class NormalPointerType : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class PixelType : GLenum {
		#if defined(GL_BITMAP)
			eBitmap = (GLenum)GL_BITMAP,
		#endif
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_FLOAT_32_UNSIGNED_INT_24_8_REV)
			eFloat32UnsignedInt248Rev = (GLenum)GL_FLOAT_32_UNSIGNED_INT_24_8_REV,
		#endif
		#if defined(GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV)
			eFloat32UnsignedInt248RevNv = (GLenum)GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV,
		#endif
		#if defined(GL_HALF_APPLE)
			eHalfApple = (GLenum)GL_HALF_APPLE,
		#endif
		#if defined(GL_HALF_FLOAT)
			eHalfFloat = (GLenum)GL_HALF_FLOAT,
		#endif
		#if defined(GL_HALF_FLOAT_ARB)
			eHalfFloatArb = (GLenum)GL_HALF_FLOAT_ARB,
		#endif
		#if defined(GL_HALF_FLOAT_NV)
			eHalfFloatNv = (GLenum)GL_HALF_FLOAT_NV,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_BYTE_2_3_3_REV)
			eUnsignedByte233Rev = (GLenum)GL_UNSIGNED_BYTE_2_3_3_REV,
		#endif
		#if defined(GL_UNSIGNED_BYTE_2_3_3_REV_EXT)
			eUnsignedByte233RevExt = (GLenum)GL_UNSIGNED_BYTE_2_3_3_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_BYTE_3_3_2)
			eUnsignedByte332 = (GLenum)GL_UNSIGNED_BYTE_3_3_2,
		#endif
		#if defined(GL_UNSIGNED_BYTE_3_3_2_EXT)
			eUnsignedByte332Ext = (GLenum)GL_UNSIGNED_BYTE_3_3_2_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_INT_10F_11F_11F_REV)
			eUnsignedInt10f11f11fRev = (GLenum)GL_UNSIGNED_INT_10F_11F_11F_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE)
			eUnsignedInt10f11f11fRevApple = (GLenum)GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE,
		#endif
		#if defined(GL_UNSIGNED_INT_10F_11F_11F_REV_EXT)
			eUnsignedInt10f11f11fRevExt = (GLenum)GL_UNSIGNED_INT_10F_11F_11F_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT_10_10_10_2)
			eUnsignedInt1010102 = (GLenum)GL_UNSIGNED_INT_10_10_10_2,
		#endif
		#if defined(GL_UNSIGNED_INT_10_10_10_2_EXT)
			eUnsignedInt1010102Ext = (GLenum)GL_UNSIGNED_INT_10_10_10_2_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT_24_8)
			eUnsignedInt248 = (GLenum)GL_UNSIGNED_INT_24_8,
		#endif
		#if defined(GL_UNSIGNED_INT_24_8_EXT)
			eUnsignedInt248Ext = (GLenum)GL_UNSIGNED_INT_24_8_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT_24_8_NV)
			eUnsignedInt248Nv = (GLenum)GL_UNSIGNED_INT_24_8_NV,
		#endif
		#if defined(GL_UNSIGNED_INT_24_8_OES)
			eUnsignedInt248Oes = (GLenum)GL_UNSIGNED_INT_24_8_OES,
		#endif
		#if defined(GL_UNSIGNED_INT_2_10_10_10_REV)
			eUnsignedInt2101010Rev = (GLenum)GL_UNSIGNED_INT_2_10_10_10_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_2_10_10_10_REV_EXT)
			eUnsignedInt2101010RevExt = (GLenum)GL_UNSIGNED_INT_2_10_10_10_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT_5_9_9_9_REV)
			eUnsignedInt5999Rev = (GLenum)GL_UNSIGNED_INT_5_9_9_9_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_5_9_9_9_REV_APPLE)
			eUnsignedInt5999RevApple = (GLenum)GL_UNSIGNED_INT_5_9_9_9_REV_APPLE,
		#endif
		#if defined(GL_UNSIGNED_INT_5_9_9_9_REV_EXT)
			eUnsignedInt5999RevExt = (GLenum)GL_UNSIGNED_INT_5_9_9_9_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT_8_8_8_8)
			eUnsignedInt8888 = (GLenum)GL_UNSIGNED_INT_8_8_8_8,
		#endif
		#if defined(GL_UNSIGNED_INT_8_8_8_8_EXT)
			eUnsignedInt8888Ext = (GLenum)GL_UNSIGNED_INT_8_8_8_8_EXT,
		#endif
		#if defined(GL_UNSIGNED_INT_8_8_8_8_REV)
			eUnsignedInt8888Rev = (GLenum)GL_UNSIGNED_INT_8_8_8_8_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_8_8_8_8_REV_EXT)
			eUnsignedInt8888RevExt = (GLenum)GL_UNSIGNED_INT_8_8_8_8_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
		#if defined(GL_UNSIGNED_SHORT_1_5_5_5_REV)
			eUnsignedShort1555Rev = (GLenum)GL_UNSIGNED_SHORT_1_5_5_5_REV,
		#endif
		#if defined(GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT)
			eUnsignedShort1555RevExt = (GLenum)GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT_4_4_4_4)
			eUnsignedShort4444 = (GLenum)GL_UNSIGNED_SHORT_4_4_4_4,
		#endif
		#if defined(GL_UNSIGNED_SHORT_4_4_4_4_EXT)
			eUnsignedShort4444Ext = (GLenum)GL_UNSIGNED_SHORT_4_4_4_4_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT_4_4_4_4_REV)
			eUnsignedShort4444Rev = (GLenum)GL_UNSIGNED_SHORT_4_4_4_4_REV,
		#endif
		#if defined(GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT)
			eUnsignedShort4444RevExt = (GLenum)GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG)
			eUnsignedShort4444RevImg = (GLenum)GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG,
		#endif
		#if defined(GL_UNSIGNED_SHORT_5_5_5_1)
			eUnsignedShort5551 = (GLenum)GL_UNSIGNED_SHORT_5_5_5_1,
		#endif
		#if defined(GL_UNSIGNED_SHORT_5_5_5_1_EXT)
			eUnsignedShort5551Ext = (GLenum)GL_UNSIGNED_SHORT_5_5_5_1_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT_5_6_5)
			eUnsignedShort565 = (GLenum)GL_UNSIGNED_SHORT_5_6_5,
		#endif
		#if defined(GL_UNSIGNED_SHORT_5_6_5_EXT)
			eUnsignedShort565Ext = (GLenum)GL_UNSIGNED_SHORT_5_6_5_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT_5_6_5_REV)
			eUnsignedShort565Rev = (GLenum)GL_UNSIGNED_SHORT_5_6_5_REV,
		#endif
		#if defined(GL_UNSIGNED_SHORT_5_6_5_REV_EXT)
			eUnsignedShort565RevExt = (GLenum)GL_UNSIGNED_SHORT_5_6_5_REV_EXT,
		#endif
	};

	enum class VertexAttribType : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FIXED)
			eFixed = (GLenum)GL_FIXED,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_HALF_FLOAT)
			eHalfFloat = (GLenum)GL_HALF_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_INT_2_10_10_10_REV)
			eInt2101010Rev = (GLenum)GL_INT_2_10_10_10_REV,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_INT_10F_11F_11F_REV)
			eUnsignedInt10f11f11fRev = (GLenum)GL_UNSIGNED_INT_10F_11F_11F_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_2_10_10_10_REV)
			eUnsignedInt2101010Rev = (GLenum)GL_UNSIGNED_INT_2_10_10_10_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_2_10_10_10_REV_EXT)
			eUnsignedInt2101010RevExt = (GLenum)GL_UNSIGNED_INT_2_10_10_10_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class VertexAttribPointerType : GLenum {
		#if defined(GL_BYTE)
			eByte = (GLenum)GL_BYTE,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FIXED)
			eFixed = (GLenum)GL_FIXED,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_HALF_FLOAT)
			eHalfFloat = (GLenum)GL_HALF_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_INT64_ARB)
			eInt64Arb = (GLenum)GL_INT64_ARB,
		#endif
		#if defined(GL_INT64_NV)
			eInt64Nv = (GLenum)GL_INT64_NV,
		#endif
		#if defined(GL_INT_2_10_10_10_REV)
			eInt2101010Rev = (GLenum)GL_INT_2_10_10_10_REV,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_INT64_ARB)
			eUnsignedInt64Arb = (GLenum)GL_UNSIGNED_INT64_ARB,
		#endif
		#if defined(GL_UNSIGNED_INT64_NV)
			eUnsignedInt64Nv = (GLenum)GL_UNSIGNED_INT64_NV,
		#endif
		#if defined(GL_UNSIGNED_INT_10F_11F_11F_REV)
			eUnsignedInt10f11f11fRev = (GLenum)GL_UNSIGNED_INT_10F_11F_11F_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_2_10_10_10_REV)
			eUnsignedInt2101010Rev = (GLenum)GL_UNSIGNED_INT_2_10_10_10_REV,
		#endif
		#if defined(GL_UNSIGNED_INT_2_10_10_10_REV_EXT)
			eUnsignedInt2101010RevExt = (GLenum)GL_UNSIGNED_INT_2_10_10_10_REV_EXT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class ScalarType : GLenum {
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class ReplacementCodeTypeSUN : GLenum {
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class ElementPointerTypeATI : GLenum {
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class MatrixIndexPointerTypeARB : GLenum {
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class DrawElementsType : GLenum {
		#if defined(GL_UNSIGNED_BYTE)
			eUnsignedByte = (GLenum)GL_UNSIGNED_BYTE,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
	};

	enum class SecondaryColorPointerTypeIBM : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class IndexPointerType : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class TexCoordPointerType : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class VertexPointerType : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_SHORT)
			eShort = (GLenum)GL_SHORT,
		#endif
	};

	enum class PixelFormat : GLenum {
		#if defined(GL_ABGR_EXT)
			eAbgrExt = (GLenum)GL_ABGR_EXT,
		#endif
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_BGR)
			eBgr = (GLenum)GL_BGR,
		#endif
		#if defined(GL_BGRA)
			eBgra = (GLenum)GL_BGRA,
		#endif
		#if defined(GL_BGRA_EXT)
			eBgraExt = (GLenum)GL_BGRA_EXT,
		#endif
		#if defined(GL_BGRA_IMG)
			eBgraImg = (GLenum)GL_BGRA_IMG,
		#endif
		#if defined(GL_BGRA_INTEGER)
			eBgraInteger = (GLenum)GL_BGRA_INTEGER,
		#endif
		#if defined(GL_BGR_EXT)
			eBgrExt = (GLenum)GL_BGR_EXT,
		#endif
		#if defined(GL_BGR_INTEGER)
			eBgrInteger = (GLenum)GL_BGR_INTEGER,
		#endif
		#if defined(GL_BLUE)
			eBlue = (GLenum)GL_BLUE,
		#endif
		#if defined(GL_BLUE_INTEGER)
			eBlueInteger = (GLenum)GL_BLUE_INTEGER,
		#endif
		#if defined(GL_CMYKA_EXT)
			eCmykaExt = (GLenum)GL_CMYKA_EXT,
		#endif
		#if defined(GL_CMYK_EXT)
			eCmykExt = (GLenum)GL_CMYK_EXT,
		#endif
		#if defined(GL_COLOR_INDEX)
			eColorIndex = (GLenum)GL_COLOR_INDEX,
		#endif
		#if defined(GL_DEPTH_COMPONENT)
			eDepthComponent = (GLenum)GL_DEPTH_COMPONENT,
		#endif
		#if defined(GL_DEPTH_STENCIL)
			eDepthStencil = (GLenum)GL_DEPTH_STENCIL,
		#endif
		#if defined(GL_GREEN)
			eGreen = (GLenum)GL_GREEN,
		#endif
		#if defined(GL_GREEN_INTEGER)
			eGreenInteger = (GLenum)GL_GREEN_INTEGER,
		#endif
		#if defined(GL_LUMINANCE)
			eLuminance = (GLenum)GL_LUMINANCE,
		#endif
		#if defined(GL_LUMINANCE_ALPHA)
			eLuminanceAlpha = (GLenum)GL_LUMINANCE_ALPHA,
		#endif
		#if defined(GL_RED)
			eRed = (GLenum)GL_RED,
		#endif
		#if defined(GL_RED_EXT)
			eRedExt = (GLenum)GL_RED_EXT,
		#endif
		#if defined(GL_RED_INTEGER)
			eRedInteger = (GLenum)GL_RED_INTEGER,
		#endif
		#if defined(GL_RG)
			eRg = (GLenum)GL_RG,
		#endif
		#if defined(GL_RGB)
			eRgb = (GLenum)GL_RGB,
		#endif
		#if defined(GL_RGBA)
			eRgba = (GLenum)GL_RGBA,
		#endif
		#if defined(GL_RGBA_INTEGER)
			eRgbaInteger = (GLenum)GL_RGBA_INTEGER,
		#endif
		#if defined(GL_RGB_INTEGER)
			eRgbInteger = (GLenum)GL_RGB_INTEGER,
		#endif
		#if defined(GL_RG_INTEGER)
			eRgInteger = (GLenum)GL_RG_INTEGER,
		#endif
		#if defined(GL_STENCIL_INDEX)
			eStencilIndex = (GLenum)GL_STENCIL_INDEX,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_SHORT)
			eUnsignedShort = (GLenum)GL_UNSIGNED_SHORT,
		#endif
		#if defined(GL_YCRCB_422_SGIX)
			eYcrcb422Sgix = (GLenum)GL_YCRCB_422_SGIX,
		#endif
		#if defined(GL_YCRCB_444_SGIX)
			eYcrcb444Sgix = (GLenum)GL_YCRCB_444_SGIX,
		#endif
	};

	enum class AttributeType : GLenum {
		#if defined(GL_BOOL)
			eBool = (GLenum)GL_BOOL,
		#endif
		#if defined(GL_BOOL_ARB)
			eBoolArb = (GLenum)GL_BOOL_ARB,
		#endif
		#if defined(GL_BOOL_VEC2)
			eBoolVec2 = (GLenum)GL_BOOL_VEC2,
		#endif
		#if defined(GL_BOOL_VEC2_ARB)
			eBoolVec2Arb = (GLenum)GL_BOOL_VEC2_ARB,
		#endif
		#if defined(GL_BOOL_VEC3)
			eBoolVec3 = (GLenum)GL_BOOL_VEC3,
		#endif
		#if defined(GL_BOOL_VEC3_ARB)
			eBoolVec3Arb = (GLenum)GL_BOOL_VEC3_ARB,
		#endif
		#if defined(GL_BOOL_VEC4)
			eBoolVec4 = (GLenum)GL_BOOL_VEC4,
		#endif
		#if defined(GL_BOOL_VEC4_ARB)
			eBoolVec4Arb = (GLenum)GL_BOOL_VEC4_ARB,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_DOUBLE_MAT2)
			eDoubleMat2 = (GLenum)GL_DOUBLE_MAT2,
		#endif
		#if defined(GL_DOUBLE_MAT2x3)
			eDoubleMat2x3 = (GLenum)GL_DOUBLE_MAT2x3,
		#endif
		#if defined(GL_DOUBLE_MAT2x4)
			eDoubleMat2x4 = (GLenum)GL_DOUBLE_MAT2x4,
		#endif
		#if defined(GL_DOUBLE_MAT3)
			eDoubleMat3 = (GLenum)GL_DOUBLE_MAT3,
		#endif
		#if defined(GL_DOUBLE_MAT3x2)
			eDoubleMat3x2 = (GLenum)GL_DOUBLE_MAT3x2,
		#endif
		#if defined(GL_DOUBLE_MAT3x4)
			eDoubleMat3x4 = (GLenum)GL_DOUBLE_MAT3x4,
		#endif
		#if defined(GL_DOUBLE_MAT4)
			eDoubleMat4 = (GLenum)GL_DOUBLE_MAT4,
		#endif
		#if defined(GL_DOUBLE_MAT4x2)
			eDoubleMat4x2 = (GLenum)GL_DOUBLE_MAT4x2,
		#endif
		#if defined(GL_DOUBLE_MAT4x3)
			eDoubleMat4x3 = (GLenum)GL_DOUBLE_MAT4x3,
		#endif
		#if defined(GL_DOUBLE_VEC2)
			eDoubleVec2 = (GLenum)GL_DOUBLE_VEC2,
		#endif
		#if defined(GL_DOUBLE_VEC3)
			eDoubleVec3 = (GLenum)GL_DOUBLE_VEC3,
		#endif
		#if defined(GL_DOUBLE_VEC4)
			eDoubleVec4 = (GLenum)GL_DOUBLE_VEC4,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_FLOAT_MAT2)
			eFloatMat2 = (GLenum)GL_FLOAT_MAT2,
		#endif
		#if defined(GL_FLOAT_MAT2_ARB)
			eFloatMat2Arb = (GLenum)GL_FLOAT_MAT2_ARB,
		#endif
		#if defined(GL_FLOAT_MAT2x3)
			eFloatMat2x3 = (GLenum)GL_FLOAT_MAT2x3,
		#endif
		#if defined(GL_FLOAT_MAT2x3_NV)
			eFloatMat2x3Nv = (GLenum)GL_FLOAT_MAT2x3_NV,
		#endif
		#if defined(GL_FLOAT_MAT2x4)
			eFloatMat2x4 = (GLenum)GL_FLOAT_MAT2x4,
		#endif
		#if defined(GL_FLOAT_MAT2x4_NV)
			eFloatMat2x4Nv = (GLenum)GL_FLOAT_MAT2x4_NV,
		#endif
		#if defined(GL_FLOAT_MAT3)
			eFloatMat3 = (GLenum)GL_FLOAT_MAT3,
		#endif
		#if defined(GL_FLOAT_MAT3_ARB)
			eFloatMat3Arb = (GLenum)GL_FLOAT_MAT3_ARB,
		#endif
		#if defined(GL_FLOAT_MAT3x2)
			eFloatMat3x2 = (GLenum)GL_FLOAT_MAT3x2,
		#endif
		#if defined(GL_FLOAT_MAT3x2_NV)
			eFloatMat3x2Nv = (GLenum)GL_FLOAT_MAT3x2_NV,
		#endif
		#if defined(GL_FLOAT_MAT3x4)
			eFloatMat3x4 = (GLenum)GL_FLOAT_MAT3x4,
		#endif
		#if defined(GL_FLOAT_MAT3x4_NV)
			eFloatMat3x4Nv = (GLenum)GL_FLOAT_MAT3x4_NV,
		#endif
		#if defined(GL_FLOAT_MAT4)
			eFloatMat4 = (GLenum)GL_FLOAT_MAT4,
		#endif
		#if defined(GL_FLOAT_MAT4_ARB)
			eFloatMat4Arb = (GLenum)GL_FLOAT_MAT4_ARB,
		#endif
		#if defined(GL_FLOAT_MAT4x2)
			eFloatMat4x2 = (GLenum)GL_FLOAT_MAT4x2,
		#endif
		#if defined(GL_FLOAT_MAT4x2_NV)
			eFloatMat4x2Nv = (GLenum)GL_FLOAT_MAT4x2_NV,
		#endif
		#if defined(GL_FLOAT_MAT4x3)
			eFloatMat4x3 = (GLenum)GL_FLOAT_MAT4x3,
		#endif
		#if defined(GL_FLOAT_MAT4x3_NV)
			eFloatMat4x3Nv = (GLenum)GL_FLOAT_MAT4x3_NV,
		#endif
		#if defined(GL_FLOAT_VEC2)
			eFloatVec2 = (GLenum)GL_FLOAT_VEC2,
		#endif
		#if defined(GL_FLOAT_VEC2_ARB)
			eFloatVec2Arb = (GLenum)GL_FLOAT_VEC2_ARB,
		#endif
		#if defined(GL_FLOAT_VEC3)
			eFloatVec3 = (GLenum)GL_FLOAT_VEC3,
		#endif
		#if defined(GL_FLOAT_VEC3_ARB)
			eFloatVec3Arb = (GLenum)GL_FLOAT_VEC3_ARB,
		#endif
		#if defined(GL_FLOAT_VEC4)
			eFloatVec4 = (GLenum)GL_FLOAT_VEC4,
		#endif
		#if defined(GL_FLOAT_VEC4_ARB)
			eFloatVec4Arb = (GLenum)GL_FLOAT_VEC4_ARB,
		#endif
		#if defined(GL_IMAGE_1D)
			eImage1d = (GLenum)GL_IMAGE_1D,
		#endif
		#if defined(GL_IMAGE_1D_ARRAY)
			eImage1dArray = (GLenum)GL_IMAGE_1D_ARRAY,
		#endif
		#if defined(GL_IMAGE_2D)
			eImage2d = (GLenum)GL_IMAGE_2D,
		#endif
		#if defined(GL_IMAGE_2D_ARRAY)
			eImage2dArray = (GLenum)GL_IMAGE_2D_ARRAY,
		#endif
		#if defined(GL_IMAGE_2D_MULTISAMPLE)
			eImage2dMultisample = (GLenum)GL_IMAGE_2D_MULTISAMPLE,
		#endif
		#if defined(GL_IMAGE_2D_MULTISAMPLE_ARRAY)
			eImage2dMultisampleArray = (GLenum)GL_IMAGE_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_IMAGE_2D_RECT)
			eImage2dRect = (GLenum)GL_IMAGE_2D_RECT,
		#endif
		#if defined(GL_IMAGE_3D)
			eImage3d = (GLenum)GL_IMAGE_3D,
		#endif
		#if defined(GL_IMAGE_BUFFER)
			eImageBuffer = (GLenum)GL_IMAGE_BUFFER,
		#endif
		#if defined(GL_IMAGE_CUBE)
			eImageCube = (GLenum)GL_IMAGE_CUBE,
		#endif
		#if defined(GL_IMAGE_CUBE_MAP_ARRAY)
			eImageCubeMapArray = (GLenum)GL_IMAGE_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_INT64_ARB)
			eInt64Arb = (GLenum)GL_INT64_ARB,
		#endif
		#if defined(GL_INT64_NV)
			eInt64Nv = (GLenum)GL_INT64_NV,
		#endif
		#if defined(GL_INT64_VEC2_ARB)
			eInt64Vec2Arb = (GLenum)GL_INT64_VEC2_ARB,
		#endif
		#if defined(GL_INT64_VEC3_ARB)
			eInt64Vec3Arb = (GLenum)GL_INT64_VEC3_ARB,
		#endif
		#if defined(GL_INT64_VEC4_ARB)
			eInt64Vec4Arb = (GLenum)GL_INT64_VEC4_ARB,
		#endif
		#if defined(GL_INT_IMAGE_1D)
			eIntImage1d = (GLenum)GL_INT_IMAGE_1D,
		#endif
		#if defined(GL_INT_IMAGE_1D_ARRAY)
			eIntImage1dArray = (GLenum)GL_INT_IMAGE_1D_ARRAY,
		#endif
		#if defined(GL_INT_IMAGE_2D)
			eIntImage2d = (GLenum)GL_INT_IMAGE_2D,
		#endif
		#if defined(GL_INT_IMAGE_2D_ARRAY)
			eIntImage2dArray = (GLenum)GL_INT_IMAGE_2D_ARRAY,
		#endif
		#if defined(GL_INT_IMAGE_2D_MULTISAMPLE)
			eIntImage2dMultisample = (GLenum)GL_INT_IMAGE_2D_MULTISAMPLE,
		#endif
		#if defined(GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY)
			eIntImage2dMultisampleArray = (GLenum)GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_INT_IMAGE_2D_RECT)
			eIntImage2dRect = (GLenum)GL_INT_IMAGE_2D_RECT,
		#endif
		#if defined(GL_INT_IMAGE_3D)
			eIntImage3d = (GLenum)GL_INT_IMAGE_3D,
		#endif
		#if defined(GL_INT_IMAGE_BUFFER)
			eIntImageBuffer = (GLenum)GL_INT_IMAGE_BUFFER,
		#endif
		#if defined(GL_INT_IMAGE_CUBE)
			eIntImageCube = (GLenum)GL_INT_IMAGE_CUBE,
		#endif
		#if defined(GL_INT_IMAGE_CUBE_MAP_ARRAY)
			eIntImageCubeMapArray = (GLenum)GL_INT_IMAGE_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_1D)
			eIntSampler1d = (GLenum)GL_INT_SAMPLER_1D,
		#endif
		#if defined(GL_INT_SAMPLER_1D_ARRAY)
			eIntSampler1dArray = (GLenum)GL_INT_SAMPLER_1D_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_2D)
			eIntSampler2d = (GLenum)GL_INT_SAMPLER_2D,
		#endif
		#if defined(GL_INT_SAMPLER_2D_ARRAY)
			eIntSampler2dArray = (GLenum)GL_INT_SAMPLER_2D_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_2D_MULTISAMPLE)
			eIntSampler2dMultisample = (GLenum)GL_INT_SAMPLER_2D_MULTISAMPLE,
		#endif
		#if defined(GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)
			eIntSampler2dMultisampleArray = (GLenum)GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_2D_RECT)
			eIntSampler2dRect = (GLenum)GL_INT_SAMPLER_2D_RECT,
		#endif
		#if defined(GL_INT_SAMPLER_3D)
			eIntSampler3d = (GLenum)GL_INT_SAMPLER_3D,
		#endif
		#if defined(GL_INT_SAMPLER_BUFFER)
			eIntSamplerBuffer = (GLenum)GL_INT_SAMPLER_BUFFER,
		#endif
		#if defined(GL_INT_SAMPLER_CUBE)
			eIntSamplerCube = (GLenum)GL_INT_SAMPLER_CUBE,
		#endif
		#if defined(GL_INT_SAMPLER_CUBE_MAP_ARRAY)
			eIntSamplerCubeMapArray = (GLenum)GL_INT_SAMPLER_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_INT_VEC2)
			eIntVec2 = (GLenum)GL_INT_VEC2,
		#endif
		#if defined(GL_INT_VEC2_ARB)
			eIntVec2Arb = (GLenum)GL_INT_VEC2_ARB,
		#endif
		#if defined(GL_INT_VEC3)
			eIntVec3 = (GLenum)GL_INT_VEC3,
		#endif
		#if defined(GL_INT_VEC3_ARB)
			eIntVec3Arb = (GLenum)GL_INT_VEC3_ARB,
		#endif
		#if defined(GL_INT_VEC4)
			eIntVec4 = (GLenum)GL_INT_VEC4,
		#endif
		#if defined(GL_INT_VEC4_ARB)
			eIntVec4Arb = (GLenum)GL_INT_VEC4_ARB,
		#endif
		#if defined(GL_SAMPLER_1D)
			eSampler1d = (GLenum)GL_SAMPLER_1D,
		#endif
		#if defined(GL_SAMPLER_1D_ARB)
			eSampler1dArb = (GLenum)GL_SAMPLER_1D_ARB,
		#endif
		#if defined(GL_SAMPLER_1D_ARRAY_SHADOW)
			eSampler1dArrayShadow = (GLenum)GL_SAMPLER_1D_ARRAY_SHADOW,
		#endif
		#if defined(GL_SAMPLER_1D_SHADOW)
			eSampler1dShadow = (GLenum)GL_SAMPLER_1D_SHADOW,
		#endif
		#if defined(GL_SAMPLER_1D_SHADOW_ARB)
			eSampler1dShadowArb = (GLenum)GL_SAMPLER_1D_SHADOW_ARB,
		#endif
		#if defined(GL_SAMPLER_2D)
			eSampler2d = (GLenum)GL_SAMPLER_2D,
		#endif
		#if defined(GL_SAMPLER_2D_ARB)
			eSampler2dArb = (GLenum)GL_SAMPLER_2D_ARB,
		#endif
		#if defined(GL_SAMPLER_2D_ARRAY_SHADOW)
			eSampler2dArrayShadow = (GLenum)GL_SAMPLER_2D_ARRAY_SHADOW,
		#endif
		#if defined(GL_SAMPLER_2D_MULTISAMPLE)
			eSampler2dMultisample = (GLenum)GL_SAMPLER_2D_MULTISAMPLE,
		#endif
		#if defined(GL_SAMPLER_2D_MULTISAMPLE_ARRAY)
			eSampler2dMultisampleArray = (GLenum)GL_SAMPLER_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_SAMPLER_2D_RECT)
			eSampler2dRect = (GLenum)GL_SAMPLER_2D_RECT,
		#endif
		#if defined(GL_SAMPLER_2D_RECT_ARB)
			eSampler2dRectArb = (GLenum)GL_SAMPLER_2D_RECT_ARB,
		#endif
		#if defined(GL_SAMPLER_2D_RECT_SHADOW)
			eSampler2dRectShadow = (GLenum)GL_SAMPLER_2D_RECT_SHADOW,
		#endif
		#if defined(GL_SAMPLER_2D_RECT_SHADOW_ARB)
			eSampler2dRectShadowArb = (GLenum)GL_SAMPLER_2D_RECT_SHADOW_ARB,
		#endif
		#if defined(GL_SAMPLER_2D_SHADOW)
			eSampler2dShadow = (GLenum)GL_SAMPLER_2D_SHADOW,
		#endif
		#if defined(GL_SAMPLER_2D_SHADOW_ARB)
			eSampler2dShadowArb = (GLenum)GL_SAMPLER_2D_SHADOW_ARB,
		#endif
		#if defined(GL_SAMPLER_2D_SHADOW_EXT)
			eSampler2dShadowExt = (GLenum)GL_SAMPLER_2D_SHADOW_EXT,
		#endif
		#if defined(GL_SAMPLER_3D)
			eSampler3d = (GLenum)GL_SAMPLER_3D,
		#endif
		#if defined(GL_SAMPLER_3D_ARB)
			eSampler3dArb = (GLenum)GL_SAMPLER_3D_ARB,
		#endif
		#if defined(GL_SAMPLER_3D_OES)
			eSampler3dOes = (GLenum)GL_SAMPLER_3D_OES,
		#endif
		#if defined(GL_SAMPLER_BUFFER)
			eSamplerBuffer = (GLenum)GL_SAMPLER_BUFFER,
		#endif
		#if defined(GL_SAMPLER_CUBE)
			eSamplerCube = (GLenum)GL_SAMPLER_CUBE,
		#endif
		#if defined(GL_SAMPLER_CUBE_ARB)
			eSamplerCubeArb = (GLenum)GL_SAMPLER_CUBE_ARB,
		#endif
		#if defined(GL_SAMPLER_CUBE_MAP_ARRAY)
			eSamplerCubeMapArray = (GLenum)GL_SAMPLER_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW)
			eSamplerCubeMapArrayShadow = (GLenum)GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW,
		#endif
		#if defined(GL_SAMPLER_CUBE_SHADOW)
			eSamplerCubeShadow = (GLenum)GL_SAMPLER_CUBE_SHADOW,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_INT64_ARB)
			eUnsignedInt64Arb = (GLenum)GL_UNSIGNED_INT64_ARB,
		#endif
		#if defined(GL_UNSIGNED_INT64_NV)
			eUnsignedInt64Nv = (GLenum)GL_UNSIGNED_INT64_NV,
		#endif
		#if defined(GL_UNSIGNED_INT64_VEC2_ARB)
			eUnsignedInt64Vec2Arb = (GLenum)GL_UNSIGNED_INT64_VEC2_ARB,
		#endif
		#if defined(GL_UNSIGNED_INT64_VEC3_ARB)
			eUnsignedInt64Vec3Arb = (GLenum)GL_UNSIGNED_INT64_VEC3_ARB,
		#endif
		#if defined(GL_UNSIGNED_INT64_VEC4_ARB)
			eUnsignedInt64Vec4Arb = (GLenum)GL_UNSIGNED_INT64_VEC4_ARB,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_1D)
			eUnsignedIntImage1d = (GLenum)GL_UNSIGNED_INT_IMAGE_1D,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_1D_ARRAY)
			eUnsignedIntImage1dArray = (GLenum)GL_UNSIGNED_INT_IMAGE_1D_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_2D)
			eUnsignedIntImage2d = (GLenum)GL_UNSIGNED_INT_IMAGE_2D,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_2D_ARRAY)
			eUnsignedIntImage2dArray = (GLenum)GL_UNSIGNED_INT_IMAGE_2D_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE)
			eUnsignedIntImage2dMultisample = (GLenum)GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY)
			eUnsignedIntImage2dMultisampleArray = (GLenum)GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_2D_RECT)
			eUnsignedIntImage2dRect = (GLenum)GL_UNSIGNED_INT_IMAGE_2D_RECT,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_3D)
			eUnsignedIntImage3d = (GLenum)GL_UNSIGNED_INT_IMAGE_3D,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_BUFFER)
			eUnsignedIntImageBuffer = (GLenum)GL_UNSIGNED_INT_IMAGE_BUFFER,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_CUBE)
			eUnsignedIntImageCube = (GLenum)GL_UNSIGNED_INT_IMAGE_CUBE,
		#endif
		#if defined(GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY)
			eUnsignedIntImageCubeMapArray = (GLenum)GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_1D)
			eUnsignedIntSampler1d = (GLenum)GL_UNSIGNED_INT_SAMPLER_1D,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY)
			eUnsignedIntSampler1dArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_1D_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D)
			eUnsignedIntSampler2d = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY)
			eUnsignedIntSampler2dArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE)
			eUnsignedIntSampler2dMultisample = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)
			eUnsignedIntSampler2dMultisampleArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_RECT)
			eUnsignedIntSampler2dRect = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_RECT,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_3D)
			eUnsignedIntSampler3d = (GLenum)GL_UNSIGNED_INT_SAMPLER_3D,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_BUFFER)
			eUnsignedIntSamplerBuffer = (GLenum)GL_UNSIGNED_INT_SAMPLER_BUFFER,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_CUBE)
			eUnsignedIntSamplerCube = (GLenum)GL_UNSIGNED_INT_SAMPLER_CUBE,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY)
			eUnsignedIntSamplerCubeMapArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_VEC2)
			eUnsignedIntVec2 = (GLenum)GL_UNSIGNED_INT_VEC2,
		#endif
		#if defined(GL_UNSIGNED_INT_VEC3)
			eUnsignedIntVec3 = (GLenum)GL_UNSIGNED_INT_VEC3,
		#endif
		#if defined(GL_UNSIGNED_INT_VEC4)
			eUnsignedIntVec4 = (GLenum)GL_UNSIGNED_INT_VEC4,
		#endif
	};

	enum class UniformType : GLenum {
		#if defined(GL_BOOL)
			eBool = (GLenum)GL_BOOL,
		#endif
		#if defined(GL_BOOL_VEC2)
			eBoolVec2 = (GLenum)GL_BOOL_VEC2,
		#endif
		#if defined(GL_BOOL_VEC3)
			eBoolVec3 = (GLenum)GL_BOOL_VEC3,
		#endif
		#if defined(GL_BOOL_VEC4)
			eBoolVec4 = (GLenum)GL_BOOL_VEC4,
		#endif
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_DOUBLE_MAT2)
			eDoubleMat2 = (GLenum)GL_DOUBLE_MAT2,
		#endif
		#if defined(GL_DOUBLE_MAT2x3)
			eDoubleMat2x3 = (GLenum)GL_DOUBLE_MAT2x3,
		#endif
		#if defined(GL_DOUBLE_MAT2x4)
			eDoubleMat2x4 = (GLenum)GL_DOUBLE_MAT2x4,
		#endif
		#if defined(GL_DOUBLE_MAT3)
			eDoubleMat3 = (GLenum)GL_DOUBLE_MAT3,
		#endif
		#if defined(GL_DOUBLE_MAT3x2)
			eDoubleMat3x2 = (GLenum)GL_DOUBLE_MAT3x2,
		#endif
		#if defined(GL_DOUBLE_MAT3x4)
			eDoubleMat3x4 = (GLenum)GL_DOUBLE_MAT3x4,
		#endif
		#if defined(GL_DOUBLE_MAT4)
			eDoubleMat4 = (GLenum)GL_DOUBLE_MAT4,
		#endif
		#if defined(GL_DOUBLE_MAT4x2)
			eDoubleMat4x2 = (GLenum)GL_DOUBLE_MAT4x2,
		#endif
		#if defined(GL_DOUBLE_MAT4x3)
			eDoubleMat4x3 = (GLenum)GL_DOUBLE_MAT4x3,
		#endif
		#if defined(GL_DOUBLE_VEC2)
			eDoubleVec2 = (GLenum)GL_DOUBLE_VEC2,
		#endif
		#if defined(GL_DOUBLE_VEC3)
			eDoubleVec3 = (GLenum)GL_DOUBLE_VEC3,
		#endif
		#if defined(GL_DOUBLE_VEC4)
			eDoubleVec4 = (GLenum)GL_DOUBLE_VEC4,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
		#if defined(GL_FLOAT_MAT2)
			eFloatMat2 = (GLenum)GL_FLOAT_MAT2,
		#endif
		#if defined(GL_FLOAT_MAT2x3)
			eFloatMat2x3 = (GLenum)GL_FLOAT_MAT2x3,
		#endif
		#if defined(GL_FLOAT_MAT2x4)
			eFloatMat2x4 = (GLenum)GL_FLOAT_MAT2x4,
		#endif
		#if defined(GL_FLOAT_MAT3)
			eFloatMat3 = (GLenum)GL_FLOAT_MAT3,
		#endif
		#if defined(GL_FLOAT_MAT3x2)
			eFloatMat3x2 = (GLenum)GL_FLOAT_MAT3x2,
		#endif
		#if defined(GL_FLOAT_MAT3x4)
			eFloatMat3x4 = (GLenum)GL_FLOAT_MAT3x4,
		#endif
		#if defined(GL_FLOAT_MAT4)
			eFloatMat4 = (GLenum)GL_FLOAT_MAT4,
		#endif
		#if defined(GL_FLOAT_MAT4x2)
			eFloatMat4x2 = (GLenum)GL_FLOAT_MAT4x2,
		#endif
		#if defined(GL_FLOAT_MAT4x3)
			eFloatMat4x3 = (GLenum)GL_FLOAT_MAT4x3,
		#endif
		#if defined(GL_FLOAT_VEC2)
			eFloatVec2 = (GLenum)GL_FLOAT_VEC2,
		#endif
		#if defined(GL_FLOAT_VEC3)
			eFloatVec3 = (GLenum)GL_FLOAT_VEC3,
		#endif
		#if defined(GL_FLOAT_VEC4)
			eFloatVec4 = (GLenum)GL_FLOAT_VEC4,
		#endif
		#if defined(GL_INT)
			eInt = (GLenum)GL_INT,
		#endif
		#if defined(GL_INT_SAMPLER_1D)
			eIntSampler1d = (GLenum)GL_INT_SAMPLER_1D,
		#endif
		#if defined(GL_INT_SAMPLER_1D_ARRAY)
			eIntSampler1dArray = (GLenum)GL_INT_SAMPLER_1D_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_2D)
			eIntSampler2d = (GLenum)GL_INT_SAMPLER_2D,
		#endif
		#if defined(GL_INT_SAMPLER_2D_ARRAY)
			eIntSampler2dArray = (GLenum)GL_INT_SAMPLER_2D_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_2D_MULTISAMPLE)
			eIntSampler2dMultisample = (GLenum)GL_INT_SAMPLER_2D_MULTISAMPLE,
		#endif
		#if defined(GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)
			eIntSampler2dMultisampleArray = (GLenum)GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_INT_SAMPLER_2D_RECT)
			eIntSampler2dRect = (GLenum)GL_INT_SAMPLER_2D_RECT,
		#endif
		#if defined(GL_INT_SAMPLER_3D)
			eIntSampler3d = (GLenum)GL_INT_SAMPLER_3D,
		#endif
		#if defined(GL_INT_SAMPLER_BUFFER)
			eIntSamplerBuffer = (GLenum)GL_INT_SAMPLER_BUFFER,
		#endif
		#if defined(GL_INT_SAMPLER_CUBE)
			eIntSamplerCube = (GLenum)GL_INT_SAMPLER_CUBE,
		#endif
		#if defined(GL_INT_SAMPLER_CUBE_MAP_ARRAY)
			eIntSamplerCubeMapArray = (GLenum)GL_INT_SAMPLER_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_INT_VEC2)
			eIntVec2 = (GLenum)GL_INT_VEC2,
		#endif
		#if defined(GL_INT_VEC3)
			eIntVec3 = (GLenum)GL_INT_VEC3,
		#endif
		#if defined(GL_INT_VEC4)
			eIntVec4 = (GLenum)GL_INT_VEC4,
		#endif
		#if defined(GL_SAMPLER_1D)
			eSampler1d = (GLenum)GL_SAMPLER_1D,
		#endif
		#if defined(GL_SAMPLER_1D_ARRAY)
			eSampler1dArray = (GLenum)GL_SAMPLER_1D_ARRAY,
		#endif
		#if defined(GL_SAMPLER_1D_ARRAY_SHADOW)
			eSampler1dArrayShadow = (GLenum)GL_SAMPLER_1D_ARRAY_SHADOW,
		#endif
		#if defined(GL_SAMPLER_1D_SHADOW)
			eSampler1dShadow = (GLenum)GL_SAMPLER_1D_SHADOW,
		#endif
		#if defined(GL_SAMPLER_2D)
			eSampler2d = (GLenum)GL_SAMPLER_2D,
		#endif
		#if defined(GL_SAMPLER_2D_ARRAY)
			eSampler2dArray = (GLenum)GL_SAMPLER_2D_ARRAY,
		#endif
		#if defined(GL_SAMPLER_2D_ARRAY_SHADOW)
			eSampler2dArrayShadow = (GLenum)GL_SAMPLER_2D_ARRAY_SHADOW,
		#endif
		#if defined(GL_SAMPLER_2D_MULTISAMPLE)
			eSampler2dMultisample = (GLenum)GL_SAMPLER_2D_MULTISAMPLE,
		#endif
		#if defined(GL_SAMPLER_2D_MULTISAMPLE_ARRAY)
			eSampler2dMultisampleArray = (GLenum)GL_SAMPLER_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_SAMPLER_2D_RECT)
			eSampler2dRect = (GLenum)GL_SAMPLER_2D_RECT,
		#endif
		#if defined(GL_SAMPLER_2D_RECT_SHADOW)
			eSampler2dRectShadow = (GLenum)GL_SAMPLER_2D_RECT_SHADOW,
		#endif
		#if defined(GL_SAMPLER_2D_SHADOW)
			eSampler2dShadow = (GLenum)GL_SAMPLER_2D_SHADOW,
		#endif
		#if defined(GL_SAMPLER_3D)
			eSampler3d = (GLenum)GL_SAMPLER_3D,
		#endif
		#if defined(GL_SAMPLER_BUFFER)
			eSamplerBuffer = (GLenum)GL_SAMPLER_BUFFER,
		#endif
		#if defined(GL_SAMPLER_CUBE)
			eSamplerCube = (GLenum)GL_SAMPLER_CUBE,
		#endif
		#if defined(GL_SAMPLER_CUBE_MAP_ARRAY)
			eSamplerCubeMapArray = (GLenum)GL_SAMPLER_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW)
			eSamplerCubeMapArrayShadow = (GLenum)GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW,
		#endif
		#if defined(GL_SAMPLER_CUBE_SHADOW)
			eSamplerCubeShadow = (GLenum)GL_SAMPLER_CUBE_SHADOW,
		#endif
		#if defined(GL_UNSIGNED_INT)
			eUnsignedInt = (GLenum)GL_UNSIGNED_INT,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_1D)
			eUnsignedIntSampler1d = (GLenum)GL_UNSIGNED_INT_SAMPLER_1D,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY)
			eUnsignedIntSampler1dArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_1D_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D)
			eUnsignedIntSampler2d = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY)
			eUnsignedIntSampler2dArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE)
			eUnsignedIntSampler2dMultisample = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)
			eUnsignedIntSampler2dMultisampleArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_2D_RECT)
			eUnsignedIntSampler2dRect = (GLenum)GL_UNSIGNED_INT_SAMPLER_2D_RECT,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_3D)
			eUnsignedIntSampler3d = (GLenum)GL_UNSIGNED_INT_SAMPLER_3D,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_BUFFER)
			eUnsignedIntSamplerBuffer = (GLenum)GL_UNSIGNED_INT_SAMPLER_BUFFER,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_CUBE)
			eUnsignedIntSamplerCube = (GLenum)GL_UNSIGNED_INT_SAMPLER_CUBE,
		#endif
		#if defined(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY)
			eUnsignedIntSamplerCubeMapArray = (GLenum)GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY,
		#endif
		#if defined(GL_UNSIGNED_INT_VEC2)
			eUnsignedIntVec2 = (GLenum)GL_UNSIGNED_INT_VEC2,
		#endif
		#if defined(GL_UNSIGNED_INT_VEC3)
			eUnsignedIntVec3 = (GLenum)GL_UNSIGNED_INT_VEC3,
		#endif
		#if defined(GL_UNSIGNED_INT_VEC4)
			eUnsignedIntVec4 = (GLenum)GL_UNSIGNED_INT_VEC4,
		#endif
	};

	enum class MapTypeNV : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
	};

	enum class VertexWeightPointerTypeEXT : GLenum {
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
	};

	enum class FogCoordinatePointerType : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
	};

	enum class FogPointerTypeEXT : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
	};

	enum class FogPointerTypeIBM : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
		#if defined(GL_FLOAT)
			eFloat = (GLenum)GL_FLOAT,
		#endif
	};

	enum class VertexAttribLType : GLenum {
		#if defined(GL_DOUBLE)
			eDouble = (GLenum)GL_DOUBLE,
		#endif
	};

	enum class LogicOp : GLenum {
		#if defined(GL_AND)
			eAnd = (GLenum)GL_AND,
		#endif
		#if defined(GL_AND_INVERTED)
			eAndInverted = (GLenum)GL_AND_INVERTED,
		#endif
		#if defined(GL_AND_REVERSE)
			eAndReverse = (GLenum)GL_AND_REVERSE,
		#endif
		#if defined(GL_CLEAR)
			eClear = (GLenum)GL_CLEAR,
		#endif
		#if defined(GL_COPY)
			eCopy = (GLenum)GL_COPY,
		#endif
		#if defined(GL_COPY_INVERTED)
			eCopyInverted = (GLenum)GL_COPY_INVERTED,
		#endif
		#if defined(GL_EQUIV)
			eEquiv = (GLenum)GL_EQUIV,
		#endif
		#if defined(GL_INVERT)
			eInvert = (GLenum)GL_INVERT,
		#endif
		#if defined(GL_NAND)
			eNand = (GLenum)GL_NAND,
		#endif
		#if defined(GL_NOOP)
			eNoop = (GLenum)GL_NOOP,
		#endif
		#if defined(GL_NOR)
			eNor = (GLenum)GL_NOR,
		#endif
		#if defined(GL_OR)
			eOr = (GLenum)GL_OR,
		#endif
		#if defined(GL_OR_INVERTED)
			eOrInverted = (GLenum)GL_OR_INVERTED,
		#endif
		#if defined(GL_OR_REVERSE)
			eOrReverse = (GLenum)GL_OR_REVERSE,
		#endif
		#if defined(GL_SET)
			eSet = (GLenum)GL_SET,
		#endif
		#if defined(GL_XOR)
			eXor = (GLenum)GL_XOR,
		#endif
	};

	enum class PathFillMode : GLenum {
		#if defined(GL_COUNT_DOWN_NV)
			eCountDownNv = (GLenum)GL_COUNT_DOWN_NV,
		#endif
		#if defined(GL_COUNT_UP_NV)
			eCountUpNv = (GLenum)GL_COUNT_UP_NV,
		#endif
		#if defined(GL_INVERT)
			eInvert = (GLenum)GL_INVERT,
		#endif
		#if defined(GL_PATH_FILL_MODE_NV)
			ePathFillModeNv = (GLenum)GL_PATH_FILL_MODE_NV,
		#endif
	};

	enum class MatrixMode : GLenum {
		#if defined(GL_MODELVIEW)
			eModelview = (GLenum)GL_MODELVIEW,
		#endif
		#if defined(GL_MODELVIEW0_EXT)
			eModelview0Ext = (GLenum)GL_MODELVIEW0_EXT,
		#endif
		#if defined(GL_PROJECTION)
			eProjection = (GLenum)GL_PROJECTION,
		#endif
		#if defined(GL_TEXTURE)
			eTexture = (GLenum)GL_TEXTURE,
		#endif
	};

	enum class ObjectIdentifier : GLenum {
		#if defined(GL_BUFFER)
			eBuffer = (GLenum)GL_BUFFER,
		#endif
		#if defined(GL_FRAMEBUFFER)
			eFramebuffer = (GLenum)GL_FRAMEBUFFER,
		#endif
		#if defined(GL_PROGRAM)
			eProgram = (GLenum)GL_PROGRAM,
		#endif
		#if defined(GL_PROGRAM_PIPELINE)
			eProgramPipeline = (GLenum)GL_PROGRAM_PIPELINE,
		#endif
		#if defined(GL_QUERY)
			eQuery = (GLenum)GL_QUERY,
		#endif
		#if defined(GL_RENDERBUFFER)
			eRenderbuffer = (GLenum)GL_RENDERBUFFER,
		#endif
		#if defined(GL_SAMPLER)
			eSampler = (GLenum)GL_SAMPLER,
		#endif
		#if defined(GL_SHADER)
			eShader = (GLenum)GL_SHADER,
		#endif
		#if defined(GL_TEXTURE)
			eTexture = (GLenum)GL_TEXTURE,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK)
			eTransformFeedback = (GLenum)GL_TRANSFORM_FEEDBACK,
		#endif
		#if defined(GL_VERTEX_ARRAY)
			eVertexArray = (GLenum)GL_VERTEX_ARRAY,
		#endif
	};

	enum class Buffer : GLenum {
		#if defined(GL_COLOR)
			eColor = (GLenum)GL_COLOR,
		#endif
		#if defined(GL_DEPTH)
			eDepth = (GLenum)GL_DEPTH,
		#endif
		#if defined(GL_STENCIL)
			eStencil = (GLenum)GL_STENCIL,
		#endif
	};

	enum class PixelCopyType : GLenum {
		#if defined(GL_COLOR)
			eColor = (GLenum)GL_COLOR,
		#endif
		#if defined(GL_COLOR_EXT)
			eColorExt = (GLenum)GL_COLOR_EXT,
		#endif
		#if defined(GL_DEPTH)
			eDepth = (GLenum)GL_DEPTH,
		#endif
		#if defined(GL_DEPTH_EXT)
			eDepthExt = (GLenum)GL_DEPTH_EXT,
		#endif
		#if defined(GL_STENCIL)
			eStencil = (GLenum)GL_STENCIL,
		#endif
		#if defined(GL_STENCIL_EXT)
			eStencilExt = (GLenum)GL_STENCIL_EXT,
		#endif
	};

	enum class InvalidateFramebufferAttachment : GLenum {
		#if defined(GL_COLOR)
			eColor = (GLenum)GL_COLOR,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0)
			eColorAttachment0 = (GLenum)GL_COLOR_ATTACHMENT0,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0_EXT)
			eColorAttachment0Ext = (GLenum)GL_COLOR_ATTACHMENT0_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0_NV)
			eColorAttachment0Nv = (GLenum)GL_COLOR_ATTACHMENT0_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT0_OES)
			eColorAttachment0Oes = (GLenum)GL_COLOR_ATTACHMENT0_OES,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1)
			eColorAttachment1 = (GLenum)GL_COLOR_ATTACHMENT1,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10)
			eColorAttachment10 = (GLenum)GL_COLOR_ATTACHMENT10,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10_EXT)
			eColorAttachment10Ext = (GLenum)GL_COLOR_ATTACHMENT10_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10_NV)
			eColorAttachment10Nv = (GLenum)GL_COLOR_ATTACHMENT10_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11)
			eColorAttachment11 = (GLenum)GL_COLOR_ATTACHMENT11,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11_EXT)
			eColorAttachment11Ext = (GLenum)GL_COLOR_ATTACHMENT11_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11_NV)
			eColorAttachment11Nv = (GLenum)GL_COLOR_ATTACHMENT11_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12)
			eColorAttachment12 = (GLenum)GL_COLOR_ATTACHMENT12,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12_EXT)
			eColorAttachment12Ext = (GLenum)GL_COLOR_ATTACHMENT12_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12_NV)
			eColorAttachment12Nv = (GLenum)GL_COLOR_ATTACHMENT12_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13)
			eColorAttachment13 = (GLenum)GL_COLOR_ATTACHMENT13,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13_EXT)
			eColorAttachment13Ext = (GLenum)GL_COLOR_ATTACHMENT13_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13_NV)
			eColorAttachment13Nv = (GLenum)GL_COLOR_ATTACHMENT13_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14)
			eColorAttachment14 = (GLenum)GL_COLOR_ATTACHMENT14,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14_EXT)
			eColorAttachment14Ext = (GLenum)GL_COLOR_ATTACHMENT14_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14_NV)
			eColorAttachment14Nv = (GLenum)GL_COLOR_ATTACHMENT14_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15)
			eColorAttachment15 = (GLenum)GL_COLOR_ATTACHMENT15,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15_EXT)
			eColorAttachment15Ext = (GLenum)GL_COLOR_ATTACHMENT15_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15_NV)
			eColorAttachment15Nv = (GLenum)GL_COLOR_ATTACHMENT15_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT16)
			eColorAttachment16 = (GLenum)GL_COLOR_ATTACHMENT16,
		#endif
		#if defined(GL_COLOR_ATTACHMENT17)
			eColorAttachment17 = (GLenum)GL_COLOR_ATTACHMENT17,
		#endif
		#if defined(GL_COLOR_ATTACHMENT18)
			eColorAttachment18 = (GLenum)GL_COLOR_ATTACHMENT18,
		#endif
		#if defined(GL_COLOR_ATTACHMENT19)
			eColorAttachment19 = (GLenum)GL_COLOR_ATTACHMENT19,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1_EXT)
			eColorAttachment1Ext = (GLenum)GL_COLOR_ATTACHMENT1_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1_NV)
			eColorAttachment1Nv = (GLenum)GL_COLOR_ATTACHMENT1_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2)
			eColorAttachment2 = (GLenum)GL_COLOR_ATTACHMENT2,
		#endif
		#if defined(GL_COLOR_ATTACHMENT20)
			eColorAttachment20 = (GLenum)GL_COLOR_ATTACHMENT20,
		#endif
		#if defined(GL_COLOR_ATTACHMENT21)
			eColorAttachment21 = (GLenum)GL_COLOR_ATTACHMENT21,
		#endif
		#if defined(GL_COLOR_ATTACHMENT22)
			eColorAttachment22 = (GLenum)GL_COLOR_ATTACHMENT22,
		#endif
		#if defined(GL_COLOR_ATTACHMENT23)
			eColorAttachment23 = (GLenum)GL_COLOR_ATTACHMENT23,
		#endif
		#if defined(GL_COLOR_ATTACHMENT24)
			eColorAttachment24 = (GLenum)GL_COLOR_ATTACHMENT24,
		#endif
		#if defined(GL_COLOR_ATTACHMENT25)
			eColorAttachment25 = (GLenum)GL_COLOR_ATTACHMENT25,
		#endif
		#if defined(GL_COLOR_ATTACHMENT26)
			eColorAttachment26 = (GLenum)GL_COLOR_ATTACHMENT26,
		#endif
		#if defined(GL_COLOR_ATTACHMENT27)
			eColorAttachment27 = (GLenum)GL_COLOR_ATTACHMENT27,
		#endif
		#if defined(GL_COLOR_ATTACHMENT28)
			eColorAttachment28 = (GLenum)GL_COLOR_ATTACHMENT28,
		#endif
		#if defined(GL_COLOR_ATTACHMENT29)
			eColorAttachment29 = (GLenum)GL_COLOR_ATTACHMENT29,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2_EXT)
			eColorAttachment2Ext = (GLenum)GL_COLOR_ATTACHMENT2_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2_NV)
			eColorAttachment2Nv = (GLenum)GL_COLOR_ATTACHMENT2_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3)
			eColorAttachment3 = (GLenum)GL_COLOR_ATTACHMENT3,
		#endif
		#if defined(GL_COLOR_ATTACHMENT30)
			eColorAttachment30 = (GLenum)GL_COLOR_ATTACHMENT30,
		#endif
		#if defined(GL_COLOR_ATTACHMENT31)
			eColorAttachment31 = (GLenum)GL_COLOR_ATTACHMENT31,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3_EXT)
			eColorAttachment3Ext = (GLenum)GL_COLOR_ATTACHMENT3_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3_NV)
			eColorAttachment3Nv = (GLenum)GL_COLOR_ATTACHMENT3_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4)
			eColorAttachment4 = (GLenum)GL_COLOR_ATTACHMENT4,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4_EXT)
			eColorAttachment4Ext = (GLenum)GL_COLOR_ATTACHMENT4_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4_NV)
			eColorAttachment4Nv = (GLenum)GL_COLOR_ATTACHMENT4_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5)
			eColorAttachment5 = (GLenum)GL_COLOR_ATTACHMENT5,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5_EXT)
			eColorAttachment5Ext = (GLenum)GL_COLOR_ATTACHMENT5_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5_NV)
			eColorAttachment5Nv = (GLenum)GL_COLOR_ATTACHMENT5_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6)
			eColorAttachment6 = (GLenum)GL_COLOR_ATTACHMENT6,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6_EXT)
			eColorAttachment6Ext = (GLenum)GL_COLOR_ATTACHMENT6_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6_NV)
			eColorAttachment6Nv = (GLenum)GL_COLOR_ATTACHMENT6_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7)
			eColorAttachment7 = (GLenum)GL_COLOR_ATTACHMENT7,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7_EXT)
			eColorAttachment7Ext = (GLenum)GL_COLOR_ATTACHMENT7_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7_NV)
			eColorAttachment7Nv = (GLenum)GL_COLOR_ATTACHMENT7_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8)
			eColorAttachment8 = (GLenum)GL_COLOR_ATTACHMENT8,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8_EXT)
			eColorAttachment8Ext = (GLenum)GL_COLOR_ATTACHMENT8_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8_NV)
			eColorAttachment8Nv = (GLenum)GL_COLOR_ATTACHMENT8_NV,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9)
			eColorAttachment9 = (GLenum)GL_COLOR_ATTACHMENT9,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9_EXT)
			eColorAttachment9Ext = (GLenum)GL_COLOR_ATTACHMENT9_EXT,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9_NV)
			eColorAttachment9Nv = (GLenum)GL_COLOR_ATTACHMENT9_NV,
		#endif
		#if defined(GL_DEPTH)
			eDepth = (GLenum)GL_DEPTH,
		#endif
		#if defined(GL_DEPTH_ATTACHMENT)
			eDepthAttachment = (GLenum)GL_DEPTH_ATTACHMENT,
		#endif
		#if defined(GL_DEPTH_ATTACHMENT_EXT)
			eDepthAttachmentExt = (GLenum)GL_DEPTH_ATTACHMENT_EXT,
		#endif
		#if defined(GL_DEPTH_ATTACHMENT_OES)
			eDepthAttachmentOes = (GLenum)GL_DEPTH_ATTACHMENT_OES,
		#endif
		#if defined(GL_DEPTH_STENCIL_ATTACHMENT)
			eDepthStencilAttachment = (GLenum)GL_DEPTH_STENCIL_ATTACHMENT,
		#endif
		#if defined(GL_STENCIL)
			eStencil = (GLenum)GL_STENCIL,
		#endif
		#if defined(GL_STENCIL_ATTACHMENT_EXT)
			eStencilAttachmentExt = (GLenum)GL_STENCIL_ATTACHMENT_EXT,
		#endif
		#if defined(GL_STENCIL_ATTACHMENT_OES)
			eStencilAttachmentOes = (GLenum)GL_STENCIL_ATTACHMENT_OES,
		#endif
	};

	enum class InternalFormat : GLenum {
		#if defined(GL_ALPHA12)
			eAlpha12 = (GLenum)GL_ALPHA12,
		#endif
		#if defined(GL_ALPHA12_EXT)
			eAlpha12Ext = (GLenum)GL_ALPHA12_EXT,
		#endif
		#if defined(GL_ALPHA16)
			eAlpha16 = (GLenum)GL_ALPHA16,
		#endif
		#if defined(GL_ALPHA16I_EXT)
			eAlpha16iExt = (GLenum)GL_ALPHA16I_EXT,
		#endif
		#if defined(GL_ALPHA16UI_EXT)
			eAlpha16uiExt = (GLenum)GL_ALPHA16UI_EXT,
		#endif
		#if defined(GL_ALPHA16_EXT)
			eAlpha16Ext = (GLenum)GL_ALPHA16_EXT,
		#endif
		#if defined(GL_ALPHA32I_EXT)
			eAlpha32iExt = (GLenum)GL_ALPHA32I_EXT,
		#endif
		#if defined(GL_ALPHA32UI_EXT)
			eAlpha32uiExt = (GLenum)GL_ALPHA32UI_EXT,
		#endif
		#if defined(GL_ALPHA4)
			eAlpha4 = (GLenum)GL_ALPHA4,
		#endif
		#if defined(GL_ALPHA4_EXT)
			eAlpha4Ext = (GLenum)GL_ALPHA4_EXT,
		#endif
		#if defined(GL_ALPHA8)
			eAlpha8 = (GLenum)GL_ALPHA8,
		#endif
		#if defined(GL_ALPHA8I_EXT)
			eAlpha8iExt = (GLenum)GL_ALPHA8I_EXT,
		#endif
		#if defined(GL_ALPHA8UI_EXT)
			eAlpha8uiExt = (GLenum)GL_ALPHA8UI_EXT,
		#endif
		#if defined(GL_ALPHA8_EXT)
			eAlpha8Ext = (GLenum)GL_ALPHA8_EXT,
		#endif
		#if defined(GL_ALPHA8_OES)
			eAlpha8Oes = (GLenum)GL_ALPHA8_OES,
		#endif
		#if defined(GL_COMPRESSED_R11_EAC)
			eCompressedR11Eac = (GLenum)GL_COMPRESSED_R11_EAC,
		#endif
		#if defined(GL_COMPRESSED_R11_EAC_OES)
			eCompressedR11EacOes = (GLenum)GL_COMPRESSED_R11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_RED)
			eCompressedRed = (GLenum)GL_COMPRESSED_RED,
		#endif
		#if defined(GL_COMPRESSED_RED_GREEN_RGTC2_EXT)
			eCompressedRedGreenRgtc2Ext = (GLenum)GL_COMPRESSED_RED_GREEN_RGTC2_EXT,
		#endif
		#if defined(GL_COMPRESSED_RED_RGTC1)
			eCompressedRedRgtc1 = (GLenum)GL_COMPRESSED_RED_RGTC1,
		#endif
		#if defined(GL_COMPRESSED_RED_RGTC1_EXT)
			eCompressedRedRgtc1Ext = (GLenum)GL_COMPRESSED_RED_RGTC1_EXT,
		#endif
		#if defined(GL_COMPRESSED_RG)
			eCompressedRg = (GLenum)GL_COMPRESSED_RG,
		#endif
		#if defined(GL_COMPRESSED_RG11_EAC)
			eCompressedRg11Eac = (GLenum)GL_COMPRESSED_RG11_EAC,
		#endif
		#if defined(GL_COMPRESSED_RG11_EAC_OES)
			eCompressedRg11EacOes = (GLenum)GL_COMPRESSED_RG11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_RGB)
			eCompressedRgb = (GLenum)GL_COMPRESSED_RGB,
		#endif
		#if defined(GL_COMPRESSED_RGB8_ETC2)
			eCompressedRgb8Etc2 = (GLenum)GL_COMPRESSED_RGB8_ETC2,
		#endif
		#if defined(GL_COMPRESSED_RGB8_ETC2_OES)
			eCompressedRgb8Etc2Oes = (GLenum)GL_COMPRESSED_RGB8_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2)
			eCompressedRgb8PunchthroughAlpha1Etc2 = (GLenum)GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2,
		#endif
		#if defined(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES)
			eCompressedRgb8PunchthroughAlpha1Etc2Oes = (GLenum)GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA)
			eCompressedRgba = (GLenum)GL_COMPRESSED_RGBA,
		#endif
		#if defined(GL_COMPRESSED_RGBA8_ETC2_EAC)
			eCompressedRgba8Etc2Eac = (GLenum)GL_COMPRESSED_RGBA8_ETC2_EAC,
		#endif
		#if defined(GL_COMPRESSED_RGBA8_ETC2_EAC_OES)
			eCompressedRgba8Etc2EacOes = (GLenum)GL_COMPRESSED_RGBA8_ETC2_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x10)
			eCompressedRgbaAstc10x10 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x10,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x10_KHR)
			eCompressedRgbaAstc10x10Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x5)
			eCompressedRgbaAstc10x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x5_KHR)
			eCompressedRgbaAstc10x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x6)
			eCompressedRgbaAstc10x6 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x6,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x6_KHR)
			eCompressedRgbaAstc10x6Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x8)
			eCompressedRgbaAstc10x8 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x8,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x8_KHR)
			eCompressedRgbaAstc10x8Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x10)
			eCompressedRgbaAstc12x10 = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x10,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x10_KHR)
			eCompressedRgbaAstc12x10Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x12)
			eCompressedRgbaAstc12x12 = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x12,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x12_KHR)
			eCompressedRgbaAstc12x12Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x12_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_3x3x3_OES)
			eCompressedRgbaAstc3x3x3Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_3x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x3x3_OES)
			eCompressedRgbaAstc4x3x3Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4)
			eCompressedRgbaAstc4x4 = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4_KHR)
			eCompressedRgbaAstc4x4Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4x3_OES)
			eCompressedRgbaAstc4x4x3Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4x3_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4x4_OES)
			eCompressedRgbaAstc4x4x4Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x4)
			eCompressedRgbaAstc5x4 = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x4,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x4_KHR)
			eCompressedRgbaAstc5x4Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x4x4_OES)
			eCompressedRgbaAstc5x4x4Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5)
			eCompressedRgbaAstc5x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5_KHR)
			eCompressedRgbaAstc5x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5x4_OES)
			eCompressedRgbaAstc5x5x4Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5x4_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5x5_OES)
			eCompressedRgbaAstc5x5x5Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x5)
			eCompressedRgbaAstc6x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x5_KHR)
			eCompressedRgbaAstc6x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x5x5_OES)
			eCompressedRgbaAstc6x5x5Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6)
			eCompressedRgbaAstc6x6 = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6_KHR)
			eCompressedRgbaAstc6x6Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6x5_OES)
			eCompressedRgbaAstc6x6x5Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6x5_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6x6_OES)
			eCompressedRgbaAstc6x6x6Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6x6_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x5)
			eCompressedRgbaAstc8x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x5_KHR)
			eCompressedRgbaAstc8x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x6)
			eCompressedRgbaAstc8x6 = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x6,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x6_KHR)
			eCompressedRgbaAstc8x6Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x8)
			eCompressedRgbaAstc8x8 = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x8,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x8_KHR)
			eCompressedRgbaAstc8x8Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_BPTC_UNORM)
			eCompressedRgbaBptcUnorm = (GLenum)GL_COMPRESSED_RGBA_BPTC_UNORM,
		#endif
		#if defined(GL_COMPRESSED_RGBA_BPTC_UNORM_ARB)
			eCompressedRgbaBptcUnormArb = (GLenum)GL_COMPRESSED_RGBA_BPTC_UNORM_ARB,
		#endif
		#if defined(GL_COMPRESSED_RGBA_BPTC_UNORM_EXT)
			eCompressedRgbaBptcUnormExt = (GLenum)GL_COMPRESSED_RGBA_BPTC_UNORM_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT1_EXT)
			eCompressedRgbaS3tcDxt1Ext = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE)
			eCompressedRgbaS3tcDxt3Angle = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT3_EXT)
			eCompressedRgbaS3tcDxt3Ext = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT3_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE)
			eCompressedRgbaS3tcDxt5Angle = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT5_EXT)
			eCompressedRgbaS3tcDxt5Ext = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT5_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT)
			eCompressedRgbBptcSignedFloat = (GLenum)GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB)
			eCompressedRgbBptcSignedFloatArb = (GLenum)GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT)
			eCompressedRgbBptcSignedFloatExt = (GLenum)GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT)
			eCompressedRgbBptcUnsignedFloat = (GLenum)GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB)
			eCompressedRgbBptcUnsignedFloatArb = (GLenum)GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT)
			eCompressedRgbBptcUnsignedFloatExt = (GLenum)GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGB_S3TC_DXT1_EXT)
			eCompressedRgbS3tcDxt1Ext = (GLenum)GL_COMPRESSED_RGB_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_RG_RGTC2)
			eCompressedRgRgtc2 = (GLenum)GL_COMPRESSED_RG_RGTC2,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_R11_EAC)
			eCompressedSignedR11Eac = (GLenum)GL_COMPRESSED_SIGNED_R11_EAC,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_R11_EAC_OES)
			eCompressedSignedR11EacOes = (GLenum)GL_COMPRESSED_SIGNED_R11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT)
			eCompressedSignedRedGreenRgtc2Ext = (GLenum)GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RED_RGTC1)
			eCompressedSignedRedRgtc1 = (GLenum)GL_COMPRESSED_SIGNED_RED_RGTC1,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RED_RGTC1_EXT)
			eCompressedSignedRedRgtc1Ext = (GLenum)GL_COMPRESSED_SIGNED_RED_RGTC1_EXT,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RG11_EAC)
			eCompressedSignedRg11Eac = (GLenum)GL_COMPRESSED_SIGNED_RG11_EAC,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RG11_EAC_OES)
			eCompressedSignedRg11EacOes = (GLenum)GL_COMPRESSED_SIGNED_RG11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RG_RGTC2)
			eCompressedSignedRgRgtc2 = (GLenum)GL_COMPRESSED_SIGNED_RG_RGTC2,
		#endif
		#if defined(GL_COMPRESSED_SRGB)
			eCompressedSrgb = (GLenum)GL_COMPRESSED_SRGB,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10)
			eCompressedSrgb8Alpha8Astc10x10 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR)
			eCompressedSrgb8Alpha8Astc10x10Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5)
			eCompressedSrgb8Alpha8Astc10x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR)
			eCompressedSrgb8Alpha8Astc10x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6)
			eCompressedSrgb8Alpha8Astc10x6 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR)
			eCompressedSrgb8Alpha8Astc10x6Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8)
			eCompressedSrgb8Alpha8Astc10x8 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR)
			eCompressedSrgb8Alpha8Astc10x8Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10)
			eCompressedSrgb8Alpha8Astc12x10 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR)
			eCompressedSrgb8Alpha8Astc12x10Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12)
			eCompressedSrgb8Alpha8Astc12x12 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR)
			eCompressedSrgb8Alpha8Astc12x12Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES)
			eCompressedSrgb8Alpha8Astc3x3x3Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES)
			eCompressedSrgb8Alpha8Astc4x3x3Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4)
			eCompressedSrgb8Alpha8Astc4x4 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR)
			eCompressedSrgb8Alpha8Astc4x4Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES)
			eCompressedSrgb8Alpha8Astc4x4x3Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES)
			eCompressedSrgb8Alpha8Astc4x4x4Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4)
			eCompressedSrgb8Alpha8Astc5x4 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR)
			eCompressedSrgb8Alpha8Astc5x4Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES)
			eCompressedSrgb8Alpha8Astc5x4x4Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5)
			eCompressedSrgb8Alpha8Astc5x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR)
			eCompressedSrgb8Alpha8Astc5x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES)
			eCompressedSrgb8Alpha8Astc5x5x4Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES)
			eCompressedSrgb8Alpha8Astc5x5x5Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5)
			eCompressedSrgb8Alpha8Astc6x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR)
			eCompressedSrgb8Alpha8Astc6x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES)
			eCompressedSrgb8Alpha8Astc6x5x5Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6)
			eCompressedSrgb8Alpha8Astc6x6 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR)
			eCompressedSrgb8Alpha8Astc6x6Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES)
			eCompressedSrgb8Alpha8Astc6x6x5Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES)
			eCompressedSrgb8Alpha8Astc6x6x6Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5)
			eCompressedSrgb8Alpha8Astc8x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR)
			eCompressedSrgb8Alpha8Astc8x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6)
			eCompressedSrgb8Alpha8Astc8x6 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR)
			eCompressedSrgb8Alpha8Astc8x6Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8)
			eCompressedSrgb8Alpha8Astc8x8 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR)
			eCompressedSrgb8Alpha8Astc8x8Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC)
			eCompressedSrgb8Alpha8Etc2Eac = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC_OES)
			eCompressedSrgb8Alpha8Etc2EacOes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ETC2)
			eCompressedSrgb8Etc2 = (GLenum)GL_COMPRESSED_SRGB8_ETC2,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ETC2_OES)
			eCompressedSrgb8Etc2Oes = (GLenum)GL_COMPRESSED_SRGB8_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2)
			eCompressedSrgb8PunchthroughAlpha1Etc2 = (GLenum)GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES)
			eCompressedSrgb8PunchthroughAlpha1Etc2Oes = (GLenum)GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA)
			eCompressedSrgbAlpha = (GLenum)GL_COMPRESSED_SRGB_ALPHA,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM)
			eCompressedSrgbAlphaBptcUnorm = (GLenum)GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB)
			eCompressedSrgbAlphaBptcUnormArb = (GLenum)GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT)
			eCompressedSrgbAlphaBptcUnormExt = (GLenum)GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT)
			eCompressedSrgbAlphaS3tcDxt1Ext = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV)
			eCompressedSrgbAlphaS3tcDxt1Nv = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT)
			eCompressedSrgbAlphaS3tcDxt3Ext = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV)
			eCompressedSrgbAlphaS3tcDxt3Nv = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT)
			eCompressedSrgbAlphaS3tcDxt5Ext = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV)
			eCompressedSrgbAlphaS3tcDxt5Nv = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV,
		#endif
		#if defined(GL_COMPRESSED_SRGB_S3TC_DXT1_EXT)
			eCompressedSrgbS3tcDxt1Ext = (GLenum)GL_COMPRESSED_SRGB_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_S3TC_DXT1_NV)
			eCompressedSrgbS3tcDxt1Nv = (GLenum)GL_COMPRESSED_SRGB_S3TC_DXT1_NV,
		#endif
		#if defined(GL_DEPTH24_STENCIL8)
			eDepth24Stencil8 = (GLenum)GL_DEPTH24_STENCIL8,
		#endif
		#if defined(GL_DEPTH24_STENCIL8_EXT)
			eDepth24Stencil8Ext = (GLenum)GL_DEPTH24_STENCIL8_EXT,
		#endif
		#if defined(GL_DEPTH24_STENCIL8_OES)
			eDepth24Stencil8Oes = (GLenum)GL_DEPTH24_STENCIL8_OES,
		#endif
		#if defined(GL_DEPTH32F_STENCIL8)
			eDepth32fStencil8 = (GLenum)GL_DEPTH32F_STENCIL8,
		#endif
		#if defined(GL_DEPTH32F_STENCIL8_NV)
			eDepth32fStencil8Nv = (GLenum)GL_DEPTH32F_STENCIL8_NV,
		#endif
		#if defined(GL_DEPTH_COMPONENT)
			eDepthComponent = (GLenum)GL_DEPTH_COMPONENT,
		#endif
		#if defined(GL_DEPTH_COMPONENT16)
			eDepthComponent16 = (GLenum)GL_DEPTH_COMPONENT16,
		#endif
		#if defined(GL_DEPTH_COMPONENT16_ARB)
			eDepthComponent16Arb = (GLenum)GL_DEPTH_COMPONENT16_ARB,
		#endif
		#if defined(GL_DEPTH_COMPONENT16_OES)
			eDepthComponent16Oes = (GLenum)GL_DEPTH_COMPONENT16_OES,
		#endif
		#if defined(GL_DEPTH_COMPONENT16_SGIX)
			eDepthComponent16Sgix = (GLenum)GL_DEPTH_COMPONENT16_SGIX,
		#endif
		#if defined(GL_DEPTH_COMPONENT24)
			eDepthComponent24 = (GLenum)GL_DEPTH_COMPONENT24,
		#endif
		#if defined(GL_DEPTH_COMPONENT24_ARB)
			eDepthComponent24Arb = (GLenum)GL_DEPTH_COMPONENT24_ARB,
		#endif
		#if defined(GL_DEPTH_COMPONENT24_OES)
			eDepthComponent24Oes = (GLenum)GL_DEPTH_COMPONENT24_OES,
		#endif
		#if defined(GL_DEPTH_COMPONENT24_SGIX)
			eDepthComponent24Sgix = (GLenum)GL_DEPTH_COMPONENT24_SGIX,
		#endif
		#if defined(GL_DEPTH_COMPONENT32)
			eDepthComponent32 = (GLenum)GL_DEPTH_COMPONENT32,
		#endif
		#if defined(GL_DEPTH_COMPONENT32F)
			eDepthComponent32f = (GLenum)GL_DEPTH_COMPONENT32F,
		#endif
		#if defined(GL_DEPTH_COMPONENT32F_NV)
			eDepthComponent32fNv = (GLenum)GL_DEPTH_COMPONENT32F_NV,
		#endif
		#if defined(GL_DEPTH_COMPONENT32_ARB)
			eDepthComponent32Arb = (GLenum)GL_DEPTH_COMPONENT32_ARB,
		#endif
		#if defined(GL_DEPTH_COMPONENT32_OES)
			eDepthComponent32Oes = (GLenum)GL_DEPTH_COMPONENT32_OES,
		#endif
		#if defined(GL_DEPTH_COMPONENT32_SGIX)
			eDepthComponent32Sgix = (GLenum)GL_DEPTH_COMPONENT32_SGIX,
		#endif
		#if defined(GL_DEPTH_STENCIL)
			eDepthStencil = (GLenum)GL_DEPTH_STENCIL,
		#endif
		#if defined(GL_DEPTH_STENCIL_EXT)
			eDepthStencilExt = (GLenum)GL_DEPTH_STENCIL_EXT,
		#endif
		#if defined(GL_DEPTH_STENCIL_MESA)
			eDepthStencilMesa = (GLenum)GL_DEPTH_STENCIL_MESA,
		#endif
		#if defined(GL_DEPTH_STENCIL_NV)
			eDepthStencilNv = (GLenum)GL_DEPTH_STENCIL_NV,
		#endif
		#if defined(GL_DEPTH_STENCIL_OES)
			eDepthStencilOes = (GLenum)GL_DEPTH_STENCIL_OES,
		#endif
		#if defined(GL_DUAL_ALPHA12_SGIS)
			eDualAlpha12Sgis = (GLenum)GL_DUAL_ALPHA12_SGIS,
		#endif
		#if defined(GL_DUAL_ALPHA16_SGIS)
			eDualAlpha16Sgis = (GLenum)GL_DUAL_ALPHA16_SGIS,
		#endif
		#if defined(GL_DUAL_ALPHA4_SGIS)
			eDualAlpha4Sgis = (GLenum)GL_DUAL_ALPHA4_SGIS,
		#endif
		#if defined(GL_DUAL_ALPHA8_SGIS)
			eDualAlpha8Sgis = (GLenum)GL_DUAL_ALPHA8_SGIS,
		#endif
		#if defined(GL_DUAL_INTENSITY12_SGIS)
			eDualIntensity12Sgis = (GLenum)GL_DUAL_INTENSITY12_SGIS,
		#endif
		#if defined(GL_DUAL_INTENSITY16_SGIS)
			eDualIntensity16Sgis = (GLenum)GL_DUAL_INTENSITY16_SGIS,
		#endif
		#if defined(GL_DUAL_INTENSITY4_SGIS)
			eDualIntensity4Sgis = (GLenum)GL_DUAL_INTENSITY4_SGIS,
		#endif
		#if defined(GL_DUAL_INTENSITY8_SGIS)
			eDualIntensity8Sgis = (GLenum)GL_DUAL_INTENSITY8_SGIS,
		#endif
		#if defined(GL_DUAL_LUMINANCE12_SGIS)
			eDualLuminance12Sgis = (GLenum)GL_DUAL_LUMINANCE12_SGIS,
		#endif
		#if defined(GL_DUAL_LUMINANCE16_SGIS)
			eDualLuminance16Sgis = (GLenum)GL_DUAL_LUMINANCE16_SGIS,
		#endif
		#if defined(GL_DUAL_LUMINANCE4_SGIS)
			eDualLuminance4Sgis = (GLenum)GL_DUAL_LUMINANCE4_SGIS,
		#endif
		#if defined(GL_DUAL_LUMINANCE8_SGIS)
			eDualLuminance8Sgis = (GLenum)GL_DUAL_LUMINANCE8_SGIS,
		#endif
		#if defined(GL_DUAL_LUMINANCE_ALPHA4_SGIS)
			eDualLuminanceAlpha4Sgis = (GLenum)GL_DUAL_LUMINANCE_ALPHA4_SGIS,
		#endif
		#if defined(GL_DUAL_LUMINANCE_ALPHA8_SGIS)
			eDualLuminanceAlpha8Sgis = (GLenum)GL_DUAL_LUMINANCE_ALPHA8_SGIS,
		#endif
		#if defined(GL_ETC1_RGB8_OES)
			eEtc1Rgb8Oes = (GLenum)GL_ETC1_RGB8_OES,
		#endif
		#if defined(GL_INTENSITY)
			eIntensity = (GLenum)GL_INTENSITY,
		#endif
		#if defined(GL_INTENSITY12)
			eIntensity12 = (GLenum)GL_INTENSITY12,
		#endif
		#if defined(GL_INTENSITY12_EXT)
			eIntensity12Ext = (GLenum)GL_INTENSITY12_EXT,
		#endif
		#if defined(GL_INTENSITY16)
			eIntensity16 = (GLenum)GL_INTENSITY16,
		#endif
		#if defined(GL_INTENSITY16I_EXT)
			eIntensity16iExt = (GLenum)GL_INTENSITY16I_EXT,
		#endif
		#if defined(GL_INTENSITY16UI_EXT)
			eIntensity16uiExt = (GLenum)GL_INTENSITY16UI_EXT,
		#endif
		#if defined(GL_INTENSITY16_EXT)
			eIntensity16Ext = (GLenum)GL_INTENSITY16_EXT,
		#endif
		#if defined(GL_INTENSITY32I_EXT)
			eIntensity32iExt = (GLenum)GL_INTENSITY32I_EXT,
		#endif
		#if defined(GL_INTENSITY32UI_EXT)
			eIntensity32uiExt = (GLenum)GL_INTENSITY32UI_EXT,
		#endif
		#if defined(GL_INTENSITY4)
			eIntensity4 = (GLenum)GL_INTENSITY4,
		#endif
		#if defined(GL_INTENSITY4_EXT)
			eIntensity4Ext = (GLenum)GL_INTENSITY4_EXT,
		#endif
		#if defined(GL_INTENSITY8)
			eIntensity8 = (GLenum)GL_INTENSITY8,
		#endif
		#if defined(GL_INTENSITY8I_EXT)
			eIntensity8iExt = (GLenum)GL_INTENSITY8I_EXT,
		#endif
		#if defined(GL_INTENSITY8UI_EXT)
			eIntensity8uiExt = (GLenum)GL_INTENSITY8UI_EXT,
		#endif
		#if defined(GL_INTENSITY8_EXT)
			eIntensity8Ext = (GLenum)GL_INTENSITY8_EXT,
		#endif
		#if defined(GL_LUMINANCE12)
			eLuminance12 = (GLenum)GL_LUMINANCE12,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA12)
			eLuminance12Alpha12 = (GLenum)GL_LUMINANCE12_ALPHA12,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA12_EXT)
			eLuminance12Alpha12Ext = (GLenum)GL_LUMINANCE12_ALPHA12_EXT,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA4)
			eLuminance12Alpha4 = (GLenum)GL_LUMINANCE12_ALPHA4,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA4_EXT)
			eLuminance12Alpha4Ext = (GLenum)GL_LUMINANCE12_ALPHA4_EXT,
		#endif
		#if defined(GL_LUMINANCE12_EXT)
			eLuminance12Ext = (GLenum)GL_LUMINANCE12_EXT,
		#endif
		#if defined(GL_LUMINANCE16)
			eLuminance16 = (GLenum)GL_LUMINANCE16,
		#endif
		#if defined(GL_LUMINANCE16I_EXT)
			eLuminance16iExt = (GLenum)GL_LUMINANCE16I_EXT,
		#endif
		#if defined(GL_LUMINANCE16UI_EXT)
			eLuminance16uiExt = (GLenum)GL_LUMINANCE16UI_EXT,
		#endif
		#if defined(GL_LUMINANCE16_ALPHA16)
			eLuminance16Alpha16 = (GLenum)GL_LUMINANCE16_ALPHA16,
		#endif
		#if defined(GL_LUMINANCE16_ALPHA16_EXT)
			eLuminance16Alpha16Ext = (GLenum)GL_LUMINANCE16_ALPHA16_EXT,
		#endif
		#if defined(GL_LUMINANCE16_EXT)
			eLuminance16Ext = (GLenum)GL_LUMINANCE16_EXT,
		#endif
		#if defined(GL_LUMINANCE32I_EXT)
			eLuminance32iExt = (GLenum)GL_LUMINANCE32I_EXT,
		#endif
		#if defined(GL_LUMINANCE32UI_EXT)
			eLuminance32uiExt = (GLenum)GL_LUMINANCE32UI_EXT,
		#endif
		#if defined(GL_LUMINANCE4)
			eLuminance4 = (GLenum)GL_LUMINANCE4,
		#endif
		#if defined(GL_LUMINANCE4_ALPHA4)
			eLuminance4Alpha4 = (GLenum)GL_LUMINANCE4_ALPHA4,
		#endif
		#if defined(GL_LUMINANCE4_ALPHA4_EXT)
			eLuminance4Alpha4Ext = (GLenum)GL_LUMINANCE4_ALPHA4_EXT,
		#endif
		#if defined(GL_LUMINANCE4_ALPHA4_OES)
			eLuminance4Alpha4Oes = (GLenum)GL_LUMINANCE4_ALPHA4_OES,
		#endif
		#if defined(GL_LUMINANCE4_EXT)
			eLuminance4Ext = (GLenum)GL_LUMINANCE4_EXT,
		#endif
		#if defined(GL_LUMINANCE6_ALPHA2)
			eLuminance6Alpha2 = (GLenum)GL_LUMINANCE6_ALPHA2,
		#endif
		#if defined(GL_LUMINANCE6_ALPHA2_EXT)
			eLuminance6Alpha2Ext = (GLenum)GL_LUMINANCE6_ALPHA2_EXT,
		#endif
		#if defined(GL_LUMINANCE8)
			eLuminance8 = (GLenum)GL_LUMINANCE8,
		#endif
		#if defined(GL_LUMINANCE8I_EXT)
			eLuminance8iExt = (GLenum)GL_LUMINANCE8I_EXT,
		#endif
		#if defined(GL_LUMINANCE8UI_EXT)
			eLuminance8uiExt = (GLenum)GL_LUMINANCE8UI_EXT,
		#endif
		#if defined(GL_LUMINANCE8_ALPHA8)
			eLuminance8Alpha8 = (GLenum)GL_LUMINANCE8_ALPHA8,
		#endif
		#if defined(GL_LUMINANCE8_ALPHA8_EXT)
			eLuminance8Alpha8Ext = (GLenum)GL_LUMINANCE8_ALPHA8_EXT,
		#endif
		#if defined(GL_LUMINANCE8_ALPHA8_OES)
			eLuminance8Alpha8Oes = (GLenum)GL_LUMINANCE8_ALPHA8_OES,
		#endif
		#if defined(GL_LUMINANCE8_EXT)
			eLuminance8Ext = (GLenum)GL_LUMINANCE8_EXT,
		#endif
		#if defined(GL_LUMINANCE8_OES)
			eLuminance8Oes = (GLenum)GL_LUMINANCE8_OES,
		#endif
		#if defined(GL_LUMINANCE_ALPHA16I_EXT)
			eLuminanceAlpha16iExt = (GLenum)GL_LUMINANCE_ALPHA16I_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA16UI_EXT)
			eLuminanceAlpha16uiExt = (GLenum)GL_LUMINANCE_ALPHA16UI_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA32I_EXT)
			eLuminanceAlpha32iExt = (GLenum)GL_LUMINANCE_ALPHA32I_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA32UI_EXT)
			eLuminanceAlpha32uiExt = (GLenum)GL_LUMINANCE_ALPHA32UI_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA8I_EXT)
			eLuminanceAlpha8iExt = (GLenum)GL_LUMINANCE_ALPHA8I_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA8UI_EXT)
			eLuminanceAlpha8uiExt = (GLenum)GL_LUMINANCE_ALPHA8UI_EXT,
		#endif
		#if defined(GL_QUAD_ALPHA4_SGIS)
			eQuadAlpha4Sgis = (GLenum)GL_QUAD_ALPHA4_SGIS,
		#endif
		#if defined(GL_QUAD_ALPHA8_SGIS)
			eQuadAlpha8Sgis = (GLenum)GL_QUAD_ALPHA8_SGIS,
		#endif
		#if defined(GL_QUAD_INTENSITY4_SGIS)
			eQuadIntensity4Sgis = (GLenum)GL_QUAD_INTENSITY4_SGIS,
		#endif
		#if defined(GL_QUAD_INTENSITY8_SGIS)
			eQuadIntensity8Sgis = (GLenum)GL_QUAD_INTENSITY8_SGIS,
		#endif
		#if defined(GL_QUAD_LUMINANCE4_SGIS)
			eQuadLuminance4Sgis = (GLenum)GL_QUAD_LUMINANCE4_SGIS,
		#endif
		#if defined(GL_QUAD_LUMINANCE8_SGIS)
			eQuadLuminance8Sgis = (GLenum)GL_QUAD_LUMINANCE8_SGIS,
		#endif
		#if defined(GL_R11F_G11F_B10F)
			eR11fG11fB10f = (GLenum)GL_R11F_G11F_B10F,
		#endif
		#if defined(GL_R11F_G11F_B10F_APPLE)
			eR11fG11fB10fApple = (GLenum)GL_R11F_G11F_B10F_APPLE,
		#endif
		#if defined(GL_R11F_G11F_B10F_EXT)
			eR11fG11fB10fExt = (GLenum)GL_R11F_G11F_B10F_EXT,
		#endif
		#if defined(GL_R16)
			eR16 = (GLenum)GL_R16,
		#endif
		#if defined(GL_R16F)
			eR16f = (GLenum)GL_R16F,
		#endif
		#if defined(GL_R16F_EXT)
			eR16fExt = (GLenum)GL_R16F_EXT,
		#endif
		#if defined(GL_R16I)
			eR16i = (GLenum)GL_R16I,
		#endif
		#if defined(GL_R16UI)
			eR16ui = (GLenum)GL_R16UI,
		#endif
		#if defined(GL_R16_EXT)
			eR16Ext = (GLenum)GL_R16_EXT,
		#endif
		#if defined(GL_R16_SNORM)
			eR16Snorm = (GLenum)GL_R16_SNORM,
		#endif
		#if defined(GL_R16_SNORM_EXT)
			eR16SnormExt = (GLenum)GL_R16_SNORM_EXT,
		#endif
		#if defined(GL_R32F)
			eR32f = (GLenum)GL_R32F,
		#endif
		#if defined(GL_R32F_EXT)
			eR32fExt = (GLenum)GL_R32F_EXT,
		#endif
		#if defined(GL_R32I)
			eR32i = (GLenum)GL_R32I,
		#endif
		#if defined(GL_R32UI)
			eR32ui = (GLenum)GL_R32UI,
		#endif
		#if defined(GL_R3_G3_B2)
			eR3G3B2 = (GLenum)GL_R3_G3_B2,
		#endif
		#if defined(GL_R8)
			eR8 = (GLenum)GL_R8,
		#endif
		#if defined(GL_R8I)
			eR8i = (GLenum)GL_R8I,
		#endif
		#if defined(GL_R8UI)
			eR8ui = (GLenum)GL_R8UI,
		#endif
		#if defined(GL_R8_EXT)
			eR8Ext = (GLenum)GL_R8_EXT,
		#endif
		#if defined(GL_R8_SNORM)
			eR8Snorm = (GLenum)GL_R8_SNORM,
		#endif
		#if defined(GL_RED)
			eRed = (GLenum)GL_RED,
		#endif
		#if defined(GL_RED_EXT)
			eRedExt = (GLenum)GL_RED_EXT,
		#endif
		#if defined(GL_RG)
			eRg = (GLenum)GL_RG,
		#endif
		#if defined(GL_RG16)
			eRg16 = (GLenum)GL_RG16,
		#endif
		#if defined(GL_RG16F)
			eRg16f = (GLenum)GL_RG16F,
		#endif
		#if defined(GL_RG16F_EXT)
			eRg16fExt = (GLenum)GL_RG16F_EXT,
		#endif
		#if defined(GL_RG16I)
			eRg16i = (GLenum)GL_RG16I,
		#endif
		#if defined(GL_RG16UI)
			eRg16ui = (GLenum)GL_RG16UI,
		#endif
		#if defined(GL_RG16_EXT)
			eRg16Ext = (GLenum)GL_RG16_EXT,
		#endif
		#if defined(GL_RG16_SNORM)
			eRg16Snorm = (GLenum)GL_RG16_SNORM,
		#endif
		#if defined(GL_RG16_SNORM_EXT)
			eRg16SnormExt = (GLenum)GL_RG16_SNORM_EXT,
		#endif
		#if defined(GL_RG32F)
			eRg32f = (GLenum)GL_RG32F,
		#endif
		#if defined(GL_RG32F_EXT)
			eRg32fExt = (GLenum)GL_RG32F_EXT,
		#endif
		#if defined(GL_RG32I)
			eRg32i = (GLenum)GL_RG32I,
		#endif
		#if defined(GL_RG32UI)
			eRg32ui = (GLenum)GL_RG32UI,
		#endif
		#if defined(GL_RG8)
			eRg8 = (GLenum)GL_RG8,
		#endif
		#if defined(GL_RG8I)
			eRg8i = (GLenum)GL_RG8I,
		#endif
		#if defined(GL_RG8UI)
			eRg8ui = (GLenum)GL_RG8UI,
		#endif
		#if defined(GL_RG8_EXT)
			eRg8Ext = (GLenum)GL_RG8_EXT,
		#endif
		#if defined(GL_RG8_SNORM)
			eRg8Snorm = (GLenum)GL_RG8_SNORM,
		#endif
		#if defined(GL_RGB)
			eRgb = (GLenum)GL_RGB,
		#endif
		#if defined(GL_RGB10)
			eRgb10 = (GLenum)GL_RGB10,
		#endif
		#if defined(GL_RGB10_A2)
			eRgb10A2 = (GLenum)GL_RGB10_A2,
		#endif
		#if defined(GL_RGB10_A2UI)
			eRgb10A2ui = (GLenum)GL_RGB10_A2UI,
		#endif
		#if defined(GL_RGB10_A2_EXT)
			eRgb10A2Ext = (GLenum)GL_RGB10_A2_EXT,
		#endif
		#if defined(GL_RGB10_EXT)
			eRgb10Ext = (GLenum)GL_RGB10_EXT,
		#endif
		#if defined(GL_RGB12)
			eRgb12 = (GLenum)GL_RGB12,
		#endif
		#if defined(GL_RGB12_EXT)
			eRgb12Ext = (GLenum)GL_RGB12_EXT,
		#endif
		#if defined(GL_RGB16)
			eRgb16 = (GLenum)GL_RGB16,
		#endif
		#if defined(GL_RGB16F)
			eRgb16f = (GLenum)GL_RGB16F,
		#endif
		#if defined(GL_RGB16F_ARB)
			eRgb16fArb = (GLenum)GL_RGB16F_ARB,
		#endif
		#if defined(GL_RGB16F_EXT)
			eRgb16fExt = (GLenum)GL_RGB16F_EXT,
		#endif
		#if defined(GL_RGB16I)
			eRgb16i = (GLenum)GL_RGB16I,
		#endif
		#if defined(GL_RGB16I_EXT)
			eRgb16iExt = (GLenum)GL_RGB16I_EXT,
		#endif
		#if defined(GL_RGB16UI)
			eRgb16ui = (GLenum)GL_RGB16UI,
		#endif
		#if defined(GL_RGB16UI_EXT)
			eRgb16uiExt = (GLenum)GL_RGB16UI_EXT,
		#endif
		#if defined(GL_RGB16_EXT)
			eRgb16Ext = (GLenum)GL_RGB16_EXT,
		#endif
		#if defined(GL_RGB16_SNORM)
			eRgb16Snorm = (GLenum)GL_RGB16_SNORM,
		#endif
		#if defined(GL_RGB16_SNORM_EXT)
			eRgb16SnormExt = (GLenum)GL_RGB16_SNORM_EXT,
		#endif
		#if defined(GL_RGB2_EXT)
			eRgb2Ext = (GLenum)GL_RGB2_EXT,
		#endif
		#if defined(GL_RGB32F)
			eRgb32f = (GLenum)GL_RGB32F,
		#endif
		#if defined(GL_RGB32F_ARB)
			eRgb32fArb = (GLenum)GL_RGB32F_ARB,
		#endif
		#if defined(GL_RGB32F_EXT)
			eRgb32fExt = (GLenum)GL_RGB32F_EXT,
		#endif
		#if defined(GL_RGB32I)
			eRgb32i = (GLenum)GL_RGB32I,
		#endif
		#if defined(GL_RGB32I_EXT)
			eRgb32iExt = (GLenum)GL_RGB32I_EXT,
		#endif
		#if defined(GL_RGB32UI)
			eRgb32ui = (GLenum)GL_RGB32UI,
		#endif
		#if defined(GL_RGB32UI_EXT)
			eRgb32uiExt = (GLenum)GL_RGB32UI_EXT,
		#endif
		#if defined(GL_RGB4)
			eRgb4 = (GLenum)GL_RGB4,
		#endif
		#if defined(GL_RGB4_EXT)
			eRgb4Ext = (GLenum)GL_RGB4_EXT,
		#endif
		#if defined(GL_RGB5)
			eRgb5 = (GLenum)GL_RGB5,
		#endif
		#if defined(GL_RGB565)
			eRgb565 = (GLenum)GL_RGB565,
		#endif
		#if defined(GL_RGB565_OES)
			eRgb565Oes = (GLenum)GL_RGB565_OES,
		#endif
		#if defined(GL_RGB5_A1)
			eRgb5A1 = (GLenum)GL_RGB5_A1,
		#endif
		#if defined(GL_RGB5_A1_EXT)
			eRgb5A1Ext = (GLenum)GL_RGB5_A1_EXT,
		#endif
		#if defined(GL_RGB5_A1_OES)
			eRgb5A1Oes = (GLenum)GL_RGB5_A1_OES,
		#endif
		#if defined(GL_RGB5_EXT)
			eRgb5Ext = (GLenum)GL_RGB5_EXT,
		#endif
		#if defined(GL_RGB8)
			eRgb8 = (GLenum)GL_RGB8,
		#endif
		#if defined(GL_RGB8I)
			eRgb8i = (GLenum)GL_RGB8I,
		#endif
		#if defined(GL_RGB8I_EXT)
			eRgb8iExt = (GLenum)GL_RGB8I_EXT,
		#endif
		#if defined(GL_RGB8UI)
			eRgb8ui = (GLenum)GL_RGB8UI,
		#endif
		#if defined(GL_RGB8UI_EXT)
			eRgb8uiExt = (GLenum)GL_RGB8UI_EXT,
		#endif
		#if defined(GL_RGB8_EXT)
			eRgb8Ext = (GLenum)GL_RGB8_EXT,
		#endif
		#if defined(GL_RGB8_OES)
			eRgb8Oes = (GLenum)GL_RGB8_OES,
		#endif
		#if defined(GL_RGB8_SNORM)
			eRgb8Snorm = (GLenum)GL_RGB8_SNORM,
		#endif
		#if defined(GL_RGB9_E5)
			eRgb9E5 = (GLenum)GL_RGB9_E5,
		#endif
		#if defined(GL_RGB9_E5_APPLE)
			eRgb9E5Apple = (GLenum)GL_RGB9_E5_APPLE,
		#endif
		#if defined(GL_RGB9_E5_EXT)
			eRgb9E5Ext = (GLenum)GL_RGB9_E5_EXT,
		#endif
		#if defined(GL_RGBA)
			eRgba = (GLenum)GL_RGBA,
		#endif
		#if defined(GL_RGBA12)
			eRgba12 = (GLenum)GL_RGBA12,
		#endif
		#if defined(GL_RGBA12_EXT)
			eRgba12Ext = (GLenum)GL_RGBA12_EXT,
		#endif
		#if defined(GL_RGBA16)
			eRgba16 = (GLenum)GL_RGBA16,
		#endif
		#if defined(GL_RGBA16F)
			eRgba16f = (GLenum)GL_RGBA16F,
		#endif
		#if defined(GL_RGBA16F_ARB)
			eRgba16fArb = (GLenum)GL_RGBA16F_ARB,
		#endif
		#if defined(GL_RGBA16F_EXT)
			eRgba16fExt = (GLenum)GL_RGBA16F_EXT,
		#endif
		#if defined(GL_RGBA16I)
			eRgba16i = (GLenum)GL_RGBA16I,
		#endif
		#if defined(GL_RGBA16I_EXT)
			eRgba16iExt = (GLenum)GL_RGBA16I_EXT,
		#endif
		#if defined(GL_RGBA16UI)
			eRgba16ui = (GLenum)GL_RGBA16UI,
		#endif
		#if defined(GL_RGBA16UI_EXT)
			eRgba16uiExt = (GLenum)GL_RGBA16UI_EXT,
		#endif
		#if defined(GL_RGBA16_EXT)
			eRgba16Ext = (GLenum)GL_RGBA16_EXT,
		#endif
		#if defined(GL_RGBA16_SNORM)
			eRgba16Snorm = (GLenum)GL_RGBA16_SNORM,
		#endif
		#if defined(GL_RGBA16_SNORM_EXT)
			eRgba16SnormExt = (GLenum)GL_RGBA16_SNORM_EXT,
		#endif
		#if defined(GL_RGBA2)
			eRgba2 = (GLenum)GL_RGBA2,
		#endif
		#if defined(GL_RGBA2_EXT)
			eRgba2Ext = (GLenum)GL_RGBA2_EXT,
		#endif
		#if defined(GL_RGBA32F)
			eRgba32f = (GLenum)GL_RGBA32F,
		#endif
		#if defined(GL_RGBA32F_ARB)
			eRgba32fArb = (GLenum)GL_RGBA32F_ARB,
		#endif
		#if defined(GL_RGBA32F_EXT)
			eRgba32fExt = (GLenum)GL_RGBA32F_EXT,
		#endif
		#if defined(GL_RGBA32I)
			eRgba32i = (GLenum)GL_RGBA32I,
		#endif
		#if defined(GL_RGBA32I_EXT)
			eRgba32iExt = (GLenum)GL_RGBA32I_EXT,
		#endif
		#if defined(GL_RGBA32UI)
			eRgba32ui = (GLenum)GL_RGBA32UI,
		#endif
		#if defined(GL_RGBA32UI_EXT)
			eRgba32uiExt = (GLenum)GL_RGBA32UI_EXT,
		#endif
		#if defined(GL_RGBA4)
			eRgba4 = (GLenum)GL_RGBA4,
		#endif
		#if defined(GL_RGBA4_EXT)
			eRgba4Ext = (GLenum)GL_RGBA4_EXT,
		#endif
		#if defined(GL_RGBA4_OES)
			eRgba4Oes = (GLenum)GL_RGBA4_OES,
		#endif
		#if defined(GL_RGBA8)
			eRgba8 = (GLenum)GL_RGBA8,
		#endif
		#if defined(GL_RGBA8I)
			eRgba8i = (GLenum)GL_RGBA8I,
		#endif
		#if defined(GL_RGBA8I_EXT)
			eRgba8iExt = (GLenum)GL_RGBA8I_EXT,
		#endif
		#if defined(GL_RGBA8UI)
			eRgba8ui = (GLenum)GL_RGBA8UI,
		#endif
		#if defined(GL_RGBA8UI_EXT)
			eRgba8uiExt = (GLenum)GL_RGBA8UI_EXT,
		#endif
		#if defined(GL_RGBA8_EXT)
			eRgba8Ext = (GLenum)GL_RGBA8_EXT,
		#endif
		#if defined(GL_RGBA8_OES)
			eRgba8Oes = (GLenum)GL_RGBA8_OES,
		#endif
		#if defined(GL_RGBA8_SNORM)
			eRgba8Snorm = (GLenum)GL_RGBA8_SNORM,
		#endif
		#if defined(GL_SR8_EXT)
			eSr8Ext = (GLenum)GL_SR8_EXT,
		#endif
		#if defined(GL_SRG8_EXT)
			eSrg8Ext = (GLenum)GL_SRG8_EXT,
		#endif
		#if defined(GL_SRGB)
			eSrgb = (GLenum)GL_SRGB,
		#endif
		#if defined(GL_SRGB8)
			eSrgb8 = (GLenum)GL_SRGB8,
		#endif
		#if defined(GL_SRGB8_ALPHA8)
			eSrgb8Alpha8 = (GLenum)GL_SRGB8_ALPHA8,
		#endif
		#if defined(GL_SRGB8_ALPHA8_EXT)
			eSrgb8Alpha8Ext = (GLenum)GL_SRGB8_ALPHA8_EXT,
		#endif
		#if defined(GL_SRGB8_EXT)
			eSrgb8Ext = (GLenum)GL_SRGB8_EXT,
		#endif
		#if defined(GL_SRGB8_NV)
			eSrgb8Nv = (GLenum)GL_SRGB8_NV,
		#endif
		#if defined(GL_SRGB_ALPHA)
			eSrgbAlpha = (GLenum)GL_SRGB_ALPHA,
		#endif
		#if defined(GL_SRGB_ALPHA_EXT)
			eSrgbAlphaExt = (GLenum)GL_SRGB_ALPHA_EXT,
		#endif
		#if defined(GL_SRGB_EXT)
			eSrgbExt = (GLenum)GL_SRGB_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX)
			eStencilIndex = (GLenum)GL_STENCIL_INDEX,
		#endif
		#if defined(GL_STENCIL_INDEX1)
			eStencilIndex1 = (GLenum)GL_STENCIL_INDEX1,
		#endif
		#if defined(GL_STENCIL_INDEX16)
			eStencilIndex16 = (GLenum)GL_STENCIL_INDEX16,
		#endif
		#if defined(GL_STENCIL_INDEX16_EXT)
			eStencilIndex16Ext = (GLenum)GL_STENCIL_INDEX16_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX1_EXT)
			eStencilIndex1Ext = (GLenum)GL_STENCIL_INDEX1_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX1_OES)
			eStencilIndex1Oes = (GLenum)GL_STENCIL_INDEX1_OES,
		#endif
		#if defined(GL_STENCIL_INDEX4)
			eStencilIndex4 = (GLenum)GL_STENCIL_INDEX4,
		#endif
		#if defined(GL_STENCIL_INDEX4_EXT)
			eStencilIndex4Ext = (GLenum)GL_STENCIL_INDEX4_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX4_OES)
			eStencilIndex4Oes = (GLenum)GL_STENCIL_INDEX4_OES,
		#endif
		#if defined(GL_STENCIL_INDEX8)
			eStencilIndex8 = (GLenum)GL_STENCIL_INDEX8,
		#endif
		#if defined(GL_STENCIL_INDEX8_EXT)
			eStencilIndex8Ext = (GLenum)GL_STENCIL_INDEX8_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX8_OES)
			eStencilIndex8Oes = (GLenum)GL_STENCIL_INDEX8_OES,
		#endif
		#if defined(GL_STENCIL_INDEX_OES)
			eStencilIndexOes = (GLenum)GL_STENCIL_INDEX_OES,
		#endif
	};

	enum class DepthStencilTextureMode : GLenum {
		#if defined(GL_DEPTH_COMPONENT)
			eDepthComponent = (GLenum)GL_DEPTH_COMPONENT,
		#endif
		#if defined(GL_STENCIL_INDEX)
			eStencilIndex = (GLenum)GL_STENCIL_INDEX,
		#endif
	};

	enum class CombinerComponentUsageNV : GLenum {
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_BLUE)
			eBlue = (GLenum)GL_BLUE,
		#endif
		#if defined(GL_RGB)
			eRgb = (GLenum)GL_RGB,
		#endif
	};

	enum class CombinerPortionNV : GLenum {
		#if defined(GL_ALPHA)
			eAlpha = (GLenum)GL_ALPHA,
		#endif
		#if defined(GL_RGB)
			eRgb = (GLenum)GL_RGB,
		#endif
	};

	enum class PolygonMode : GLenum {
		#if defined(GL_FILL)
			eFill = (GLenum)GL_FILL,
		#endif
		#if defined(GL_LINE)
			eLine = (GLenum)GL_LINE,
		#endif
		#if defined(GL_POINT)
			ePoint = (GLenum)GL_POINT,
		#endif
	};

	enum class MeshMode1 : GLenum {
		#if defined(GL_LINE)
			eLine = (GLenum)GL_LINE,
		#endif
		#if defined(GL_POINT)
			ePoint = (GLenum)GL_POINT,
		#endif
	};

	enum class MeshMode2 : GLenum {
		#if defined(GL_FILL)
			eFill = (GLenum)GL_FILL,
		#endif
		#if defined(GL_LINE)
			eLine = (GLenum)GL_LINE,
		#endif
		#if defined(GL_POINT)
			ePoint = (GLenum)GL_POINT,
		#endif
	};

	enum class EvalMapsModeNV : GLenum {
		#if defined(GL_FILL_NV)
			eFillNv = (GLenum)GL_FILL_NV,
		#endif
	};

	enum class RenderingMode : GLenum {
		#if defined(GL_FEEDBACK)
			eFeedback = (GLenum)GL_FEEDBACK,
		#endif
		#if defined(GL_RENDER)
			eRender = (GLenum)GL_RENDER,
		#endif
		#if defined(GL_SELECT)
			eSelect = (GLenum)GL_SELECT,
		#endif
	};

	enum class ShadingModel : GLenum {
		#if defined(GL_FLAT)
			eFlat = (GLenum)GL_FLAT,
		#endif
		#if defined(GL_SMOOTH)
			eSmooth = (GLenum)GL_SMOOTH,
		#endif
	};

	enum class StringName : GLenum {
		#if defined(GL_EXTENSIONS)
			eExtensions = (GLenum)GL_EXTENSIONS,
		#endif
		#if defined(GL_RENDERER)
			eRenderer = (GLenum)GL_RENDERER,
		#endif
		#if defined(GL_SHADING_LANGUAGE_VERSION)
			eShadingLanguageVersion = (GLenum)GL_SHADING_LANGUAGE_VERSION,
		#endif
		#if defined(GL_VENDOR)
			eVendor = (GLenum)GL_VENDOR,
		#endif
		#if defined(GL_VERSION)
			eVersion = (GLenum)GL_VERSION,
		#endif
	};

	enum class TextureCoordName : GLenum {
		#if defined(GL_Q)
			eQ = (GLenum)GL_Q,
		#endif
		#if defined(GL_R)
			eR = (GLenum)GL_R,
		#endif
		#if defined(GL_S)
			eS = (GLenum)GL_S,
		#endif
		#if defined(GL_T)
			eT = (GLenum)GL_T,
		#endif
		#if defined(GL_TEXTURE_GEN_STR_OES)
			eTextureGenStrOes = (GLenum)GL_TEXTURE_GEN_STR_OES,
		#endif
	};

	enum class TextureEnvTarget : GLenum {
		#if defined(GL_POINT_SPRITE)
			ePointSprite = (GLenum)GL_POINT_SPRITE,
		#endif
		#if defined(GL_TEXTURE_ENV)
			eTextureEnv = (GLenum)GL_TEXTURE_ENV,
		#endif
		#if defined(GL_TEXTURE_FILTER_CONTROL)
			eTextureFilterControl = (GLenum)GL_TEXTURE_FILTER_CONTROL,
		#endif
	};

	enum class TextureGenMode : GLenum {
		#if defined(GL_EYE_DISTANCE_TO_LINE_SGIS)
			eEyeDistanceToLineSgis = (GLenum)GL_EYE_DISTANCE_TO_LINE_SGIS,
		#endif
		#if defined(GL_EYE_DISTANCE_TO_POINT_SGIS)
			eEyeDistanceToPointSgis = (GLenum)GL_EYE_DISTANCE_TO_POINT_SGIS,
		#endif
		#if defined(GL_EYE_LINEAR)
			eEyeLinear = (GLenum)GL_EYE_LINEAR,
		#endif
		#if defined(GL_OBJECT_DISTANCE_TO_LINE_SGIS)
			eObjectDistanceToLineSgis = (GLenum)GL_OBJECT_DISTANCE_TO_LINE_SGIS,
		#endif
		#if defined(GL_OBJECT_DISTANCE_TO_POINT_SGIS)
			eObjectDistanceToPointSgis = (GLenum)GL_OBJECT_DISTANCE_TO_POINT_SGIS,
		#endif
		#if defined(GL_OBJECT_LINEAR)
			eObjectLinear = (GLenum)GL_OBJECT_LINEAR,
		#endif
		#if defined(GL_SPHERE_MAP)
			eSphereMap = (GLenum)GL_SPHERE_MAP,
		#endif
	};

	enum class TextureGenParameter : GLenum {
		#if defined(GL_EYE_LINE_SGIS)
			eEyeLineSgis = (GLenum)GL_EYE_LINE_SGIS,
		#endif
		#if defined(GL_EYE_PLANE)
			eEyePlane = (GLenum)GL_EYE_PLANE,
		#endif
		#if defined(GL_EYE_POINT_SGIS)
			eEyePointSgis = (GLenum)GL_EYE_POINT_SGIS,
		#endif
		#if defined(GL_OBJECT_LINE_SGIS)
			eObjectLineSgis = (GLenum)GL_OBJECT_LINE_SGIS,
		#endif
		#if defined(GL_OBJECT_PLANE)
			eObjectPlane = (GLenum)GL_OBJECT_PLANE,
		#endif
		#if defined(GL_OBJECT_POINT_SGIS)
			eObjectPointSgis = (GLenum)GL_OBJECT_POINT_SGIS,
		#endif
		#if defined(GL_TEXTURE_GEN_MODE)
			eTextureGenMode = (GLenum)GL_TEXTURE_GEN_MODE,
		#endif
		#if defined(GL_TEXTURE_GEN_MODE_OES)
			eTextureGenModeOes = (GLenum)GL_TEXTURE_GEN_MODE_OES,
		#endif
	};

	enum class BlitFramebufferFilter : GLenum {
		#if defined(GL_LINEAR)
			eLinear = (GLenum)GL_LINEAR,
		#endif
		#if defined(GL_NEAREST)
			eNearest = (GLenum)GL_NEAREST,
		#endif
	};

	enum class TextureMagFilter : GLenum {
		#if defined(GL_FILTER4_SGIS)
			eFilter4Sgis = (GLenum)GL_FILTER4_SGIS,
		#endif
		#if defined(GL_LINEAR)
			eLinear = (GLenum)GL_LINEAR,
		#endif
		#if defined(GL_LINEAR_DETAIL_ALPHA_SGIS)
			eLinearDetailAlphaSgis = (GLenum)GL_LINEAR_DETAIL_ALPHA_SGIS,
		#endif
		#if defined(GL_LINEAR_DETAIL_COLOR_SGIS)
			eLinearDetailColorSgis = (GLenum)GL_LINEAR_DETAIL_COLOR_SGIS,
		#endif
		#if defined(GL_LINEAR_DETAIL_SGIS)
			eLinearDetailSgis = (GLenum)GL_LINEAR_DETAIL_SGIS,
		#endif
		#if defined(GL_LINEAR_SHARPEN_ALPHA_SGIS)
			eLinearSharpenAlphaSgis = (GLenum)GL_LINEAR_SHARPEN_ALPHA_SGIS,
		#endif
		#if defined(GL_LINEAR_SHARPEN_COLOR_SGIS)
			eLinearSharpenColorSgis = (GLenum)GL_LINEAR_SHARPEN_COLOR_SGIS,
		#endif
		#if defined(GL_LINEAR_SHARPEN_SGIS)
			eLinearSharpenSgis = (GLenum)GL_LINEAR_SHARPEN_SGIS,
		#endif
		#if defined(GL_NEAREST)
			eNearest = (GLenum)GL_NEAREST,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_CEILING_SGIX)
			ePixelTexGenQCeilingSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_CEILING_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX)
			ePixelTexGenQFloorSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_ROUND_SGIX)
			ePixelTexGenQRoundSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_ROUND_SGIX,
		#endif
	};

	enum class TextureMinFilter : GLenum {
		#if defined(GL_FILTER4_SGIS)
			eFilter4Sgis = (GLenum)GL_FILTER4_SGIS,
		#endif
		#if defined(GL_LINEAR)
			eLinear = (GLenum)GL_LINEAR,
		#endif
		#if defined(GL_LINEAR_CLIPMAP_LINEAR_SGIX)
			eLinearClipmapLinearSgix = (GLenum)GL_LINEAR_CLIPMAP_LINEAR_SGIX,
		#endif
		#if defined(GL_LINEAR_CLIPMAP_NEAREST_SGIX)
			eLinearClipmapNearestSgix = (GLenum)GL_LINEAR_CLIPMAP_NEAREST_SGIX,
		#endif
		#if defined(GL_LINEAR_MIPMAP_LINEAR)
			eLinearMipmapLinear = (GLenum)GL_LINEAR_MIPMAP_LINEAR,
		#endif
		#if defined(GL_LINEAR_MIPMAP_NEAREST)
			eLinearMipmapNearest = (GLenum)GL_LINEAR_MIPMAP_NEAREST,
		#endif
		#if defined(GL_NEAREST)
			eNearest = (GLenum)GL_NEAREST,
		#endif
		#if defined(GL_NEAREST_CLIPMAP_LINEAR_SGIX)
			eNearestClipmapLinearSgix = (GLenum)GL_NEAREST_CLIPMAP_LINEAR_SGIX,
		#endif
		#if defined(GL_NEAREST_CLIPMAP_NEAREST_SGIX)
			eNearestClipmapNearestSgix = (GLenum)GL_NEAREST_CLIPMAP_NEAREST_SGIX,
		#endif
		#if defined(GL_NEAREST_MIPMAP_LINEAR)
			eNearestMipmapLinear = (GLenum)GL_NEAREST_MIPMAP_LINEAR,
		#endif
		#if defined(GL_NEAREST_MIPMAP_NEAREST)
			eNearestMipmapNearest = (GLenum)GL_NEAREST_MIPMAP_NEAREST,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_CEILING_SGIX)
			ePixelTexGenQCeilingSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_CEILING_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX)
			ePixelTexGenQFloorSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX,
		#endif
		#if defined(GL_PIXEL_TEX_GEN_Q_ROUND_SGIX)
			ePixelTexGenQRoundSgix = (GLenum)GL_PIXEL_TEX_GEN_Q_ROUND_SGIX,
		#endif
	};

	enum class SamplerParameterI : GLenum {
		#if defined(GL_TEXTURE_COMPARE_FUNC)
			eTextureCompareFunc = (GLenum)GL_TEXTURE_COMPARE_FUNC,
		#endif
		#if defined(GL_TEXTURE_COMPARE_MODE)
			eTextureCompareMode = (GLenum)GL_TEXTURE_COMPARE_MODE,
		#endif
		#if defined(GL_TEXTURE_MAG_FILTER)
			eTextureMagFilter = (GLenum)GL_TEXTURE_MAG_FILTER,
		#endif
		#if defined(GL_TEXTURE_MIN_FILTER)
			eTextureMinFilter = (GLenum)GL_TEXTURE_MIN_FILTER,
		#endif
		#if defined(GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM)
			eTextureUnnormalizedCoordinatesArm = (GLenum)GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM,
		#endif
		#if defined(GL_TEXTURE_WRAP_R)
			eTextureWrapR = (GLenum)GL_TEXTURE_WRAP_R,
		#endif
		#if defined(GL_TEXTURE_WRAP_S)
			eTextureWrapS = (GLenum)GL_TEXTURE_WRAP_S,
		#endif
		#if defined(GL_TEXTURE_WRAP_T)
			eTextureWrapT = (GLenum)GL_TEXTURE_WRAP_T,
		#endif
	};

	enum class TextureWrapMode : GLenum {
		#if defined(GL_CLAMP)
			eClamp = (GLenum)GL_CLAMP,
		#endif
		#if defined(GL_CLAMP_TO_BORDER)
			eClampToBorder = (GLenum)GL_CLAMP_TO_BORDER,
		#endif
		#if defined(GL_CLAMP_TO_BORDER_ARB)
			eClampToBorderArb = (GLenum)GL_CLAMP_TO_BORDER_ARB,
		#endif
		#if defined(GL_CLAMP_TO_BORDER_EXT)
			eClampToBorderExt = (GLenum)GL_CLAMP_TO_BORDER_EXT,
		#endif
		#if defined(GL_CLAMP_TO_BORDER_NV)
			eClampToBorderNv = (GLenum)GL_CLAMP_TO_BORDER_NV,
		#endif
		#if defined(GL_CLAMP_TO_BORDER_OES)
			eClampToBorderOes = (GLenum)GL_CLAMP_TO_BORDER_OES,
		#endif
		#if defined(GL_CLAMP_TO_BORDER_SGIS)
			eClampToBorderSgis = (GLenum)GL_CLAMP_TO_BORDER_SGIS,
		#endif
		#if defined(GL_CLAMP_TO_EDGE)
			eClampToEdge = (GLenum)GL_CLAMP_TO_EDGE,
		#endif
		#if defined(GL_CLAMP_TO_EDGE_SGIS)
			eClampToEdgeSgis = (GLenum)GL_CLAMP_TO_EDGE_SGIS,
		#endif
		#if defined(GL_MIRRORED_REPEAT)
			eMirroredRepeat = (GLenum)GL_MIRRORED_REPEAT,
		#endif
		#if defined(GL_MIRRORED_REPEAT_ARB)
			eMirroredRepeatArb = (GLenum)GL_MIRRORED_REPEAT_ARB,
		#endif
		#if defined(GL_MIRRORED_REPEAT_IBM)
			eMirroredRepeatIbm = (GLenum)GL_MIRRORED_REPEAT_IBM,
		#endif
		#if defined(GL_MIRRORED_REPEAT_OES)
			eMirroredRepeatOes = (GLenum)GL_MIRRORED_REPEAT_OES,
		#endif
		#if defined(GL_REPEAT)
			eRepeat = (GLenum)GL_REPEAT,
		#endif
	};

	enum class SizedInternalFormat : GLenum {
		#if defined(GL_ALPHA12)
			eAlpha12 = (GLenum)GL_ALPHA12,
		#endif
		#if defined(GL_ALPHA12_EXT)
			eAlpha12Ext = (GLenum)GL_ALPHA12_EXT,
		#endif
		#if defined(GL_ALPHA16)
			eAlpha16 = (GLenum)GL_ALPHA16,
		#endif
		#if defined(GL_ALPHA16I_EXT)
			eAlpha16iExt = (GLenum)GL_ALPHA16I_EXT,
		#endif
		#if defined(GL_ALPHA16UI_EXT)
			eAlpha16uiExt = (GLenum)GL_ALPHA16UI_EXT,
		#endif
		#if defined(GL_ALPHA16_EXT)
			eAlpha16Ext = (GLenum)GL_ALPHA16_EXT,
		#endif
		#if defined(GL_ALPHA32I_EXT)
			eAlpha32iExt = (GLenum)GL_ALPHA32I_EXT,
		#endif
		#if defined(GL_ALPHA32UI_EXT)
			eAlpha32uiExt = (GLenum)GL_ALPHA32UI_EXT,
		#endif
		#if defined(GL_ALPHA4)
			eAlpha4 = (GLenum)GL_ALPHA4,
		#endif
		#if defined(GL_ALPHA4_EXT)
			eAlpha4Ext = (GLenum)GL_ALPHA4_EXT,
		#endif
		#if defined(GL_ALPHA8)
			eAlpha8 = (GLenum)GL_ALPHA8,
		#endif
		#if defined(GL_ALPHA8I_EXT)
			eAlpha8iExt = (GLenum)GL_ALPHA8I_EXT,
		#endif
		#if defined(GL_ALPHA8UI_EXT)
			eAlpha8uiExt = (GLenum)GL_ALPHA8UI_EXT,
		#endif
		#if defined(GL_ALPHA8_EXT)
			eAlpha8Ext = (GLenum)GL_ALPHA8_EXT,
		#endif
		#if defined(GL_ALPHA8_OES)
			eAlpha8Oes = (GLenum)GL_ALPHA8_OES,
		#endif
		#if defined(GL_COMPRESSED_R11_EAC)
			eCompressedR11Eac = (GLenum)GL_COMPRESSED_R11_EAC,
		#endif
		#if defined(GL_COMPRESSED_R11_EAC_OES)
			eCompressedR11EacOes = (GLenum)GL_COMPRESSED_R11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_RED_GREEN_RGTC2_EXT)
			eCompressedRedGreenRgtc2Ext = (GLenum)GL_COMPRESSED_RED_GREEN_RGTC2_EXT,
		#endif
		#if defined(GL_COMPRESSED_RED_RGTC1)
			eCompressedRedRgtc1 = (GLenum)GL_COMPRESSED_RED_RGTC1,
		#endif
		#if defined(GL_COMPRESSED_RED_RGTC1_EXT)
			eCompressedRedRgtc1Ext = (GLenum)GL_COMPRESSED_RED_RGTC1_EXT,
		#endif
		#if defined(GL_COMPRESSED_RG11_EAC)
			eCompressedRg11Eac = (GLenum)GL_COMPRESSED_RG11_EAC,
		#endif
		#if defined(GL_COMPRESSED_RG11_EAC_OES)
			eCompressedRg11EacOes = (GLenum)GL_COMPRESSED_RG11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_RGB8_ETC2)
			eCompressedRgb8Etc2 = (GLenum)GL_COMPRESSED_RGB8_ETC2,
		#endif
		#if defined(GL_COMPRESSED_RGB8_ETC2_OES)
			eCompressedRgb8Etc2Oes = (GLenum)GL_COMPRESSED_RGB8_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2)
			eCompressedRgb8PunchthroughAlpha1Etc2 = (GLenum)GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2,
		#endif
		#if defined(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES)
			eCompressedRgb8PunchthroughAlpha1Etc2Oes = (GLenum)GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA8_ETC2_EAC)
			eCompressedRgba8Etc2Eac = (GLenum)GL_COMPRESSED_RGBA8_ETC2_EAC,
		#endif
		#if defined(GL_COMPRESSED_RGBA8_ETC2_EAC_OES)
			eCompressedRgba8Etc2EacOes = (GLenum)GL_COMPRESSED_RGBA8_ETC2_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x10)
			eCompressedRgbaAstc10x10 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x10,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x10_KHR)
			eCompressedRgbaAstc10x10Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x5)
			eCompressedRgbaAstc10x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x5_KHR)
			eCompressedRgbaAstc10x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x6)
			eCompressedRgbaAstc10x6 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x6,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x6_KHR)
			eCompressedRgbaAstc10x6Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x8)
			eCompressedRgbaAstc10x8 = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x8,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_10x8_KHR)
			eCompressedRgbaAstc10x8Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_10x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x10)
			eCompressedRgbaAstc12x10 = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x10,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x10_KHR)
			eCompressedRgbaAstc12x10Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x12)
			eCompressedRgbaAstc12x12 = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x12,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_12x12_KHR)
			eCompressedRgbaAstc12x12Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_12x12_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_3x3x3_OES)
			eCompressedRgbaAstc3x3x3Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_3x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x3x3_OES)
			eCompressedRgbaAstc4x3x3Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4)
			eCompressedRgbaAstc4x4 = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4_KHR)
			eCompressedRgbaAstc4x4Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4x3_OES)
			eCompressedRgbaAstc4x4x3Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4x3_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_4x4x4_OES)
			eCompressedRgbaAstc4x4x4Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_4x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x4)
			eCompressedRgbaAstc5x4 = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x4,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x4_KHR)
			eCompressedRgbaAstc5x4Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x4x4_OES)
			eCompressedRgbaAstc5x4x4Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5)
			eCompressedRgbaAstc5x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5_KHR)
			eCompressedRgbaAstc5x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5x4_OES)
			eCompressedRgbaAstc5x5x4Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5x4_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_5x5x5_OES)
			eCompressedRgbaAstc5x5x5Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_5x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x5)
			eCompressedRgbaAstc6x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x5_KHR)
			eCompressedRgbaAstc6x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x5x5_OES)
			eCompressedRgbaAstc6x5x5Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6)
			eCompressedRgbaAstc6x6 = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6_KHR)
			eCompressedRgbaAstc6x6Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6x5_OES)
			eCompressedRgbaAstc6x6x5Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6x5_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_6x6x6_OES)
			eCompressedRgbaAstc6x6x6Oes = (GLenum)GL_COMPRESSED_RGBA_ASTC_6x6x6_OES,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x5)
			eCompressedRgbaAstc8x5 = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x5,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x5_KHR)
			eCompressedRgbaAstc8x5Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x6)
			eCompressedRgbaAstc8x6 = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x6,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x6_KHR)
			eCompressedRgbaAstc8x6Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x8)
			eCompressedRgbaAstc8x8 = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x8,
		#endif
		#if defined(GL_COMPRESSED_RGBA_ASTC_8x8_KHR)
			eCompressedRgbaAstc8x8Khr = (GLenum)GL_COMPRESSED_RGBA_ASTC_8x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_RGBA_BPTC_UNORM)
			eCompressedRgbaBptcUnorm = (GLenum)GL_COMPRESSED_RGBA_BPTC_UNORM,
		#endif
		#if defined(GL_COMPRESSED_RGBA_BPTC_UNORM_ARB)
			eCompressedRgbaBptcUnormArb = (GLenum)GL_COMPRESSED_RGBA_BPTC_UNORM_ARB,
		#endif
		#if defined(GL_COMPRESSED_RGBA_BPTC_UNORM_EXT)
			eCompressedRgbaBptcUnormExt = (GLenum)GL_COMPRESSED_RGBA_BPTC_UNORM_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT1_EXT)
			eCompressedRgbaS3tcDxt1Ext = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE)
			eCompressedRgbaS3tcDxt3Angle = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT3_EXT)
			eCompressedRgbaS3tcDxt3Ext = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT3_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE)
			eCompressedRgbaS3tcDxt5Angle = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE,
		#endif
		#if defined(GL_COMPRESSED_RGBA_S3TC_DXT5_EXT)
			eCompressedRgbaS3tcDxt5Ext = (GLenum)GL_COMPRESSED_RGBA_S3TC_DXT5_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT)
			eCompressedRgbBptcSignedFloat = (GLenum)GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB)
			eCompressedRgbBptcSignedFloatArb = (GLenum)GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT)
			eCompressedRgbBptcSignedFloatExt = (GLenum)GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT)
			eCompressedRgbBptcUnsignedFloat = (GLenum)GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB)
			eCompressedRgbBptcUnsignedFloatArb = (GLenum)GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB,
		#endif
		#if defined(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT)
			eCompressedRgbBptcUnsignedFloatExt = (GLenum)GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT,
		#endif
		#if defined(GL_COMPRESSED_RGB_S3TC_DXT1_EXT)
			eCompressedRgbS3tcDxt1Ext = (GLenum)GL_COMPRESSED_RGB_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_RG_RGTC2)
			eCompressedRgRgtc2 = (GLenum)GL_COMPRESSED_RG_RGTC2,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_R11_EAC)
			eCompressedSignedR11Eac = (GLenum)GL_COMPRESSED_SIGNED_R11_EAC,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_R11_EAC_OES)
			eCompressedSignedR11EacOes = (GLenum)GL_COMPRESSED_SIGNED_R11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT)
			eCompressedSignedRedGreenRgtc2Ext = (GLenum)GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RED_RGTC1)
			eCompressedSignedRedRgtc1 = (GLenum)GL_COMPRESSED_SIGNED_RED_RGTC1,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RED_RGTC1_EXT)
			eCompressedSignedRedRgtc1Ext = (GLenum)GL_COMPRESSED_SIGNED_RED_RGTC1_EXT,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RG11_EAC)
			eCompressedSignedRg11Eac = (GLenum)GL_COMPRESSED_SIGNED_RG11_EAC,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RG11_EAC_OES)
			eCompressedSignedRg11EacOes = (GLenum)GL_COMPRESSED_SIGNED_RG11_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_SIGNED_RG_RGTC2)
			eCompressedSignedRgRgtc2 = (GLenum)GL_COMPRESSED_SIGNED_RG_RGTC2,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10)
			eCompressedSrgb8Alpha8Astc10x10 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR)
			eCompressedSrgb8Alpha8Astc10x10Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5)
			eCompressedSrgb8Alpha8Astc10x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR)
			eCompressedSrgb8Alpha8Astc10x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6)
			eCompressedSrgb8Alpha8Astc10x6 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR)
			eCompressedSrgb8Alpha8Astc10x6Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8)
			eCompressedSrgb8Alpha8Astc10x8 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR)
			eCompressedSrgb8Alpha8Astc10x8Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10)
			eCompressedSrgb8Alpha8Astc12x10 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR)
			eCompressedSrgb8Alpha8Astc12x10Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12)
			eCompressedSrgb8Alpha8Astc12x12 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR)
			eCompressedSrgb8Alpha8Astc12x12Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES)
			eCompressedSrgb8Alpha8Astc3x3x3Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES)
			eCompressedSrgb8Alpha8Astc4x3x3Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4)
			eCompressedSrgb8Alpha8Astc4x4 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR)
			eCompressedSrgb8Alpha8Astc4x4Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES)
			eCompressedSrgb8Alpha8Astc4x4x3Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES)
			eCompressedSrgb8Alpha8Astc4x4x4Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4)
			eCompressedSrgb8Alpha8Astc5x4 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR)
			eCompressedSrgb8Alpha8Astc5x4Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES)
			eCompressedSrgb8Alpha8Astc5x4x4Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5)
			eCompressedSrgb8Alpha8Astc5x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR)
			eCompressedSrgb8Alpha8Astc5x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES)
			eCompressedSrgb8Alpha8Astc5x5x4Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES)
			eCompressedSrgb8Alpha8Astc5x5x5Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5)
			eCompressedSrgb8Alpha8Astc6x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR)
			eCompressedSrgb8Alpha8Astc6x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES)
			eCompressedSrgb8Alpha8Astc6x5x5Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6)
			eCompressedSrgb8Alpha8Astc6x6 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR)
			eCompressedSrgb8Alpha8Astc6x6Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES)
			eCompressedSrgb8Alpha8Astc6x6x5Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES)
			eCompressedSrgb8Alpha8Astc6x6x6Oes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5)
			eCompressedSrgb8Alpha8Astc8x5 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR)
			eCompressedSrgb8Alpha8Astc8x5Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6)
			eCompressedSrgb8Alpha8Astc8x6 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR)
			eCompressedSrgb8Alpha8Astc8x6Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8)
			eCompressedSrgb8Alpha8Astc8x8 = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR)
			eCompressedSrgb8Alpha8Astc8x8Khr = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC)
			eCompressedSrgb8Alpha8Etc2Eac = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC_OES)
			eCompressedSrgb8Alpha8Etc2EacOes = (GLenum)GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ETC2)
			eCompressedSrgb8Etc2 = (GLenum)GL_COMPRESSED_SRGB8_ETC2,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_ETC2_OES)
			eCompressedSrgb8Etc2Oes = (GLenum)GL_COMPRESSED_SRGB8_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2)
			eCompressedSrgb8PunchthroughAlpha1Etc2 = (GLenum)GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2,
		#endif
		#if defined(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES)
			eCompressedSrgb8PunchthroughAlpha1Etc2Oes = (GLenum)GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM)
			eCompressedSrgbAlphaBptcUnorm = (GLenum)GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB)
			eCompressedSrgbAlphaBptcUnormArb = (GLenum)GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT)
			eCompressedSrgbAlphaBptcUnormExt = (GLenum)GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT)
			eCompressedSrgbAlphaS3tcDxt1Ext = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV)
			eCompressedSrgbAlphaS3tcDxt1Nv = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT)
			eCompressedSrgbAlphaS3tcDxt3Ext = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV)
			eCompressedSrgbAlphaS3tcDxt3Nv = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT)
			eCompressedSrgbAlphaS3tcDxt5Ext = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV)
			eCompressedSrgbAlphaS3tcDxt5Nv = (GLenum)GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV,
		#endif
		#if defined(GL_COMPRESSED_SRGB_S3TC_DXT1_EXT)
			eCompressedSrgbS3tcDxt1Ext = (GLenum)GL_COMPRESSED_SRGB_S3TC_DXT1_EXT,
		#endif
		#if defined(GL_COMPRESSED_SRGB_S3TC_DXT1_NV)
			eCompressedSrgbS3tcDxt1Nv = (GLenum)GL_COMPRESSED_SRGB_S3TC_DXT1_NV,
		#endif
		#if defined(GL_DEPTH24_STENCIL8)
			eDepth24Stencil8 = (GLenum)GL_DEPTH24_STENCIL8,
		#endif
		#if defined(GL_DEPTH24_STENCIL8_EXT)
			eDepth24Stencil8Ext = (GLenum)GL_DEPTH24_STENCIL8_EXT,
		#endif
		#if defined(GL_DEPTH24_STENCIL8_OES)
			eDepth24Stencil8Oes = (GLenum)GL_DEPTH24_STENCIL8_OES,
		#endif
		#if defined(GL_DEPTH32F_STENCIL8)
			eDepth32fStencil8 = (GLenum)GL_DEPTH32F_STENCIL8,
		#endif
		#if defined(GL_DEPTH32F_STENCIL8_NV)
			eDepth32fStencil8Nv = (GLenum)GL_DEPTH32F_STENCIL8_NV,
		#endif
		#if defined(GL_DEPTH_COMPONENT16)
			eDepthComponent16 = (GLenum)GL_DEPTH_COMPONENT16,
		#endif
		#if defined(GL_DEPTH_COMPONENT16_ARB)
			eDepthComponent16Arb = (GLenum)GL_DEPTH_COMPONENT16_ARB,
		#endif
		#if defined(GL_DEPTH_COMPONENT16_OES)
			eDepthComponent16Oes = (GLenum)GL_DEPTH_COMPONENT16_OES,
		#endif
		#if defined(GL_DEPTH_COMPONENT16_SGIX)
			eDepthComponent16Sgix = (GLenum)GL_DEPTH_COMPONENT16_SGIX,
		#endif
		#if defined(GL_DEPTH_COMPONENT24)
			eDepthComponent24 = (GLenum)GL_DEPTH_COMPONENT24,
		#endif
		#if defined(GL_DEPTH_COMPONENT24_ARB)
			eDepthComponent24Arb = (GLenum)GL_DEPTH_COMPONENT24_ARB,
		#endif
		#if defined(GL_DEPTH_COMPONENT24_OES)
			eDepthComponent24Oes = (GLenum)GL_DEPTH_COMPONENT24_OES,
		#endif
		#if defined(GL_DEPTH_COMPONENT24_SGIX)
			eDepthComponent24Sgix = (GLenum)GL_DEPTH_COMPONENT24_SGIX,
		#endif
		#if defined(GL_DEPTH_COMPONENT32)
			eDepthComponent32 = (GLenum)GL_DEPTH_COMPONENT32,
		#endif
		#if defined(GL_DEPTH_COMPONENT32F)
			eDepthComponent32f = (GLenum)GL_DEPTH_COMPONENT32F,
		#endif
		#if defined(GL_DEPTH_COMPONENT32F_NV)
			eDepthComponent32fNv = (GLenum)GL_DEPTH_COMPONENT32F_NV,
		#endif
		#if defined(GL_DEPTH_COMPONENT32_ARB)
			eDepthComponent32Arb = (GLenum)GL_DEPTH_COMPONENT32_ARB,
		#endif
		#if defined(GL_DEPTH_COMPONENT32_OES)
			eDepthComponent32Oes = (GLenum)GL_DEPTH_COMPONENT32_OES,
		#endif
		#if defined(GL_DEPTH_COMPONENT32_SGIX)
			eDepthComponent32Sgix = (GLenum)GL_DEPTH_COMPONENT32_SGIX,
		#endif
		#if defined(GL_ETC1_RGB8_OES)
			eEtc1Rgb8Oes = (GLenum)GL_ETC1_RGB8_OES,
		#endif
		#if defined(GL_INTENSITY12)
			eIntensity12 = (GLenum)GL_INTENSITY12,
		#endif
		#if defined(GL_INTENSITY12_EXT)
			eIntensity12Ext = (GLenum)GL_INTENSITY12_EXT,
		#endif
		#if defined(GL_INTENSITY16)
			eIntensity16 = (GLenum)GL_INTENSITY16,
		#endif
		#if defined(GL_INTENSITY16I_EXT)
			eIntensity16iExt = (GLenum)GL_INTENSITY16I_EXT,
		#endif
		#if defined(GL_INTENSITY16UI_EXT)
			eIntensity16uiExt = (GLenum)GL_INTENSITY16UI_EXT,
		#endif
		#if defined(GL_INTENSITY16_EXT)
			eIntensity16Ext = (GLenum)GL_INTENSITY16_EXT,
		#endif
		#if defined(GL_INTENSITY32I_EXT)
			eIntensity32iExt = (GLenum)GL_INTENSITY32I_EXT,
		#endif
		#if defined(GL_INTENSITY32UI_EXT)
			eIntensity32uiExt = (GLenum)GL_INTENSITY32UI_EXT,
		#endif
		#if defined(GL_INTENSITY4)
			eIntensity4 = (GLenum)GL_INTENSITY4,
		#endif
		#if defined(GL_INTENSITY4_EXT)
			eIntensity4Ext = (GLenum)GL_INTENSITY4_EXT,
		#endif
		#if defined(GL_INTENSITY8)
			eIntensity8 = (GLenum)GL_INTENSITY8,
		#endif
		#if defined(GL_INTENSITY8I_EXT)
			eIntensity8iExt = (GLenum)GL_INTENSITY8I_EXT,
		#endif
		#if defined(GL_INTENSITY8UI_EXT)
			eIntensity8uiExt = (GLenum)GL_INTENSITY8UI_EXT,
		#endif
		#if defined(GL_INTENSITY8_EXT)
			eIntensity8Ext = (GLenum)GL_INTENSITY8_EXT,
		#endif
		#if defined(GL_LUMINANCE12)
			eLuminance12 = (GLenum)GL_LUMINANCE12,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA12)
			eLuminance12Alpha12 = (GLenum)GL_LUMINANCE12_ALPHA12,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA12_EXT)
			eLuminance12Alpha12Ext = (GLenum)GL_LUMINANCE12_ALPHA12_EXT,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA4)
			eLuminance12Alpha4 = (GLenum)GL_LUMINANCE12_ALPHA4,
		#endif
		#if defined(GL_LUMINANCE12_ALPHA4_EXT)
			eLuminance12Alpha4Ext = (GLenum)GL_LUMINANCE12_ALPHA4_EXT,
		#endif
		#if defined(GL_LUMINANCE12_EXT)
			eLuminance12Ext = (GLenum)GL_LUMINANCE12_EXT,
		#endif
		#if defined(GL_LUMINANCE16)
			eLuminance16 = (GLenum)GL_LUMINANCE16,
		#endif
		#if defined(GL_LUMINANCE16I_EXT)
			eLuminance16iExt = (GLenum)GL_LUMINANCE16I_EXT,
		#endif
		#if defined(GL_LUMINANCE16UI_EXT)
			eLuminance16uiExt = (GLenum)GL_LUMINANCE16UI_EXT,
		#endif
		#if defined(GL_LUMINANCE16_ALPHA16)
			eLuminance16Alpha16 = (GLenum)GL_LUMINANCE16_ALPHA16,
		#endif
		#if defined(GL_LUMINANCE16_ALPHA16_EXT)
			eLuminance16Alpha16Ext = (GLenum)GL_LUMINANCE16_ALPHA16_EXT,
		#endif
		#if defined(GL_LUMINANCE16_EXT)
			eLuminance16Ext = (GLenum)GL_LUMINANCE16_EXT,
		#endif
		#if defined(GL_LUMINANCE32I_EXT)
			eLuminance32iExt = (GLenum)GL_LUMINANCE32I_EXT,
		#endif
		#if defined(GL_LUMINANCE32UI_EXT)
			eLuminance32uiExt = (GLenum)GL_LUMINANCE32UI_EXT,
		#endif
		#if defined(GL_LUMINANCE4)
			eLuminance4 = (GLenum)GL_LUMINANCE4,
		#endif
		#if defined(GL_LUMINANCE4_ALPHA4)
			eLuminance4Alpha4 = (GLenum)GL_LUMINANCE4_ALPHA4,
		#endif
		#if defined(GL_LUMINANCE4_ALPHA4_EXT)
			eLuminance4Alpha4Ext = (GLenum)GL_LUMINANCE4_ALPHA4_EXT,
		#endif
		#if defined(GL_LUMINANCE4_ALPHA4_OES)
			eLuminance4Alpha4Oes = (GLenum)GL_LUMINANCE4_ALPHA4_OES,
		#endif
		#if defined(GL_LUMINANCE4_EXT)
			eLuminance4Ext = (GLenum)GL_LUMINANCE4_EXT,
		#endif
		#if defined(GL_LUMINANCE6_ALPHA2)
			eLuminance6Alpha2 = (GLenum)GL_LUMINANCE6_ALPHA2,
		#endif
		#if defined(GL_LUMINANCE6_ALPHA2_EXT)
			eLuminance6Alpha2Ext = (GLenum)GL_LUMINANCE6_ALPHA2_EXT,
		#endif
		#if defined(GL_LUMINANCE8)
			eLuminance8 = (GLenum)GL_LUMINANCE8,
		#endif
		#if defined(GL_LUMINANCE8I_EXT)
			eLuminance8iExt = (GLenum)GL_LUMINANCE8I_EXT,
		#endif
		#if defined(GL_LUMINANCE8UI_EXT)
			eLuminance8uiExt = (GLenum)GL_LUMINANCE8UI_EXT,
		#endif
		#if defined(GL_LUMINANCE8_ALPHA8)
			eLuminance8Alpha8 = (GLenum)GL_LUMINANCE8_ALPHA8,
		#endif
		#if defined(GL_LUMINANCE8_ALPHA8_EXT)
			eLuminance8Alpha8Ext = (GLenum)GL_LUMINANCE8_ALPHA8_EXT,
		#endif
		#if defined(GL_LUMINANCE8_ALPHA8_OES)
			eLuminance8Alpha8Oes = (GLenum)GL_LUMINANCE8_ALPHA8_OES,
		#endif
		#if defined(GL_LUMINANCE8_EXT)
			eLuminance8Ext = (GLenum)GL_LUMINANCE8_EXT,
		#endif
		#if defined(GL_LUMINANCE8_OES)
			eLuminance8Oes = (GLenum)GL_LUMINANCE8_OES,
		#endif
		#if defined(GL_LUMINANCE_ALPHA16I_EXT)
			eLuminanceAlpha16iExt = (GLenum)GL_LUMINANCE_ALPHA16I_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA16UI_EXT)
			eLuminanceAlpha16uiExt = (GLenum)GL_LUMINANCE_ALPHA16UI_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA32I_EXT)
			eLuminanceAlpha32iExt = (GLenum)GL_LUMINANCE_ALPHA32I_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA32UI_EXT)
			eLuminanceAlpha32uiExt = (GLenum)GL_LUMINANCE_ALPHA32UI_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA8I_EXT)
			eLuminanceAlpha8iExt = (GLenum)GL_LUMINANCE_ALPHA8I_EXT,
		#endif
		#if defined(GL_LUMINANCE_ALPHA8UI_EXT)
			eLuminanceAlpha8uiExt = (GLenum)GL_LUMINANCE_ALPHA8UI_EXT,
		#endif
		#if defined(GL_R11F_G11F_B10F)
			eR11fG11fB10f = (GLenum)GL_R11F_G11F_B10F,
		#endif
		#if defined(GL_R11F_G11F_B10F_APPLE)
			eR11fG11fB10fApple = (GLenum)GL_R11F_G11F_B10F_APPLE,
		#endif
		#if defined(GL_R11F_G11F_B10F_EXT)
			eR11fG11fB10fExt = (GLenum)GL_R11F_G11F_B10F_EXT,
		#endif
		#if defined(GL_R16)
			eR16 = (GLenum)GL_R16,
		#endif
		#if defined(GL_R16F)
			eR16f = (GLenum)GL_R16F,
		#endif
		#if defined(GL_R16F_EXT)
			eR16fExt = (GLenum)GL_R16F_EXT,
		#endif
		#if defined(GL_R16I)
			eR16i = (GLenum)GL_R16I,
		#endif
		#if defined(GL_R16UI)
			eR16ui = (GLenum)GL_R16UI,
		#endif
		#if defined(GL_R16_EXT)
			eR16Ext = (GLenum)GL_R16_EXT,
		#endif
		#if defined(GL_R16_SNORM)
			eR16Snorm = (GLenum)GL_R16_SNORM,
		#endif
		#if defined(GL_R16_SNORM_EXT)
			eR16SnormExt = (GLenum)GL_R16_SNORM_EXT,
		#endif
		#if defined(GL_R32F)
			eR32f = (GLenum)GL_R32F,
		#endif
		#if defined(GL_R32F_EXT)
			eR32fExt = (GLenum)GL_R32F_EXT,
		#endif
		#if defined(GL_R32I)
			eR32i = (GLenum)GL_R32I,
		#endif
		#if defined(GL_R32UI)
			eR32ui = (GLenum)GL_R32UI,
		#endif
		#if defined(GL_R3_G3_B2)
			eR3G3B2 = (GLenum)GL_R3_G3_B2,
		#endif
		#if defined(GL_R8)
			eR8 = (GLenum)GL_R8,
		#endif
		#if defined(GL_R8I)
			eR8i = (GLenum)GL_R8I,
		#endif
		#if defined(GL_R8UI)
			eR8ui = (GLenum)GL_R8UI,
		#endif
		#if defined(GL_R8_EXT)
			eR8Ext = (GLenum)GL_R8_EXT,
		#endif
		#if defined(GL_R8_SNORM)
			eR8Snorm = (GLenum)GL_R8_SNORM,
		#endif
		#if defined(GL_RG16)
			eRg16 = (GLenum)GL_RG16,
		#endif
		#if defined(GL_RG16F)
			eRg16f = (GLenum)GL_RG16F,
		#endif
		#if defined(GL_RG16F_EXT)
			eRg16fExt = (GLenum)GL_RG16F_EXT,
		#endif
		#if defined(GL_RG16I)
			eRg16i = (GLenum)GL_RG16I,
		#endif
		#if defined(GL_RG16UI)
			eRg16ui = (GLenum)GL_RG16UI,
		#endif
		#if defined(GL_RG16_EXT)
			eRg16Ext = (GLenum)GL_RG16_EXT,
		#endif
		#if defined(GL_RG16_SNORM)
			eRg16Snorm = (GLenum)GL_RG16_SNORM,
		#endif
		#if defined(GL_RG16_SNORM_EXT)
			eRg16SnormExt = (GLenum)GL_RG16_SNORM_EXT,
		#endif
		#if defined(GL_RG32F)
			eRg32f = (GLenum)GL_RG32F,
		#endif
		#if defined(GL_RG32F_EXT)
			eRg32fExt = (GLenum)GL_RG32F_EXT,
		#endif
		#if defined(GL_RG32I)
			eRg32i = (GLenum)GL_RG32I,
		#endif
		#if defined(GL_RG32UI)
			eRg32ui = (GLenum)GL_RG32UI,
		#endif
		#if defined(GL_RG8)
			eRg8 = (GLenum)GL_RG8,
		#endif
		#if defined(GL_RG8I)
			eRg8i = (GLenum)GL_RG8I,
		#endif
		#if defined(GL_RG8UI)
			eRg8ui = (GLenum)GL_RG8UI,
		#endif
		#if defined(GL_RG8_EXT)
			eRg8Ext = (GLenum)GL_RG8_EXT,
		#endif
		#if defined(GL_RG8_SNORM)
			eRg8Snorm = (GLenum)GL_RG8_SNORM,
		#endif
		#if defined(GL_RGB10)
			eRgb10 = (GLenum)GL_RGB10,
		#endif
		#if defined(GL_RGB10_A2)
			eRgb10A2 = (GLenum)GL_RGB10_A2,
		#endif
		#if defined(GL_RGB10_A2UI)
			eRgb10A2ui = (GLenum)GL_RGB10_A2UI,
		#endif
		#if defined(GL_RGB10_A2_EXT)
			eRgb10A2Ext = (GLenum)GL_RGB10_A2_EXT,
		#endif
		#if defined(GL_RGB10_EXT)
			eRgb10Ext = (GLenum)GL_RGB10_EXT,
		#endif
		#if defined(GL_RGB12)
			eRgb12 = (GLenum)GL_RGB12,
		#endif
		#if defined(GL_RGB12_EXT)
			eRgb12Ext = (GLenum)GL_RGB12_EXT,
		#endif
		#if defined(GL_RGB16)
			eRgb16 = (GLenum)GL_RGB16,
		#endif
		#if defined(GL_RGB16F)
			eRgb16f = (GLenum)GL_RGB16F,
		#endif
		#if defined(GL_RGB16F_ARB)
			eRgb16fArb = (GLenum)GL_RGB16F_ARB,
		#endif
		#if defined(GL_RGB16F_EXT)
			eRgb16fExt = (GLenum)GL_RGB16F_EXT,
		#endif
		#if defined(GL_RGB16I)
			eRgb16i = (GLenum)GL_RGB16I,
		#endif
		#if defined(GL_RGB16I_EXT)
			eRgb16iExt = (GLenum)GL_RGB16I_EXT,
		#endif
		#if defined(GL_RGB16UI)
			eRgb16ui = (GLenum)GL_RGB16UI,
		#endif
		#if defined(GL_RGB16UI_EXT)
			eRgb16uiExt = (GLenum)GL_RGB16UI_EXT,
		#endif
		#if defined(GL_RGB16_EXT)
			eRgb16Ext = (GLenum)GL_RGB16_EXT,
		#endif
		#if defined(GL_RGB16_SNORM)
			eRgb16Snorm = (GLenum)GL_RGB16_SNORM,
		#endif
		#if defined(GL_RGB16_SNORM_EXT)
			eRgb16SnormExt = (GLenum)GL_RGB16_SNORM_EXT,
		#endif
		#if defined(GL_RGB2_EXT)
			eRgb2Ext = (GLenum)GL_RGB2_EXT,
		#endif
		#if defined(GL_RGB32F)
			eRgb32f = (GLenum)GL_RGB32F,
		#endif
		#if defined(GL_RGB32F_ARB)
			eRgb32fArb = (GLenum)GL_RGB32F_ARB,
		#endif
		#if defined(GL_RGB32F_EXT)
			eRgb32fExt = (GLenum)GL_RGB32F_EXT,
		#endif
		#if defined(GL_RGB32I)
			eRgb32i = (GLenum)GL_RGB32I,
		#endif
		#if defined(GL_RGB32I_EXT)
			eRgb32iExt = (GLenum)GL_RGB32I_EXT,
		#endif
		#if defined(GL_RGB32UI)
			eRgb32ui = (GLenum)GL_RGB32UI,
		#endif
		#if defined(GL_RGB32UI_EXT)
			eRgb32uiExt = (GLenum)GL_RGB32UI_EXT,
		#endif
		#if defined(GL_RGB4)
			eRgb4 = (GLenum)GL_RGB4,
		#endif
		#if defined(GL_RGB4_EXT)
			eRgb4Ext = (GLenum)GL_RGB4_EXT,
		#endif
		#if defined(GL_RGB5)
			eRgb5 = (GLenum)GL_RGB5,
		#endif
		#if defined(GL_RGB565)
			eRgb565 = (GLenum)GL_RGB565,
		#endif
		#if defined(GL_RGB565_OES)
			eRgb565Oes = (GLenum)GL_RGB565_OES,
		#endif
		#if defined(GL_RGB5_A1)
			eRgb5A1 = (GLenum)GL_RGB5_A1,
		#endif
		#if defined(GL_RGB5_A1_EXT)
			eRgb5A1Ext = (GLenum)GL_RGB5_A1_EXT,
		#endif
		#if defined(GL_RGB5_A1_OES)
			eRgb5A1Oes = (GLenum)GL_RGB5_A1_OES,
		#endif
		#if defined(GL_RGB5_EXT)
			eRgb5Ext = (GLenum)GL_RGB5_EXT,
		#endif
		#if defined(GL_RGB8)
			eRgb8 = (GLenum)GL_RGB8,
		#endif
		#if defined(GL_RGB8I)
			eRgb8i = (GLenum)GL_RGB8I,
		#endif
		#if defined(GL_RGB8I_EXT)
			eRgb8iExt = (GLenum)GL_RGB8I_EXT,
		#endif
		#if defined(GL_RGB8UI)
			eRgb8ui = (GLenum)GL_RGB8UI,
		#endif
		#if defined(GL_RGB8UI_EXT)
			eRgb8uiExt = (GLenum)GL_RGB8UI_EXT,
		#endif
		#if defined(GL_RGB8_EXT)
			eRgb8Ext = (GLenum)GL_RGB8_EXT,
		#endif
		#if defined(GL_RGB8_OES)
			eRgb8Oes = (GLenum)GL_RGB8_OES,
		#endif
		#if defined(GL_RGB8_SNORM)
			eRgb8Snorm = (GLenum)GL_RGB8_SNORM,
		#endif
		#if defined(GL_RGB9_E5)
			eRgb9E5 = (GLenum)GL_RGB9_E5,
		#endif
		#if defined(GL_RGB9_E5_APPLE)
			eRgb9E5Apple = (GLenum)GL_RGB9_E5_APPLE,
		#endif
		#if defined(GL_RGB9_E5_EXT)
			eRgb9E5Ext = (GLenum)GL_RGB9_E5_EXT,
		#endif
		#if defined(GL_RGBA12)
			eRgba12 = (GLenum)GL_RGBA12,
		#endif
		#if defined(GL_RGBA12_EXT)
			eRgba12Ext = (GLenum)GL_RGBA12_EXT,
		#endif
		#if defined(GL_RGBA16)
			eRgba16 = (GLenum)GL_RGBA16,
		#endif
		#if defined(GL_RGBA16F)
			eRgba16f = (GLenum)GL_RGBA16F,
		#endif
		#if defined(GL_RGBA16F_ARB)
			eRgba16fArb = (GLenum)GL_RGBA16F_ARB,
		#endif
		#if defined(GL_RGBA16F_EXT)
			eRgba16fExt = (GLenum)GL_RGBA16F_EXT,
		#endif
		#if defined(GL_RGBA16I)
			eRgba16i = (GLenum)GL_RGBA16I,
		#endif
		#if defined(GL_RGBA16I_EXT)
			eRgba16iExt = (GLenum)GL_RGBA16I_EXT,
		#endif
		#if defined(GL_RGBA16UI)
			eRgba16ui = (GLenum)GL_RGBA16UI,
		#endif
		#if defined(GL_RGBA16UI_EXT)
			eRgba16uiExt = (GLenum)GL_RGBA16UI_EXT,
		#endif
		#if defined(GL_RGBA16_EXT)
			eRgba16Ext = (GLenum)GL_RGBA16_EXT,
		#endif
		#if defined(GL_RGBA16_SNORM)
			eRgba16Snorm = (GLenum)GL_RGBA16_SNORM,
		#endif
		#if defined(GL_RGBA16_SNORM_EXT)
			eRgba16SnormExt = (GLenum)GL_RGBA16_SNORM_EXT,
		#endif
		#if defined(GL_RGBA2)
			eRgba2 = (GLenum)GL_RGBA2,
		#endif
		#if defined(GL_RGBA2_EXT)
			eRgba2Ext = (GLenum)GL_RGBA2_EXT,
		#endif
		#if defined(GL_RGBA32F)
			eRgba32f = (GLenum)GL_RGBA32F,
		#endif
		#if defined(GL_RGBA32F_ARB)
			eRgba32fArb = (GLenum)GL_RGBA32F_ARB,
		#endif
		#if defined(GL_RGBA32F_EXT)
			eRgba32fExt = (GLenum)GL_RGBA32F_EXT,
		#endif
		#if defined(GL_RGBA32I)
			eRgba32i = (GLenum)GL_RGBA32I,
		#endif
		#if defined(GL_RGBA32I_EXT)
			eRgba32iExt = (GLenum)GL_RGBA32I_EXT,
		#endif
		#if defined(GL_RGBA32UI)
			eRgba32ui = (GLenum)GL_RGBA32UI,
		#endif
		#if defined(GL_RGBA32UI_EXT)
			eRgba32uiExt = (GLenum)GL_RGBA32UI_EXT,
		#endif
		#if defined(GL_RGBA4)
			eRgba4 = (GLenum)GL_RGBA4,
		#endif
		#if defined(GL_RGBA4_EXT)
			eRgba4Ext = (GLenum)GL_RGBA4_EXT,
		#endif
		#if defined(GL_RGBA4_OES)
			eRgba4Oes = (GLenum)GL_RGBA4_OES,
		#endif
		#if defined(GL_RGBA8)
			eRgba8 = (GLenum)GL_RGBA8,
		#endif
		#if defined(GL_RGBA8I)
			eRgba8i = (GLenum)GL_RGBA8I,
		#endif
		#if defined(GL_RGBA8I_EXT)
			eRgba8iExt = (GLenum)GL_RGBA8I_EXT,
		#endif
		#if defined(GL_RGBA8UI)
			eRgba8ui = (GLenum)GL_RGBA8UI,
		#endif
		#if defined(GL_RGBA8UI_EXT)
			eRgba8uiExt = (GLenum)GL_RGBA8UI_EXT,
		#endif
		#if defined(GL_RGBA8_EXT)
			eRgba8Ext = (GLenum)GL_RGBA8_EXT,
		#endif
		#if defined(GL_RGBA8_OES)
			eRgba8Oes = (GLenum)GL_RGBA8_OES,
		#endif
		#if defined(GL_RGBA8_SNORM)
			eRgba8Snorm = (GLenum)GL_RGBA8_SNORM,
		#endif
		#if defined(GL_SRGB8)
			eSrgb8 = (GLenum)GL_SRGB8,
		#endif
		#if defined(GL_SRGB8_ALPHA8)
			eSrgb8Alpha8 = (GLenum)GL_SRGB8_ALPHA8,
		#endif
		#if defined(GL_SRGB8_ALPHA8_EXT)
			eSrgb8Alpha8Ext = (GLenum)GL_SRGB8_ALPHA8_EXT,
		#endif
		#if defined(GL_SRGB8_EXT)
			eSrgb8Ext = (GLenum)GL_SRGB8_EXT,
		#endif
		#if defined(GL_SRGB8_NV)
			eSrgb8Nv = (GLenum)GL_SRGB8_NV,
		#endif
		#if defined(GL_STENCIL_INDEX1)
			eStencilIndex1 = (GLenum)GL_STENCIL_INDEX1,
		#endif
		#if defined(GL_STENCIL_INDEX16)
			eStencilIndex16 = (GLenum)GL_STENCIL_INDEX16,
		#endif
		#if defined(GL_STENCIL_INDEX16_EXT)
			eStencilIndex16Ext = (GLenum)GL_STENCIL_INDEX16_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX1_EXT)
			eStencilIndex1Ext = (GLenum)GL_STENCIL_INDEX1_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX1_OES)
			eStencilIndex1Oes = (GLenum)GL_STENCIL_INDEX1_OES,
		#endif
		#if defined(GL_STENCIL_INDEX4)
			eStencilIndex4 = (GLenum)GL_STENCIL_INDEX4,
		#endif
		#if defined(GL_STENCIL_INDEX4_EXT)
			eStencilIndex4Ext = (GLenum)GL_STENCIL_INDEX4_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX4_OES)
			eStencilIndex4Oes = (GLenum)GL_STENCIL_INDEX4_OES,
		#endif
		#if defined(GL_STENCIL_INDEX8)
			eStencilIndex8 = (GLenum)GL_STENCIL_INDEX8,
		#endif
		#if defined(GL_STENCIL_INDEX8_EXT)
			eStencilIndex8Ext = (GLenum)GL_STENCIL_INDEX8_EXT,
		#endif
		#if defined(GL_STENCIL_INDEX8_OES)
			eStencilIndex8Oes = (GLenum)GL_STENCIL_INDEX8_OES,
		#endif
	};

	enum class InterleavedArrayFormat : GLenum {
		#if defined(GL_C3F_V3F)
			eC3fV3f = (GLenum)GL_C3F_V3F,
		#endif
		#if defined(GL_C4F_N3F_V3F)
			eC4fN3fV3f = (GLenum)GL_C4F_N3F_V3F,
		#endif
		#if defined(GL_C4UB_V2F)
			eC4ubV2f = (GLenum)GL_C4UB_V2F,
		#endif
		#if defined(GL_C4UB_V3F)
			eC4ubV3f = (GLenum)GL_C4UB_V3F,
		#endif
		#if defined(GL_N3F_V3F)
			eN3fV3f = (GLenum)GL_N3F_V3F,
		#endif
		#if defined(GL_T2F_C3F_V3F)
			eT2fC3fV3f = (GLenum)GL_T2F_C3F_V3F,
		#endif
		#if defined(GL_T2F_C4F_N3F_V3F)
			eT2fC4fN3fV3f = (GLenum)GL_T2F_C4F_N3F_V3F,
		#endif
		#if defined(GL_T2F_C4UB_V3F)
			eT2fC4ubV3f = (GLenum)GL_T2F_C4UB_V3F,
		#endif
		#if defined(GL_T2F_N3F_V3F)
			eT2fN3fV3f = (GLenum)GL_T2F_N3F_V3F,
		#endif
		#if defined(GL_T2F_V3F)
			eT2fV3f = (GLenum)GL_T2F_V3F,
		#endif
		#if defined(GL_T4F_C4F_N3F_V4F)
			eT4fC4fN3fV4f = (GLenum)GL_T4F_C4F_N3F_V4F,
		#endif
		#if defined(GL_T4F_V4F)
			eT4fV4f = (GLenum)GL_T4F_V4F,
		#endif
		#if defined(GL_V2F)
			eV2f = (GLenum)GL_V2F,
		#endif
		#if defined(GL_V3F)
			eV3f = (GLenum)GL_V3F,
		#endif
	};

	enum class ClipPlaneName : GLenum {
		#if defined(GL_CLIP_DISTANCE0)
			eClipDistance0 = (GLenum)GL_CLIP_DISTANCE0,
		#endif
		#if defined(GL_CLIP_DISTANCE1)
			eClipDistance1 = (GLenum)GL_CLIP_DISTANCE1,
		#endif
		#if defined(GL_CLIP_DISTANCE2)
			eClipDistance2 = (GLenum)GL_CLIP_DISTANCE2,
		#endif
		#if defined(GL_CLIP_DISTANCE3)
			eClipDistance3 = (GLenum)GL_CLIP_DISTANCE3,
		#endif
		#if defined(GL_CLIP_DISTANCE4)
			eClipDistance4 = (GLenum)GL_CLIP_DISTANCE4,
		#endif
		#if defined(GL_CLIP_DISTANCE5)
			eClipDistance5 = (GLenum)GL_CLIP_DISTANCE5,
		#endif
		#if defined(GL_CLIP_DISTANCE6)
			eClipDistance6 = (GLenum)GL_CLIP_DISTANCE6,
		#endif
		#if defined(GL_CLIP_DISTANCE7)
			eClipDistance7 = (GLenum)GL_CLIP_DISTANCE7,
		#endif
		#if defined(GL_CLIP_PLANE0)
			eClipPlane0 = (GLenum)GL_CLIP_PLANE0,
		#endif
		#if defined(GL_CLIP_PLANE1)
			eClipPlane1 = (GLenum)GL_CLIP_PLANE1,
		#endif
		#if defined(GL_CLIP_PLANE2)
			eClipPlane2 = (GLenum)GL_CLIP_PLANE2,
		#endif
		#if defined(GL_CLIP_PLANE3)
			eClipPlane3 = (GLenum)GL_CLIP_PLANE3,
		#endif
		#if defined(GL_CLIP_PLANE4)
			eClipPlane4 = (GLenum)GL_CLIP_PLANE4,
		#endif
		#if defined(GL_CLIP_PLANE5)
			eClipPlane5 = (GLenum)GL_CLIP_PLANE5,
		#endif
	};

	enum class LightName : GLenum {
		#if defined(GL_FRAGMENT_LIGHT0_SGIX)
			eFragmentLight0Sgix = (GLenum)GL_FRAGMENT_LIGHT0_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT1_SGIX)
			eFragmentLight1Sgix = (GLenum)GL_FRAGMENT_LIGHT1_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT2_SGIX)
			eFragmentLight2Sgix = (GLenum)GL_FRAGMENT_LIGHT2_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT3_SGIX)
			eFragmentLight3Sgix = (GLenum)GL_FRAGMENT_LIGHT3_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT4_SGIX)
			eFragmentLight4Sgix = (GLenum)GL_FRAGMENT_LIGHT4_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT5_SGIX)
			eFragmentLight5Sgix = (GLenum)GL_FRAGMENT_LIGHT5_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT6_SGIX)
			eFragmentLight6Sgix = (GLenum)GL_FRAGMENT_LIGHT6_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT7_SGIX)
			eFragmentLight7Sgix = (GLenum)GL_FRAGMENT_LIGHT7_SGIX,
		#endif
		#if defined(GL_LIGHT0)
			eLight0 = (GLenum)GL_LIGHT0,
		#endif
		#if defined(GL_LIGHT1)
			eLight1 = (GLenum)GL_LIGHT1,
		#endif
		#if defined(GL_LIGHT2)
			eLight2 = (GLenum)GL_LIGHT2,
		#endif
		#if defined(GL_LIGHT3)
			eLight3 = (GLenum)GL_LIGHT3,
		#endif
		#if defined(GL_LIGHT4)
			eLight4 = (GLenum)GL_LIGHT4,
		#endif
		#if defined(GL_LIGHT5)
			eLight5 = (GLenum)GL_LIGHT5,
		#endif
		#if defined(GL_LIGHT6)
			eLight6 = (GLenum)GL_LIGHT6,
		#endif
		#if defined(GL_LIGHT7)
			eLight7 = (GLenum)GL_LIGHT7,
		#endif
	};

	enum class BlendEquationModeEXT : GLenum {
		#if defined(GL_ALPHA_MAX_SGIX)
			eAlphaMaxSgix = (GLenum)GL_ALPHA_MAX_SGIX,
		#endif
		#if defined(GL_ALPHA_MIN_SGIX)
			eAlphaMinSgix = (GLenum)GL_ALPHA_MIN_SGIX,
		#endif
		#if defined(GL_FUNC_ADD)
			eFuncAdd = (GLenum)GL_FUNC_ADD,
		#endif
		#if defined(GL_FUNC_ADD_EXT)
			eFuncAddExt = (GLenum)GL_FUNC_ADD_EXT,
		#endif
		#if defined(GL_FUNC_REVERSE_SUBTRACT)
			eFuncReverseSubtract = (GLenum)GL_FUNC_REVERSE_SUBTRACT,
		#endif
		#if defined(GL_FUNC_REVERSE_SUBTRACT_EXT)
			eFuncReverseSubtractExt = (GLenum)GL_FUNC_REVERSE_SUBTRACT_EXT,
		#endif
		#if defined(GL_FUNC_SUBTRACT)
			eFuncSubtract = (GLenum)GL_FUNC_SUBTRACT,
		#endif
		#if defined(GL_FUNC_SUBTRACT_EXT)
			eFuncSubtractExt = (GLenum)GL_FUNC_SUBTRACT_EXT,
		#endif
		#if defined(GL_MAX)
			eMax = (GLenum)GL_MAX,
		#endif
		#if defined(GL_MAX_EXT)
			eMaxExt = (GLenum)GL_MAX_EXT,
		#endif
		#if defined(GL_MIN)
			eMin = (GLenum)GL_MIN,
		#endif
		#if defined(GL_MIN_EXT)
			eMinExt = (GLenum)GL_MIN_EXT,
		#endif
	};

	enum class ConvolutionTarget : GLenum {
		#if defined(GL_CONVOLUTION_1D)
			eConvolution1d = (GLenum)GL_CONVOLUTION_1D,
		#endif
		#if defined(GL_CONVOLUTION_2D)
			eConvolution2d = (GLenum)GL_CONVOLUTION_2D,
		#endif
	};

	enum class ConvolutionTargetEXT : GLenum {
		#if defined(GL_CONVOLUTION_1D)
			eConvolution1d = (GLenum)GL_CONVOLUTION_1D,
		#endif
		#if defined(GL_CONVOLUTION_1D_EXT)
			eConvolution1dExt = (GLenum)GL_CONVOLUTION_1D_EXT,
		#endif
		#if defined(GL_CONVOLUTION_2D)
			eConvolution2d = (GLenum)GL_CONVOLUTION_2D,
		#endif
		#if defined(GL_CONVOLUTION_2D_EXT)
			eConvolution2dExt = (GLenum)GL_CONVOLUTION_2D_EXT,
		#endif
	};

	enum class SeparableTarget : GLenum {
		#if defined(GL_SEPARABLE_2D)
			eSeparable2d = (GLenum)GL_SEPARABLE_2D,
		#endif
	};

	enum class SeparableTargetEXT : GLenum {
		#if defined(GL_SEPARABLE_2D)
			eSeparable2d = (GLenum)GL_SEPARABLE_2D,
		#endif
		#if defined(GL_SEPARABLE_2D_EXT)
			eSeparable2dExt = (GLenum)GL_SEPARABLE_2D_EXT,
		#endif
	};

	enum class ConvolutionParameter : GLenum {
		#if defined(GL_CONVOLUTION_BORDER_COLOR)
			eConvolutionBorderColor = (GLenum)GL_CONVOLUTION_BORDER_COLOR,
		#endif
		#if defined(GL_CONVOLUTION_BORDER_MODE)
			eConvolutionBorderMode = (GLenum)GL_CONVOLUTION_BORDER_MODE,
		#endif
		#if defined(GL_CONVOLUTION_BORDER_MODE_EXT)
			eConvolutionBorderModeExt = (GLenum)GL_CONVOLUTION_BORDER_MODE_EXT,
		#endif
		#if defined(GL_CONVOLUTION_FILTER_BIAS)
			eConvolutionFilterBias = (GLenum)GL_CONVOLUTION_FILTER_BIAS,
		#endif
		#if defined(GL_CONVOLUTION_FILTER_BIAS_EXT)
			eConvolutionFilterBiasExt = (GLenum)GL_CONVOLUTION_FILTER_BIAS_EXT,
		#endif
		#if defined(GL_CONVOLUTION_FILTER_SCALE)
			eConvolutionFilterScale = (GLenum)GL_CONVOLUTION_FILTER_SCALE,
		#endif
		#if defined(GL_CONVOLUTION_FILTER_SCALE_EXT)
			eConvolutionFilterScaleExt = (GLenum)GL_CONVOLUTION_FILTER_SCALE_EXT,
		#endif
		#if defined(GL_CONVOLUTION_FORMAT)
			eConvolutionFormat = (GLenum)GL_CONVOLUTION_FORMAT,
		#endif
		#if defined(GL_CONVOLUTION_FORMAT_EXT)
			eConvolutionFormatExt = (GLenum)GL_CONVOLUTION_FORMAT_EXT,
		#endif
		#if defined(GL_CONVOLUTION_HEIGHT)
			eConvolutionHeight = (GLenum)GL_CONVOLUTION_HEIGHT,
		#endif
		#if defined(GL_CONVOLUTION_HEIGHT_EXT)
			eConvolutionHeightExt = (GLenum)GL_CONVOLUTION_HEIGHT_EXT,
		#endif
		#if defined(GL_CONVOLUTION_WIDTH)
			eConvolutionWidth = (GLenum)GL_CONVOLUTION_WIDTH,
		#endif
		#if defined(GL_CONVOLUTION_WIDTH_EXT)
			eConvolutionWidthExt = (GLenum)GL_CONVOLUTION_WIDTH_EXT,
		#endif
		#if defined(GL_MAX_CONVOLUTION_HEIGHT)
			eMaxConvolutionHeight = (GLenum)GL_MAX_CONVOLUTION_HEIGHT,
		#endif
		#if defined(GL_MAX_CONVOLUTION_HEIGHT_EXT)
			eMaxConvolutionHeightExt = (GLenum)GL_MAX_CONVOLUTION_HEIGHT_EXT,
		#endif
		#if defined(GL_MAX_CONVOLUTION_WIDTH)
			eMaxConvolutionWidth = (GLenum)GL_MAX_CONVOLUTION_WIDTH,
		#endif
		#if defined(GL_MAX_CONVOLUTION_WIDTH_EXT)
			eMaxConvolutionWidthExt = (GLenum)GL_MAX_CONVOLUTION_WIDTH_EXT,
		#endif
	};

	enum class ConvolutionBorderModeEXT : GLenum {
		#if defined(GL_REDUCE)
			eReduce = (GLenum)GL_REDUCE,
		#endif
		#if defined(GL_REDUCE_EXT)
			eReduceExt = (GLenum)GL_REDUCE_EXT,
		#endif
	};

	enum class HistogramTarget : GLenum {
		#if defined(GL_HISTOGRAM)
			eHistogram = (GLenum)GL_HISTOGRAM,
		#endif
		#if defined(GL_PROXY_HISTOGRAM)
			eProxyHistogram = (GLenum)GL_PROXY_HISTOGRAM,
		#endif
	};

	enum class HistogramTargetEXT : GLenum {
		#if defined(GL_HISTOGRAM)
			eHistogram = (GLenum)GL_HISTOGRAM,
		#endif
		#if defined(GL_HISTOGRAM_EXT)
			eHistogramExt = (GLenum)GL_HISTOGRAM_EXT,
		#endif
		#if defined(GL_PROXY_HISTOGRAM)
			eProxyHistogram = (GLenum)GL_PROXY_HISTOGRAM,
		#endif
		#if defined(GL_PROXY_HISTOGRAM_EXT)
			eProxyHistogramExt = (GLenum)GL_PROXY_HISTOGRAM_EXT,
		#endif
	};

	enum class GetHistogramParameterPNameEXT : GLenum {
		#if defined(GL_HISTOGRAM_ALPHA_SIZE)
			eHistogramAlphaSize = (GLenum)GL_HISTOGRAM_ALPHA_SIZE,
		#endif
		#if defined(GL_HISTOGRAM_ALPHA_SIZE_EXT)
			eHistogramAlphaSizeExt = (GLenum)GL_HISTOGRAM_ALPHA_SIZE_EXT,
		#endif
		#if defined(GL_HISTOGRAM_BLUE_SIZE)
			eHistogramBlueSize = (GLenum)GL_HISTOGRAM_BLUE_SIZE,
		#endif
		#if defined(GL_HISTOGRAM_BLUE_SIZE_EXT)
			eHistogramBlueSizeExt = (GLenum)GL_HISTOGRAM_BLUE_SIZE_EXT,
		#endif
		#if defined(GL_HISTOGRAM_FORMAT)
			eHistogramFormat = (GLenum)GL_HISTOGRAM_FORMAT,
		#endif
		#if defined(GL_HISTOGRAM_FORMAT_EXT)
			eHistogramFormatExt = (GLenum)GL_HISTOGRAM_FORMAT_EXT,
		#endif
		#if defined(GL_HISTOGRAM_GREEN_SIZE)
			eHistogramGreenSize = (GLenum)GL_HISTOGRAM_GREEN_SIZE,
		#endif
		#if defined(GL_HISTOGRAM_GREEN_SIZE_EXT)
			eHistogramGreenSizeExt = (GLenum)GL_HISTOGRAM_GREEN_SIZE_EXT,
		#endif
		#if defined(GL_HISTOGRAM_LUMINANCE_SIZE)
			eHistogramLuminanceSize = (GLenum)GL_HISTOGRAM_LUMINANCE_SIZE,
		#endif
		#if defined(GL_HISTOGRAM_LUMINANCE_SIZE_EXT)
			eHistogramLuminanceSizeExt = (GLenum)GL_HISTOGRAM_LUMINANCE_SIZE_EXT,
		#endif
		#if defined(GL_HISTOGRAM_RED_SIZE)
			eHistogramRedSize = (GLenum)GL_HISTOGRAM_RED_SIZE,
		#endif
		#if defined(GL_HISTOGRAM_RED_SIZE_EXT)
			eHistogramRedSizeExt = (GLenum)GL_HISTOGRAM_RED_SIZE_EXT,
		#endif
		#if defined(GL_HISTOGRAM_SINK)
			eHistogramSink = (GLenum)GL_HISTOGRAM_SINK,
		#endif
		#if defined(GL_HISTOGRAM_SINK_EXT)
			eHistogramSinkExt = (GLenum)GL_HISTOGRAM_SINK_EXT,
		#endif
		#if defined(GL_HISTOGRAM_WIDTH)
			eHistogramWidth = (GLenum)GL_HISTOGRAM_WIDTH,
		#endif
		#if defined(GL_HISTOGRAM_WIDTH_EXT)
			eHistogramWidthExt = (GLenum)GL_HISTOGRAM_WIDTH_EXT,
		#endif
	};

	enum class MinmaxTarget : GLenum {
		#if defined(GL_MINMAX)
			eMinmax = (GLenum)GL_MINMAX,
		#endif
	};

	enum class MinmaxTargetEXT : GLenum {
		#if defined(GL_MINMAX)
			eMinmax = (GLenum)GL_MINMAX,
		#endif
		#if defined(GL_MINMAX_EXT)
			eMinmaxExt = (GLenum)GL_MINMAX_EXT,
		#endif
	};

	enum class GetMinmaxParameterPNameEXT : GLenum {
		#if defined(GL_MINMAX_FORMAT)
			eMinmaxFormat = (GLenum)GL_MINMAX_FORMAT,
		#endif
		#if defined(GL_MINMAX_FORMAT_EXT)
			eMinmaxFormatExt = (GLenum)GL_MINMAX_FORMAT_EXT,
		#endif
		#if defined(GL_MINMAX_SINK)
			eMinmaxSink = (GLenum)GL_MINMAX_SINK,
		#endif
		#if defined(GL_MINMAX_SINK_EXT)
			eMinmaxSinkExt = (GLenum)GL_MINMAX_SINK_EXT,
		#endif
	};

	enum class SamplePatternSGIS : GLenum {
		#if defined(GL_1PASS_EXT)
			e1passExt = (GLenum)GL_1PASS_EXT,
		#endif
		#if defined(GL_1PASS_SGIS)
			e1passSgis = (GLenum)GL_1PASS_SGIS,
		#endif
		#if defined(GL_2PASS_0_EXT)
			e2pass0Ext = (GLenum)GL_2PASS_0_EXT,
		#endif
		#if defined(GL_2PASS_0_SGIS)
			e2pass0Sgis = (GLenum)GL_2PASS_0_SGIS,
		#endif
		#if defined(GL_2PASS_1_EXT)
			e2pass1Ext = (GLenum)GL_2PASS_1_EXT,
		#endif
		#if defined(GL_2PASS_1_SGIS)
			e2pass1Sgis = (GLenum)GL_2PASS_1_SGIS,
		#endif
		#if defined(GL_4PASS_0_EXT)
			e4pass0Ext = (GLenum)GL_4PASS_0_EXT,
		#endif
		#if defined(GL_4PASS_0_SGIS)
			e4pass0Sgis = (GLenum)GL_4PASS_0_SGIS,
		#endif
		#if defined(GL_4PASS_1_EXT)
			e4pass1Ext = (GLenum)GL_4PASS_1_EXT,
		#endif
		#if defined(GL_4PASS_1_SGIS)
			e4pass1Sgis = (GLenum)GL_4PASS_1_SGIS,
		#endif
		#if defined(GL_4PASS_2_EXT)
			e4pass2Ext = (GLenum)GL_4PASS_2_EXT,
		#endif
		#if defined(GL_4PASS_2_SGIS)
			e4pass2Sgis = (GLenum)GL_4PASS_2_SGIS,
		#endif
		#if defined(GL_4PASS_3_EXT)
			e4pass3Ext = (GLenum)GL_4PASS_3_EXT,
		#endif
		#if defined(GL_4PASS_3_SGIS)
			e4pass3Sgis = (GLenum)GL_4PASS_3_SGIS,
		#endif
	};

	enum class SamplePatternEXT : GLenum {
		#if defined(GL_1PASS_EXT)
			e1passExt = (GLenum)GL_1PASS_EXT,
		#endif
		#if defined(GL_2PASS_0_EXT)
			e2pass0Ext = (GLenum)GL_2PASS_0_EXT,
		#endif
		#if defined(GL_2PASS_1_EXT)
			e2pass1Ext = (GLenum)GL_2PASS_1_EXT,
		#endif
		#if defined(GL_4PASS_0_EXT)
			e4pass0Ext = (GLenum)GL_4PASS_0_EXT,
		#endif
		#if defined(GL_4PASS_1_EXT)
			e4pass1Ext = (GLenum)GL_4PASS_1_EXT,
		#endif
		#if defined(GL_4PASS_2_EXT)
			e4pass2Ext = (GLenum)GL_4PASS_2_EXT,
		#endif
		#if defined(GL_4PASS_3_EXT)
			e4pass3Ext = (GLenum)GL_4PASS_3_EXT,
		#endif
	};

	enum class InternalFormatPName : GLenum {
		#if defined(GL_AUTO_GENERATE_MIPMAP)
			eAutoGenerateMipmap = (GLenum)GL_AUTO_GENERATE_MIPMAP,
		#endif
		#if defined(GL_CLEAR_BUFFER)
			eClearBuffer = (GLenum)GL_CLEAR_BUFFER,
		#endif
		#if defined(GL_CLEAR_TEXTURE)
			eClearTexture = (GLenum)GL_CLEAR_TEXTURE,
		#endif
		#if defined(GL_COLOR_COMPONENTS)
			eColorComponents = (GLenum)GL_COLOR_COMPONENTS,
		#endif
		#if defined(GL_COLOR_ENCODING)
			eColorEncoding = (GLenum)GL_COLOR_ENCODING,
		#endif
		#if defined(GL_COLOR_RENDERABLE)
			eColorRenderable = (GLenum)GL_COLOR_RENDERABLE,
		#endif
		#if defined(GL_COMPUTE_TEXTURE)
			eComputeTexture = (GLenum)GL_COMPUTE_TEXTURE,
		#endif
		#if defined(GL_DEPTH_RENDERABLE)
			eDepthRenderable = (GLenum)GL_DEPTH_RENDERABLE,
		#endif
		#if defined(GL_FILTER)
			eFilter = (GLenum)GL_FILTER,
		#endif
		#if defined(GL_FRAGMENT_TEXTURE)
			eFragmentTexture = (GLenum)GL_FRAGMENT_TEXTURE,
		#endif
		#if defined(GL_FRAMEBUFFER_BLEND)
			eFramebufferBlend = (GLenum)GL_FRAMEBUFFER_BLEND,
		#endif
		#if defined(GL_FRAMEBUFFER_RENDERABLE)
			eFramebufferRenderable = (GLenum)GL_FRAMEBUFFER_RENDERABLE,
		#endif
		#if defined(GL_FRAMEBUFFER_RENDERABLE_LAYERED)
			eFramebufferRenderableLayered = (GLenum)GL_FRAMEBUFFER_RENDERABLE_LAYERED,
		#endif
		#if defined(GL_GENERATE_MIPMAP)
			eGenerateMipmap = (GLenum)GL_GENERATE_MIPMAP,
		#endif
		#if defined(GL_GEOMETRY_TEXTURE)
			eGeometryTexture = (GLenum)GL_GEOMETRY_TEXTURE,
		#endif
		#if defined(GL_GET_TEXTURE_IMAGE_FORMAT)
			eGetTextureImageFormat = (GLenum)GL_GET_TEXTURE_IMAGE_FORMAT,
		#endif
		#if defined(GL_GET_TEXTURE_IMAGE_TYPE)
			eGetTextureImageType = (GLenum)GL_GET_TEXTURE_IMAGE_TYPE,
		#endif
		#if defined(GL_IMAGE_COMPATIBILITY_CLASS)
			eImageCompatibilityClass = (GLenum)GL_IMAGE_COMPATIBILITY_CLASS,
		#endif
		#if defined(GL_IMAGE_FORMAT_COMPATIBILITY_TYPE)
			eImageFormatCompatibilityType = (GLenum)GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
		#endif
		#if defined(GL_IMAGE_PIXEL_FORMAT)
			eImagePixelFormat = (GLenum)GL_IMAGE_PIXEL_FORMAT,
		#endif
		#if defined(GL_IMAGE_PIXEL_TYPE)
			eImagePixelType = (GLenum)GL_IMAGE_PIXEL_TYPE,
		#endif
		#if defined(GL_IMAGE_TEXEL_SIZE)
			eImageTexelSize = (GLenum)GL_IMAGE_TEXEL_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_ALPHA_SIZE)
			eInternalformatAlphaSize = (GLenum)GL_INTERNALFORMAT_ALPHA_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_ALPHA_TYPE)
			eInternalformatAlphaType = (GLenum)GL_INTERNALFORMAT_ALPHA_TYPE,
		#endif
		#if defined(GL_INTERNALFORMAT_BLUE_SIZE)
			eInternalformatBlueSize = (GLenum)GL_INTERNALFORMAT_BLUE_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_BLUE_TYPE)
			eInternalformatBlueType = (GLenum)GL_INTERNALFORMAT_BLUE_TYPE,
		#endif
		#if defined(GL_INTERNALFORMAT_DEPTH_SIZE)
			eInternalformatDepthSize = (GLenum)GL_INTERNALFORMAT_DEPTH_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_DEPTH_TYPE)
			eInternalformatDepthType = (GLenum)GL_INTERNALFORMAT_DEPTH_TYPE,
		#endif
		#if defined(GL_INTERNALFORMAT_GREEN_SIZE)
			eInternalformatGreenSize = (GLenum)GL_INTERNALFORMAT_GREEN_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_GREEN_TYPE)
			eInternalformatGreenType = (GLenum)GL_INTERNALFORMAT_GREEN_TYPE,
		#endif
		#if defined(GL_INTERNALFORMAT_PREFERRED)
			eInternalformatPreferred = (GLenum)GL_INTERNALFORMAT_PREFERRED,
		#endif
		#if defined(GL_INTERNALFORMAT_RED_SIZE)
			eInternalformatRedSize = (GLenum)GL_INTERNALFORMAT_RED_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_RED_TYPE)
			eInternalformatRedType = (GLenum)GL_INTERNALFORMAT_RED_TYPE,
		#endif
		#if defined(GL_INTERNALFORMAT_SHARED_SIZE)
			eInternalformatSharedSize = (GLenum)GL_INTERNALFORMAT_SHARED_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_STENCIL_SIZE)
			eInternalformatStencilSize = (GLenum)GL_INTERNALFORMAT_STENCIL_SIZE,
		#endif
		#if defined(GL_INTERNALFORMAT_STENCIL_TYPE)
			eInternalformatStencilType = (GLenum)GL_INTERNALFORMAT_STENCIL_TYPE,
		#endif
		#if defined(GL_INTERNALFORMAT_SUPPORTED)
			eInternalformatSupported = (GLenum)GL_INTERNALFORMAT_SUPPORTED,
		#endif
		#if defined(GL_MAX_DEPTH)
			eMaxDepth = (GLenum)GL_MAX_DEPTH,
		#endif
		#if defined(GL_MAX_HEIGHT)
			eMaxHeight = (GLenum)GL_MAX_HEIGHT,
		#endif
		#if defined(GL_MAX_LAYERS)
			eMaxLayers = (GLenum)GL_MAX_LAYERS,
		#endif
		#if defined(GL_MAX_WIDTH)
			eMaxWidth = (GLenum)GL_MAX_WIDTH,
		#endif
		#if defined(GL_MIPMAP)
			eMipmap = (GLenum)GL_MIPMAP,
		#endif
		#if defined(GL_NUM_SAMPLE_COUNTS)
			eNumSampleCounts = (GLenum)GL_NUM_SAMPLE_COUNTS,
		#endif
		#if defined(GL_NUM_SURFACE_COMPRESSION_FIXED_RATES_EXT)
			eNumSurfaceCompressionFixedRatesExt = (GLenum)GL_NUM_SURFACE_COMPRESSION_FIXED_RATES_EXT,
		#endif
		#if defined(GL_READ_PIXELS)
			eReadPixels = (GLenum)GL_READ_PIXELS,
		#endif
		#if defined(GL_READ_PIXELS_FORMAT)
			eReadPixelsFormat = (GLenum)GL_READ_PIXELS_FORMAT,
		#endif
		#if defined(GL_READ_PIXELS_TYPE)
			eReadPixelsType = (GLenum)GL_READ_PIXELS_TYPE,
		#endif
		#if defined(GL_SAMPLES)
			eSamples = (GLenum)GL_SAMPLES,
		#endif
		#if defined(GL_SHADER_IMAGE_ATOMIC)
			eShaderImageAtomic = (GLenum)GL_SHADER_IMAGE_ATOMIC,
		#endif
		#if defined(GL_SHADER_IMAGE_LOAD)
			eShaderImageLoad = (GLenum)GL_SHADER_IMAGE_LOAD,
		#endif
		#if defined(GL_SHADER_IMAGE_STORE)
			eShaderImageStore = (GLenum)GL_SHADER_IMAGE_STORE,
		#endif
		#if defined(GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST)
			eSimultaneousTextureAndDepthTest = (GLenum)GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST,
		#endif
		#if defined(GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE)
			eSimultaneousTextureAndDepthWrite = (GLenum)GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE,
		#endif
		#if defined(GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST)
			eSimultaneousTextureAndStencilTest = (GLenum)GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST,
		#endif
		#if defined(GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE)
			eSimultaneousTextureAndStencilWrite = (GLenum)GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE,
		#endif
		#if defined(GL_SRGB_READ)
			eSrgbRead = (GLenum)GL_SRGB_READ,
		#endif
		#if defined(GL_SRGB_WRITE)
			eSrgbWrite = (GLenum)GL_SRGB_WRITE,
		#endif
		#if defined(GL_STENCIL_RENDERABLE)
			eStencilRenderable = (GLenum)GL_STENCIL_RENDERABLE,
		#endif
		#if defined(GL_TESS_CONTROL_TEXTURE)
			eTessControlTexture = (GLenum)GL_TESS_CONTROL_TEXTURE,
		#endif
		#if defined(GL_TESS_EVALUATION_TEXTURE)
			eTessEvaluationTexture = (GLenum)GL_TESS_EVALUATION_TEXTURE,
		#endif
		#if defined(GL_TEXTURE_COMPRESSED)
			eTextureCompressed = (GLenum)GL_TEXTURE_COMPRESSED,
		#endif
		#if defined(GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT)
			eTextureCompressedBlockHeight = (GLenum)GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT,
		#endif
		#if defined(GL_TEXTURE_COMPRESSED_BLOCK_SIZE)
			eTextureCompressedBlockSize = (GLenum)GL_TEXTURE_COMPRESSED_BLOCK_SIZE,
		#endif
		#if defined(GL_TEXTURE_COMPRESSED_BLOCK_WIDTH)
			eTextureCompressedBlockWidth = (GLenum)GL_TEXTURE_COMPRESSED_BLOCK_WIDTH,
		#endif
		#if defined(GL_TEXTURE_GATHER)
			eTextureGather = (GLenum)GL_TEXTURE_GATHER,
		#endif
		#if defined(GL_TEXTURE_GATHER_SHADOW)
			eTextureGatherShadow = (GLenum)GL_TEXTURE_GATHER_SHADOW,
		#endif
		#if defined(GL_TEXTURE_IMAGE_FORMAT)
			eTextureImageFormat = (GLenum)GL_TEXTURE_IMAGE_FORMAT,
		#endif
		#if defined(GL_TEXTURE_IMAGE_TYPE)
			eTextureImageType = (GLenum)GL_TEXTURE_IMAGE_TYPE,
		#endif
		#if defined(GL_TEXTURE_SHADOW)
			eTextureShadow = (GLenum)GL_TEXTURE_SHADOW,
		#endif
		#if defined(GL_TEXTURE_VIEW)
			eTextureView = (GLenum)GL_TEXTURE_VIEW,
		#endif
		#if defined(GL_VERTEX_TEXTURE)
			eVertexTexture = (GLenum)GL_VERTEX_TEXTURE,
		#endif
		#if defined(GL_VIEW_COMPATIBILITY_CLASS)
			eViewCompatibilityClass = (GLenum)GL_VIEW_COMPATIBILITY_CLASS,
		#endif
	};

	enum class ColorTableTargetSGI : GLenum {
		#if defined(GL_COLOR_TABLE)
			eColorTable = (GLenum)GL_COLOR_TABLE,
		#endif
		#if defined(GL_COLOR_TABLE_SGI)
			eColorTableSgi = (GLenum)GL_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_COLOR_TABLE)
			ePostColorMatrixColorTable = (GLenum)GL_POST_COLOR_MATRIX_COLOR_TABLE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI)
			ePostColorMatrixColorTableSgi = (GLenum)GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_POST_CONVOLUTION_COLOR_TABLE)
			ePostConvolutionColorTable = (GLenum)GL_POST_CONVOLUTION_COLOR_TABLE,
		#endif
		#if defined(GL_POST_CONVOLUTION_COLOR_TABLE_SGI)
			ePostConvolutionColorTableSgi = (GLenum)GL_POST_CONVOLUTION_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_PROXY_COLOR_TABLE)
			eProxyColorTable = (GLenum)GL_PROXY_COLOR_TABLE,
		#endif
		#if defined(GL_PROXY_COLOR_TABLE_SGI)
			eProxyColorTableSgi = (GLenum)GL_PROXY_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE)
			eProxyPostColorMatrixColorTable = (GLenum)GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE,
		#endif
		#if defined(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI)
			eProxyPostColorMatrixColorTableSgi = (GLenum)GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE)
			eProxyPostConvolutionColorTable = (GLenum)GL_PROXY_POST_CONVOLUTION_COLOR_TABLE,
		#endif
		#if defined(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI)
			eProxyPostConvolutionColorTableSgi = (GLenum)GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_PROXY_TEXTURE_COLOR_TABLE_SGI)
			eProxyTextureColorTableSgi = (GLenum)GL_PROXY_TEXTURE_COLOR_TABLE_SGI,
		#endif
		#if defined(GL_TEXTURE_COLOR_TABLE_SGI)
			eTextureColorTableSgi = (GLenum)GL_TEXTURE_COLOR_TABLE_SGI,
		#endif
	};

	enum class ColorTableTarget : GLenum {
		#if defined(GL_COLOR_TABLE)
			eColorTable = (GLenum)GL_COLOR_TABLE,
		#endif
		#if defined(GL_POST_COLOR_MATRIX_COLOR_TABLE)
			ePostColorMatrixColorTable = (GLenum)GL_POST_COLOR_MATRIX_COLOR_TABLE,
		#endif
		#if defined(GL_POST_CONVOLUTION_COLOR_TABLE)
			ePostConvolutionColorTable = (GLenum)GL_POST_CONVOLUTION_COLOR_TABLE,
		#endif
		#if defined(GL_PROXY_COLOR_TABLE)
			eProxyColorTable = (GLenum)GL_PROXY_COLOR_TABLE,
		#endif
		#if defined(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE)
			eProxyPostColorMatrixColorTable = (GLenum)GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE,
		#endif
		#if defined(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE)
			eProxyPostConvolutionColorTable = (GLenum)GL_PROXY_POST_CONVOLUTION_COLOR_TABLE,
		#endif
	};

	enum class ColorTableParameterPName : GLenum {
		#if defined(GL_COLOR_TABLE_ALPHA_SIZE)
			eColorTableAlphaSize = (GLenum)GL_COLOR_TABLE_ALPHA_SIZE,
		#endif
		#if defined(GL_COLOR_TABLE_ALPHA_SIZE_SGI)
			eColorTableAlphaSizeSgi = (GLenum)GL_COLOR_TABLE_ALPHA_SIZE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_BIAS)
			eColorTableBias = (GLenum)GL_COLOR_TABLE_BIAS,
		#endif
		#if defined(GL_COLOR_TABLE_BIAS_SGI)
			eColorTableBiasSgi = (GLenum)GL_COLOR_TABLE_BIAS_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_BLUE_SIZE)
			eColorTableBlueSize = (GLenum)GL_COLOR_TABLE_BLUE_SIZE,
		#endif
		#if defined(GL_COLOR_TABLE_BLUE_SIZE_SGI)
			eColorTableBlueSizeSgi = (GLenum)GL_COLOR_TABLE_BLUE_SIZE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_FORMAT)
			eColorTableFormat = (GLenum)GL_COLOR_TABLE_FORMAT,
		#endif
		#if defined(GL_COLOR_TABLE_FORMAT_SGI)
			eColorTableFormatSgi = (GLenum)GL_COLOR_TABLE_FORMAT_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_GREEN_SIZE)
			eColorTableGreenSize = (GLenum)GL_COLOR_TABLE_GREEN_SIZE,
		#endif
		#if defined(GL_COLOR_TABLE_GREEN_SIZE_SGI)
			eColorTableGreenSizeSgi = (GLenum)GL_COLOR_TABLE_GREEN_SIZE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_INTENSITY_SIZE)
			eColorTableIntensitySize = (GLenum)GL_COLOR_TABLE_INTENSITY_SIZE,
		#endif
		#if defined(GL_COLOR_TABLE_INTENSITY_SIZE_SGI)
			eColorTableIntensitySizeSgi = (GLenum)GL_COLOR_TABLE_INTENSITY_SIZE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_LUMINANCE_SIZE)
			eColorTableLuminanceSize = (GLenum)GL_COLOR_TABLE_LUMINANCE_SIZE,
		#endif
		#if defined(GL_COLOR_TABLE_LUMINANCE_SIZE_SGI)
			eColorTableLuminanceSizeSgi = (GLenum)GL_COLOR_TABLE_LUMINANCE_SIZE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_RED_SIZE)
			eColorTableRedSize = (GLenum)GL_COLOR_TABLE_RED_SIZE,
		#endif
		#if defined(GL_COLOR_TABLE_RED_SIZE_SGI)
			eColorTableRedSizeSgi = (GLenum)GL_COLOR_TABLE_RED_SIZE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_SCALE)
			eColorTableScale = (GLenum)GL_COLOR_TABLE_SCALE,
		#endif
		#if defined(GL_COLOR_TABLE_SCALE_SGI)
			eColorTableScaleSgi = (GLenum)GL_COLOR_TABLE_SCALE_SGI,
		#endif
		#if defined(GL_COLOR_TABLE_WIDTH)
			eColorTableWidth = (GLenum)GL_COLOR_TABLE_WIDTH,
		#endif
		#if defined(GL_COLOR_TABLE_WIDTH_SGI)
			eColorTableWidthSgi = (GLenum)GL_COLOR_TABLE_WIDTH_SGI,
		#endif
	};

	enum class BufferTargetARB : GLenum {
		#if defined(GL_ARRAY_BUFFER)
			eArrayBuffer = (GLenum)GL_ARRAY_BUFFER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER)
			eAtomicCounterBuffer = (GLenum)GL_ATOMIC_COUNTER_BUFFER,
		#endif
		#if defined(GL_COPY_READ_BUFFER)
			eCopyReadBuffer = (GLenum)GL_COPY_READ_BUFFER,
		#endif
		#if defined(GL_COPY_WRITE_BUFFER)
			eCopyWriteBuffer = (GLenum)GL_COPY_WRITE_BUFFER,
		#endif
		#if defined(GL_DISPATCH_INDIRECT_BUFFER)
			eDispatchIndirectBuffer = (GLenum)GL_DISPATCH_INDIRECT_BUFFER,
		#endif
		#if defined(GL_DRAW_INDIRECT_BUFFER)
			eDrawIndirectBuffer = (GLenum)GL_DRAW_INDIRECT_BUFFER,
		#endif
		#if defined(GL_ELEMENT_ARRAY_BUFFER)
			eElementArrayBuffer = (GLenum)GL_ELEMENT_ARRAY_BUFFER,
		#endif
		#if defined(GL_PARAMETER_BUFFER)
			eParameterBuffer = (GLenum)GL_PARAMETER_BUFFER,
		#endif
		#if defined(GL_PIXEL_PACK_BUFFER)
			ePixelPackBuffer = (GLenum)GL_PIXEL_PACK_BUFFER,
		#endif
		#if defined(GL_PIXEL_UNPACK_BUFFER)
			ePixelUnpackBuffer = (GLenum)GL_PIXEL_UNPACK_BUFFER,
		#endif
		#if defined(GL_QUERY_BUFFER)
			eQueryBuffer = (GLenum)GL_QUERY_BUFFER,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER)
			eShaderStorageBuffer = (GLenum)GL_SHADER_STORAGE_BUFFER,
		#endif
		#if defined(GL_TEXTURE_BUFFER)
			eTextureBuffer = (GLenum)GL_TEXTURE_BUFFER,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER)
			eTransformFeedbackBuffer = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER,
		#endif
		#if defined(GL_UNIFORM_BUFFER)
			eUniformBuffer = (GLenum)GL_UNIFORM_BUFFER,
		#endif
	};

	enum class PointParameterNameARB : GLenum {
		#if defined(GL_DISTANCE_ATTENUATION_EXT)
			eDistanceAttenuationExt = (GLenum)GL_DISTANCE_ATTENUATION_EXT,
		#endif
		#if defined(GL_DISTANCE_ATTENUATION_SGIS)
			eDistanceAttenuationSgis = (GLenum)GL_DISTANCE_ATTENUATION_SGIS,
		#endif
		#if defined(GL_POINT_DISTANCE_ATTENUATION)
			ePointDistanceAttenuation = (GLenum)GL_POINT_DISTANCE_ATTENUATION,
		#endif
		#if defined(GL_POINT_DISTANCE_ATTENUATION_ARB)
			ePointDistanceAttenuationArb = (GLenum)GL_POINT_DISTANCE_ATTENUATION_ARB,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE)
			ePointFadeThresholdSize = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE_ARB)
			ePointFadeThresholdSizeArb = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE_ARB,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE_EXT)
			ePointFadeThresholdSizeExt = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE_EXT,
		#endif
		#if defined(GL_POINT_FADE_THRESHOLD_SIZE_SGIS)
			ePointFadeThresholdSizeSgis = (GLenum)GL_POINT_FADE_THRESHOLD_SIZE_SGIS,
		#endif
		#if defined(GL_POINT_SIZE_MAX)
			ePointSizeMax = (GLenum)GL_POINT_SIZE_MAX,
		#endif
		#if defined(GL_POINT_SIZE_MAX_ARB)
			ePointSizeMaxArb = (GLenum)GL_POINT_SIZE_MAX_ARB,
		#endif
		#if defined(GL_POINT_SIZE_MAX_EXT)
			ePointSizeMaxExt = (GLenum)GL_POINT_SIZE_MAX_EXT,
		#endif
		#if defined(GL_POINT_SIZE_MAX_SGIS)
			ePointSizeMaxSgis = (GLenum)GL_POINT_SIZE_MAX_SGIS,
		#endif
		#if defined(GL_POINT_SIZE_MIN)
			ePointSizeMin = (GLenum)GL_POINT_SIZE_MIN,
		#endif
		#if defined(GL_POINT_SIZE_MIN_ARB)
			ePointSizeMinArb = (GLenum)GL_POINT_SIZE_MIN_ARB,
		#endif
		#if defined(GL_POINT_SIZE_MIN_EXT)
			ePointSizeMinExt = (GLenum)GL_POINT_SIZE_MIN_EXT,
		#endif
		#if defined(GL_POINT_SIZE_MIN_SGIS)
			ePointSizeMinSgis = (GLenum)GL_POINT_SIZE_MIN_SGIS,
		#endif
	};

	enum class TextureFilterSGIS : GLenum {
		#if defined(GL_FILTER4_SGIS)
			eFilter4Sgis = (GLenum)GL_FILTER4_SGIS,
		#endif
	};

	enum class SpriteParameterNameSGIX : GLenum {
		#if defined(GL_SPRITE_MODE_SGIX)
			eSpriteModeSgix = (GLenum)GL_SPRITE_MODE_SGIX,
		#endif
	};

	enum class SpriteModeSGIX : GLenum {
		#if defined(GL_SPRITE_AXIAL_SGIX)
			eSpriteAxialSgix = (GLenum)GL_SPRITE_AXIAL_SGIX,
		#endif
		#if defined(GL_SPRITE_EYE_ALIGNED_SGIX)
			eSpriteEyeAlignedSgix = (GLenum)GL_SPRITE_EYE_ALIGNED_SGIX,
		#endif
		#if defined(GL_SPRITE_OBJECT_ALIGNED_SGIX)
			eSpriteObjectAlignedSgix = (GLenum)GL_SPRITE_OBJECT_ALIGNED_SGIX,
		#endif
	};

	enum class ImageTransformPNameHP : GLenum {
		#if defined(GL_IMAGE_CUBIC_WEIGHT_HP)
			eImageCubicWeightHp = (GLenum)GL_IMAGE_CUBIC_WEIGHT_HP,
		#endif
		#if defined(GL_IMAGE_MAG_FILTER_HP)
			eImageMagFilterHp = (GLenum)GL_IMAGE_MAG_FILTER_HP,
		#endif
		#if defined(GL_IMAGE_MIN_FILTER_HP)
			eImageMinFilterHp = (GLenum)GL_IMAGE_MIN_FILTER_HP,
		#endif
		#if defined(GL_IMAGE_ROTATE_ANGLE_HP)
			eImageRotateAngleHp = (GLenum)GL_IMAGE_ROTATE_ANGLE_HP,
		#endif
		#if defined(GL_IMAGE_ROTATE_ORIGIN_X_HP)
			eImageRotateOriginXHp = (GLenum)GL_IMAGE_ROTATE_ORIGIN_X_HP,
		#endif
		#if defined(GL_IMAGE_ROTATE_ORIGIN_Y_HP)
			eImageRotateOriginYHp = (GLenum)GL_IMAGE_ROTATE_ORIGIN_Y_HP,
		#endif
		#if defined(GL_IMAGE_SCALE_X_HP)
			eImageScaleXHp = (GLenum)GL_IMAGE_SCALE_X_HP,
		#endif
		#if defined(GL_IMAGE_SCALE_Y_HP)
			eImageScaleYHp = (GLenum)GL_IMAGE_SCALE_Y_HP,
		#endif
		#if defined(GL_IMAGE_TRANSLATE_X_HP)
			eImageTranslateXHp = (GLenum)GL_IMAGE_TRANSLATE_X_HP,
		#endif
		#if defined(GL_IMAGE_TRANSLATE_Y_HP)
			eImageTranslateYHp = (GLenum)GL_IMAGE_TRANSLATE_Y_HP,
		#endif
	};

	enum class ImageTransformTargetHP : GLenum {
		#if defined(GL_IMAGE_TRANSFORM_2D_HP)
			eImageTransform2dHp = (GLenum)GL_IMAGE_TRANSFORM_2D_HP,
		#endif
	};

	enum class ListParameterName : GLenum {
		#if defined(GL_LIST_PRIORITY_SGIX)
			eListPrioritySgix = (GLenum)GL_LIST_PRIORITY_SGIX,
		#endif
	};

	enum class FfdTargetSGIX : GLenum {
		#if defined(GL_GEOMETRY_DEFORMATION_SGIX)
			eGeometryDeformationSgix = (GLenum)GL_GEOMETRY_DEFORMATION_SGIX,
		#endif
		#if defined(GL_TEXTURE_DEFORMATION_SGIX)
			eTextureDeformationSgix = (GLenum)GL_TEXTURE_DEFORMATION_SGIX,
		#endif
	};

	enum class CullParameterEXT : GLenum {
		#if defined(GL_CULL_VERTEX_EYE_POSITION_EXT)
			eCullVertexEyePositionExt = (GLenum)GL_CULL_VERTEX_EYE_POSITION_EXT,
		#endif
		#if defined(GL_CULL_VERTEX_OBJECT_POSITION_EXT)
			eCullVertexObjectPositionExt = (GLenum)GL_CULL_VERTEX_OBJECT_POSITION_EXT,
		#endif
	};

	enum class LightModelColorControl : GLenum {
		#if defined(GL_SEPARATE_SPECULAR_COLOR)
			eSeparateSpecularColor = (GLenum)GL_SEPARATE_SPECULAR_COLOR,
		#endif
		#if defined(GL_SEPARATE_SPECULAR_COLOR_EXT)
			eSeparateSpecularColorExt = (GLenum)GL_SEPARATE_SPECULAR_COLOR_EXT,
		#endif
		#if defined(GL_SINGLE_COLOR)
			eSingleColor = (GLenum)GL_SINGLE_COLOR,
		#endif
		#if defined(GL_SINGLE_COLOR_EXT)
			eSingleColorExt = (GLenum)GL_SINGLE_COLOR_EXT,
		#endif
	};

	enum class ProgramTarget : GLenum {
		#if defined(GL_COMPUTE_PROGRAM_NV)
			eComputeProgramNv = (GLenum)GL_COMPUTE_PROGRAM_NV,
		#endif
		#if defined(GL_FRAGMENT_PROGRAM_ARB)
			eFragmentProgramArb = (GLenum)GL_FRAGMENT_PROGRAM_ARB,
		#endif
		#if defined(GL_GEOMETRY_PROGRAM_NV)
			eGeometryProgramNv = (GLenum)GL_GEOMETRY_PROGRAM_NV,
		#endif
		#if defined(GL_TESS_CONTROL_PROGRAM_NV)
			eTessControlProgramNv = (GLenum)GL_TESS_CONTROL_PROGRAM_NV,
		#endif
		#if defined(GL_TESS_EVALUATION_PROGRAM_NV)
			eTessEvaluationProgramNv = (GLenum)GL_TESS_EVALUATION_PROGRAM_NV,
		#endif
		#if defined(GL_TEXT_FRAGMENT_SHADER_ATI)
			eTextFragmentShaderAti = (GLenum)GL_TEXT_FRAGMENT_SHADER_ATI,
		#endif
		#if defined(GL_VERTEX_PROGRAM_ARB)
			eVertexProgramArb = (GLenum)GL_VERTEX_PROGRAM_ARB,
		#endif
	};

	enum class FramebufferAttachmentParameterName : GLenum {
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE)
			eFramebufferAttachmentAlphaSize = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE)
			eFramebufferAttachmentBlueSize = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING)
			eFramebufferAttachmentColorEncoding = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT)
			eFramebufferAttachmentColorEncodingExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE)
			eFramebufferAttachmentComponentType = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT)
			eFramebufferAttachmentComponentTypeExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE)
			eFramebufferAttachmentDepthSize = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE)
			eFramebufferAttachmentGreenSize = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_LAYERED)
			eFramebufferAttachmentLayered = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_LAYERED,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB)
			eFramebufferAttachmentLayeredArb = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT)
			eFramebufferAttachmentLayeredExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES)
			eFramebufferAttachmentLayeredOes = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME)
			eFramebufferAttachmentObjectName = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT)
			eFramebufferAttachmentObjectNameExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES)
			eFramebufferAttachmentObjectNameOes = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE)
			eFramebufferAttachmentObjectType = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT)
			eFramebufferAttachmentObjectTypeExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES)
			eFramebufferAttachmentObjectTypeOes = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE)
			eFramebufferAttachmentRedSize = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE)
			eFramebufferAttachmentStencilSize = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT)
			eFramebufferAttachmentTexture3dZoffsetExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES)
			eFramebufferAttachmentTexture3dZoffsetOes = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR)
			eFramebufferAttachmentTextureBaseViewIndexOvr = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE)
			eFramebufferAttachmentTextureCubeMapFace = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT)
			eFramebufferAttachmentTextureCubeMapFaceExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES)
			eFramebufferAttachmentTextureCubeMapFaceOes = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER)
			eFramebufferAttachmentTextureLayer = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT)
			eFramebufferAttachmentTextureLayerExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL)
			eFramebufferAttachmentTextureLevel = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT)
			eFramebufferAttachmentTextureLevelExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES)
			eFramebufferAttachmentTextureLevelOes = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR)
			eFramebufferAttachmentTextureNumViewsOvr = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT)
			eFramebufferAttachmentTextureSamplesExt = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT,
		#endif
		#if defined(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG)
			eFramebufferAttachmentTextureScaleImg = (GLenum)GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG,
		#endif
	};

	enum class FramebufferStatus : GLenum {
		#if defined(GL_FRAMEBUFFER_COMPLETE)
			eFramebufferComplete = (GLenum)GL_FRAMEBUFFER_COMPLETE,
		#endif
		#if defined(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT)
			eFramebufferIncompleteAttachment = (GLenum)GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT,
		#endif
		#if defined(GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER)
			eFramebufferIncompleteDrawBuffer = (GLenum)GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER,
		#endif
		#if defined(GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS)
			eFramebufferIncompleteLayerTargets = (GLenum)GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS,
		#endif
		#if defined(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT)
			eFramebufferIncompleteMissingAttachment = (GLenum)GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,
		#endif
		#if defined(GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE)
			eFramebufferIncompleteMultisample = (GLenum)GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,
		#endif
		#if defined(GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER)
			eFramebufferIncompleteReadBuffer = (GLenum)GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER,
		#endif
		#if defined(GL_FRAMEBUFFER_UNDEFINED)
			eFramebufferUndefined = (GLenum)GL_FRAMEBUFFER_UNDEFINED,
		#endif
		#if defined(GL_FRAMEBUFFER_UNSUPPORTED)
			eFramebufferUnsupported = (GLenum)GL_FRAMEBUFFER_UNSUPPORTED,
		#endif
	};

	enum class FramebufferAttachment : GLenum {
		#if defined(GL_COLOR_ATTACHMENT0)
			eColorAttachment0 = (GLenum)GL_COLOR_ATTACHMENT0,
		#endif
		#if defined(GL_COLOR_ATTACHMENT1)
			eColorAttachment1 = (GLenum)GL_COLOR_ATTACHMENT1,
		#endif
		#if defined(GL_COLOR_ATTACHMENT10)
			eColorAttachment10 = (GLenum)GL_COLOR_ATTACHMENT10,
		#endif
		#if defined(GL_COLOR_ATTACHMENT11)
			eColorAttachment11 = (GLenum)GL_COLOR_ATTACHMENT11,
		#endif
		#if defined(GL_COLOR_ATTACHMENT12)
			eColorAttachment12 = (GLenum)GL_COLOR_ATTACHMENT12,
		#endif
		#if defined(GL_COLOR_ATTACHMENT13)
			eColorAttachment13 = (GLenum)GL_COLOR_ATTACHMENT13,
		#endif
		#if defined(GL_COLOR_ATTACHMENT14)
			eColorAttachment14 = (GLenum)GL_COLOR_ATTACHMENT14,
		#endif
		#if defined(GL_COLOR_ATTACHMENT15)
			eColorAttachment15 = (GLenum)GL_COLOR_ATTACHMENT15,
		#endif
		#if defined(GL_COLOR_ATTACHMENT16)
			eColorAttachment16 = (GLenum)GL_COLOR_ATTACHMENT16,
		#endif
		#if defined(GL_COLOR_ATTACHMENT17)
			eColorAttachment17 = (GLenum)GL_COLOR_ATTACHMENT17,
		#endif
		#if defined(GL_COLOR_ATTACHMENT18)
			eColorAttachment18 = (GLenum)GL_COLOR_ATTACHMENT18,
		#endif
		#if defined(GL_COLOR_ATTACHMENT19)
			eColorAttachment19 = (GLenum)GL_COLOR_ATTACHMENT19,
		#endif
		#if defined(GL_COLOR_ATTACHMENT2)
			eColorAttachment2 = (GLenum)GL_COLOR_ATTACHMENT2,
		#endif
		#if defined(GL_COLOR_ATTACHMENT20)
			eColorAttachment20 = (GLenum)GL_COLOR_ATTACHMENT20,
		#endif
		#if defined(GL_COLOR_ATTACHMENT21)
			eColorAttachment21 = (GLenum)GL_COLOR_ATTACHMENT21,
		#endif
		#if defined(GL_COLOR_ATTACHMENT22)
			eColorAttachment22 = (GLenum)GL_COLOR_ATTACHMENT22,
		#endif
		#if defined(GL_COLOR_ATTACHMENT23)
			eColorAttachment23 = (GLenum)GL_COLOR_ATTACHMENT23,
		#endif
		#if defined(GL_COLOR_ATTACHMENT24)
			eColorAttachment24 = (GLenum)GL_COLOR_ATTACHMENT24,
		#endif
		#if defined(GL_COLOR_ATTACHMENT25)
			eColorAttachment25 = (GLenum)GL_COLOR_ATTACHMENT25,
		#endif
		#if defined(GL_COLOR_ATTACHMENT26)
			eColorAttachment26 = (GLenum)GL_COLOR_ATTACHMENT26,
		#endif
		#if defined(GL_COLOR_ATTACHMENT27)
			eColorAttachment27 = (GLenum)GL_COLOR_ATTACHMENT27,
		#endif
		#if defined(GL_COLOR_ATTACHMENT28)
			eColorAttachment28 = (GLenum)GL_COLOR_ATTACHMENT28,
		#endif
		#if defined(GL_COLOR_ATTACHMENT29)
			eColorAttachment29 = (GLenum)GL_COLOR_ATTACHMENT29,
		#endif
		#if defined(GL_COLOR_ATTACHMENT3)
			eColorAttachment3 = (GLenum)GL_COLOR_ATTACHMENT3,
		#endif
		#if defined(GL_COLOR_ATTACHMENT30)
			eColorAttachment30 = (GLenum)GL_COLOR_ATTACHMENT30,
		#endif
		#if defined(GL_COLOR_ATTACHMENT31)
			eColorAttachment31 = (GLenum)GL_COLOR_ATTACHMENT31,
		#endif
		#if defined(GL_COLOR_ATTACHMENT4)
			eColorAttachment4 = (GLenum)GL_COLOR_ATTACHMENT4,
		#endif
		#if defined(GL_COLOR_ATTACHMENT5)
			eColorAttachment5 = (GLenum)GL_COLOR_ATTACHMENT5,
		#endif
		#if defined(GL_COLOR_ATTACHMENT6)
			eColorAttachment6 = (GLenum)GL_COLOR_ATTACHMENT6,
		#endif
		#if defined(GL_COLOR_ATTACHMENT7)
			eColorAttachment7 = (GLenum)GL_COLOR_ATTACHMENT7,
		#endif
		#if defined(GL_COLOR_ATTACHMENT8)
			eColorAttachment8 = (GLenum)GL_COLOR_ATTACHMENT8,
		#endif
		#if defined(GL_COLOR_ATTACHMENT9)
			eColorAttachment9 = (GLenum)GL_COLOR_ATTACHMENT9,
		#endif
		#if defined(GL_DEPTH_ATTACHMENT)
			eDepthAttachment = (GLenum)GL_DEPTH_ATTACHMENT,
		#endif
		#if defined(GL_DEPTH_STENCIL_ATTACHMENT)
			eDepthStencilAttachment = (GLenum)GL_DEPTH_STENCIL_ATTACHMENT,
		#endif
		#if defined(GL_SHADING_RATE_ATTACHMENT_EXT)
			eShadingRateAttachmentExt = (GLenum)GL_SHADING_RATE_ATTACHMENT_EXT,
		#endif
		#if defined(GL_STENCIL_ATTACHMENT)
			eStencilAttachment = (GLenum)GL_STENCIL_ATTACHMENT,
		#endif
	};

	enum class BufferPNameARB : GLenum {
		#if defined(GL_BUFFER_ACCESS)
			eBufferAccess = (GLenum)GL_BUFFER_ACCESS,
		#endif
		#if defined(GL_BUFFER_ACCESS_ARB)
			eBufferAccessArb = (GLenum)GL_BUFFER_ACCESS_ARB,
		#endif
		#if defined(GL_BUFFER_ACCESS_FLAGS)
			eBufferAccessFlags = (GLenum)GL_BUFFER_ACCESS_FLAGS,
		#endif
		#if defined(GL_BUFFER_IMMUTABLE_STORAGE)
			eBufferImmutableStorage = (GLenum)GL_BUFFER_IMMUTABLE_STORAGE,
		#endif
		#if defined(GL_BUFFER_MAPPED)
			eBufferMapped = (GLenum)GL_BUFFER_MAPPED,
		#endif
		#if defined(GL_BUFFER_MAPPED_ARB)
			eBufferMappedArb = (GLenum)GL_BUFFER_MAPPED_ARB,
		#endif
		#if defined(GL_BUFFER_MAP_LENGTH)
			eBufferMapLength = (GLenum)GL_BUFFER_MAP_LENGTH,
		#endif
		#if defined(GL_BUFFER_MAP_OFFSET)
			eBufferMapOffset = (GLenum)GL_BUFFER_MAP_OFFSET,
		#endif
		#if defined(GL_BUFFER_SIZE)
			eBufferSize = (GLenum)GL_BUFFER_SIZE,
		#endif
		#if defined(GL_BUFFER_SIZE_ARB)
			eBufferSizeArb = (GLenum)GL_BUFFER_SIZE_ARB,
		#endif
		#if defined(GL_BUFFER_STORAGE_FLAGS)
			eBufferStorageFlags = (GLenum)GL_BUFFER_STORAGE_FLAGS,
		#endif
		#if defined(GL_BUFFER_USAGE)
			eBufferUsage = (GLenum)GL_BUFFER_USAGE,
		#endif
		#if defined(GL_BUFFER_USAGE_ARB)
			eBufferUsageArb = (GLenum)GL_BUFFER_USAGE_ARB,
		#endif
	};

	enum class ProgramParameterPName : GLenum {
		#if defined(GL_PROGRAM_BINARY_RETRIEVABLE_HINT)
			eProgramBinaryRetrievableHint = (GLenum)GL_PROGRAM_BINARY_RETRIEVABLE_HINT,
		#endif
		#if defined(GL_PROGRAM_SEPARABLE)
			eProgramSeparable = (GLenum)GL_PROGRAM_SEPARABLE,
		#endif
	};

	enum class PipelineParameterName : GLenum {
		#if defined(GL_ACTIVE_PROGRAM)
			eActiveProgram = (GLenum)GL_ACTIVE_PROGRAM,
		#endif
		#if defined(GL_FRAGMENT_SHADER)
			eFragmentShader = (GLenum)GL_FRAGMENT_SHADER,
		#endif
		#if defined(GL_GEOMETRY_SHADER)
			eGeometryShader = (GLenum)GL_GEOMETRY_SHADER,
		#endif
		#if defined(GL_INFO_LOG_LENGTH)
			eInfoLogLength = (GLenum)GL_INFO_LOG_LENGTH,
		#endif
		#if defined(GL_TESS_CONTROL_SHADER)
			eTessControlShader = (GLenum)GL_TESS_CONTROL_SHADER,
		#endif
		#if defined(GL_TESS_EVALUATION_SHADER)
			eTessEvaluationShader = (GLenum)GL_TESS_EVALUATION_SHADER,
		#endif
		#if defined(GL_VERTEX_SHADER)
			eVertexShader = (GLenum)GL_VERTEX_SHADER,
		#endif
	};

	enum class ProgramPropertyARB : GLenum {
		#if defined(GL_ACTIVE_ATOMIC_COUNTER_BUFFERS)
			eActiveAtomicCounterBuffers = (GLenum)GL_ACTIVE_ATOMIC_COUNTER_BUFFERS,
		#endif
		#if defined(GL_ACTIVE_ATTRIBUTES)
			eActiveAttributes = (GLenum)GL_ACTIVE_ATTRIBUTES,
		#endif
		#if defined(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH)
			eActiveAttributeMaxLength = (GLenum)GL_ACTIVE_ATTRIBUTE_MAX_LENGTH,
		#endif
		#if defined(GL_ACTIVE_UNIFORMS)
			eActiveUniforms = (GLenum)GL_ACTIVE_UNIFORMS,
		#endif
		#if defined(GL_ACTIVE_UNIFORM_BLOCKS)
			eActiveUniformBlocks = (GLenum)GL_ACTIVE_UNIFORM_BLOCKS,
		#endif
		#if defined(GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH)
			eActiveUniformBlockMaxNameLength = (GLenum)GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH,
		#endif
		#if defined(GL_ACTIVE_UNIFORM_MAX_LENGTH)
			eActiveUniformMaxLength = (GLenum)GL_ACTIVE_UNIFORM_MAX_LENGTH,
		#endif
		#if defined(GL_ATTACHED_SHADERS)
			eAttachedShaders = (GLenum)GL_ATTACHED_SHADERS,
		#endif
		#if defined(GL_COMPUTE_WORK_GROUP_SIZE)
			eComputeWorkGroupSize = (GLenum)GL_COMPUTE_WORK_GROUP_SIZE,
		#endif
		#if defined(GL_DELETE_STATUS)
			eDeleteStatus = (GLenum)GL_DELETE_STATUS,
		#endif
		#if defined(GL_GEOMETRY_INPUT_TYPE)
			eGeometryInputType = (GLenum)GL_GEOMETRY_INPUT_TYPE,
		#endif
		#if defined(GL_GEOMETRY_OUTPUT_TYPE)
			eGeometryOutputType = (GLenum)GL_GEOMETRY_OUTPUT_TYPE,
		#endif
		#if defined(GL_GEOMETRY_VERTICES_OUT)
			eGeometryVerticesOut = (GLenum)GL_GEOMETRY_VERTICES_OUT,
		#endif
		#if defined(GL_INFO_LOG_LENGTH)
			eInfoLogLength = (GLenum)GL_INFO_LOG_LENGTH,
		#endif
		#if defined(GL_LINK_STATUS)
			eLinkStatus = (GLenum)GL_LINK_STATUS,
		#endif
		#if defined(GL_PROGRAM_BINARY_LENGTH)
			eProgramBinaryLength = (GLenum)GL_PROGRAM_BINARY_LENGTH,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_MODE)
			eTransformFeedbackBufferMode = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_MODE,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_VARYINGS)
			eTransformFeedbackVaryings = (GLenum)GL_TRANSFORM_FEEDBACK_VARYINGS,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH)
			eTransformFeedbackVaryingMaxLength = (GLenum)GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH,
		#endif
		#if defined(GL_VALIDATE_STATUS)
			eValidateStatus = (GLenum)GL_VALIDATE_STATUS,
		#endif
	};

	enum class VertexAttribPropertyARB : GLenum {
		#if defined(GL_CURRENT_VERTEX_ATTRIB)
			eCurrentVertexAttrib = (GLenum)GL_CURRENT_VERTEX_ATTRIB,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING)
			eVertexAttribArrayBufferBinding = (GLenum)GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_DIVISOR)
			eVertexAttribArrayDivisor = (GLenum)GL_VERTEX_ATTRIB_ARRAY_DIVISOR,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_ENABLED)
			eVertexAttribArrayEnabled = (GLenum)GL_VERTEX_ATTRIB_ARRAY_ENABLED,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_INTEGER)
			eVertexAttribArrayInteger = (GLenum)GL_VERTEX_ATTRIB_ARRAY_INTEGER,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT)
			eVertexAttribArrayIntegerExt = (GLenum)GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_LONG)
			eVertexAttribArrayLong = (GLenum)GL_VERTEX_ATTRIB_ARRAY_LONG,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED)
			eVertexAttribArrayNormalized = (GLenum)GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_SIZE)
			eVertexAttribArraySize = (GLenum)GL_VERTEX_ATTRIB_ARRAY_SIZE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_STRIDE)
			eVertexAttribArrayStride = (GLenum)GL_VERTEX_ATTRIB_ARRAY_STRIDE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_TYPE)
			eVertexAttribArrayType = (GLenum)GL_VERTEX_ATTRIB_ARRAY_TYPE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_BINDING)
			eVertexAttribBinding = (GLenum)GL_VERTEX_ATTRIB_BINDING,
		#endif
		#if defined(GL_VERTEX_ATTRIB_RELATIVE_OFFSET)
			eVertexAttribRelativeOffset = (GLenum)GL_VERTEX_ATTRIB_RELATIVE_OFFSET,
		#endif
	};

	enum class VertexArrayPName : GLenum {
		#if defined(GL_VERTEX_ATTRIB_ARRAY_DIVISOR)
			eVertexAttribArrayDivisor = (GLenum)GL_VERTEX_ATTRIB_ARRAY_DIVISOR,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_ENABLED)
			eVertexAttribArrayEnabled = (GLenum)GL_VERTEX_ATTRIB_ARRAY_ENABLED,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_INTEGER)
			eVertexAttribArrayInteger = (GLenum)GL_VERTEX_ATTRIB_ARRAY_INTEGER,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_LONG)
			eVertexAttribArrayLong = (GLenum)GL_VERTEX_ATTRIB_ARRAY_LONG,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED)
			eVertexAttribArrayNormalized = (GLenum)GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_SIZE)
			eVertexAttribArraySize = (GLenum)GL_VERTEX_ATTRIB_ARRAY_SIZE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_STRIDE)
			eVertexAttribArrayStride = (GLenum)GL_VERTEX_ATTRIB_ARRAY_STRIDE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_TYPE)
			eVertexAttribArrayType = (GLenum)GL_VERTEX_ATTRIB_ARRAY_TYPE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_RELATIVE_OFFSET)
			eVertexAttribRelativeOffset = (GLenum)GL_VERTEX_ATTRIB_RELATIVE_OFFSET,
		#endif
	};

	enum class QueryObjectParameterName : GLenum {
		#if defined(GL_QUERY_RESULT)
			eQueryResult = (GLenum)GL_QUERY_RESULT,
		#endif
		#if defined(GL_QUERY_RESULT_AVAILABLE)
			eQueryResultAvailable = (GLenum)GL_QUERY_RESULT_AVAILABLE,
		#endif
		#if defined(GL_QUERY_RESULT_NO_WAIT)
			eQueryResultNoWait = (GLenum)GL_QUERY_RESULT_NO_WAIT,
		#endif
		#if defined(GL_QUERY_TARGET)
			eQueryTarget = (GLenum)GL_QUERY_TARGET,
		#endif
	};

	enum class QueryTarget : GLenum {
		#if defined(GL_ANY_SAMPLES_PASSED)
			eAnySamplesPassed = (GLenum)GL_ANY_SAMPLES_PASSED,
		#endif
		#if defined(GL_ANY_SAMPLES_PASSED_CONSERVATIVE)
			eAnySamplesPassedConservative = (GLenum)GL_ANY_SAMPLES_PASSED_CONSERVATIVE,
		#endif
		#if defined(GL_PRIMITIVES_GENERATED)
			ePrimitivesGenerated = (GLenum)GL_PRIMITIVES_GENERATED,
		#endif
		#if defined(GL_PRIMITIVES_SUBMITTED)
			ePrimitivesSubmitted = (GLenum)GL_PRIMITIVES_SUBMITTED,
		#endif
		#if defined(GL_SAMPLES_PASSED)
			eSamplesPassed = (GLenum)GL_SAMPLES_PASSED,
		#endif
		#if defined(GL_TIME_ELAPSED)
			eTimeElapsed = (GLenum)GL_TIME_ELAPSED,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_OVERFLOW)
			eTransformFeedbackOverflow = (GLenum)GL_TRANSFORM_FEEDBACK_OVERFLOW,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN)
			eTransformFeedbackPrimitivesWritten = (GLenum)GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,
		#endif
		#if defined(GL_VERTEX_SHADER_INVOCATIONS)
			eVertexShaderInvocations = (GLenum)GL_VERTEX_SHADER_INVOCATIONS,
		#endif
		#if defined(GL_VERTICES_SUBMITTED)
			eVerticesSubmitted = (GLenum)GL_VERTICES_SUBMITTED,
		#endif
	};

	enum class PixelTransformTargetEXT : GLenum {
		#if defined(GL_PIXEL_TRANSFORM_2D_EXT)
			ePixelTransform2dExt = (GLenum)GL_PIXEL_TRANSFORM_2D_EXT,
		#endif
	};

	enum class PixelTransformPNameEXT : GLenum {
		#if defined(GL_PIXEL_CUBIC_WEIGHT_EXT)
			ePixelCubicWeightExt = (GLenum)GL_PIXEL_CUBIC_WEIGHT_EXT,
		#endif
		#if defined(GL_PIXEL_MAG_FILTER_EXT)
			ePixelMagFilterExt = (GLenum)GL_PIXEL_MAG_FILTER_EXT,
		#endif
		#if defined(GL_PIXEL_MIN_FILTER_EXT)
			ePixelMinFilterExt = (GLenum)GL_PIXEL_MIN_FILTER_EXT,
		#endif
	};

	enum class LightTextureModeEXT : GLenum {
		#if defined(GL_FRAGMENT_COLOR_EXT)
			eFragmentColorExt = (GLenum)GL_FRAGMENT_COLOR_EXT,
		#endif
		#if defined(GL_FRAGMENT_DEPTH)
			eFragmentDepth = (GLenum)GL_FRAGMENT_DEPTH,
		#endif
		#if defined(GL_FRAGMENT_DEPTH_EXT)
			eFragmentDepthExt = (GLenum)GL_FRAGMENT_DEPTH_EXT,
		#endif
		#if defined(GL_FRAGMENT_MATERIAL_EXT)
			eFragmentMaterialExt = (GLenum)GL_FRAGMENT_MATERIAL_EXT,
		#endif
		#if defined(GL_FRAGMENT_NORMAL_EXT)
			eFragmentNormalExt = (GLenum)GL_FRAGMENT_NORMAL_EXT,
		#endif
	};

	enum class LightTexturePNameEXT : GLenum {
		#if defined(GL_ATTENUATION_EXT)
			eAttenuationExt = (GLenum)GL_ATTENUATION_EXT,
		#endif
		#if defined(GL_SHADOW_ATTENUATION_EXT)
			eShadowAttenuationExt = (GLenum)GL_SHADOW_ATTENUATION_EXT,
		#endif
	};

	enum class PixelTexGenParameterNameSGIS : GLenum {
		#if defined(GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS)
			ePixelFragmentAlphaSourceSgis = (GLenum)GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS,
		#endif
		#if defined(GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS)
			ePixelFragmentRgbSourceSgis = (GLenum)GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS,
		#endif
	};

	enum class PerfQueryDataFlags : GLenum {
		#if defined(GL_PERFQUERY_DONOT_FLUSH_INTEL)
			ePerfqueryDonotFlushIntel = (GLenum)GL_PERFQUERY_DONOT_FLUSH_INTEL,
		#endif
		#if defined(GL_PERFQUERY_FLUSH_INTEL)
			ePerfqueryFlushIntel = (GLenum)GL_PERFQUERY_FLUSH_INTEL,
		#endif
		#if defined(GL_PERFQUERY_WAIT_INTEL)
			ePerfqueryWaitIntel = (GLenum)GL_PERFQUERY_WAIT_INTEL,
		#endif
	};

	enum class LightEnvParameterSGIX : GLenum {
		#if defined(GL_LIGHT_ENV_MODE_SGIX)
			eLightEnvModeSgix = (GLenum)GL_LIGHT_ENV_MODE_SGIX,
		#endif
	};

	enum class FragmentLightModelParameterSGIX : GLenum {
		#if defined(GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX)
			eFragmentLightModelAmbientSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX)
			eFragmentLightModelLocalViewerSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX)
			eFragmentLightModelNormalInterpolationSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX)
			eFragmentLightModelTwoSideSgix = (GLenum)GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX,
		#endif
	};

	enum class FragmentLightNameSGIX : GLenum {
		#if defined(GL_FRAGMENT_LIGHT0_SGIX)
			eFragmentLight0Sgix = (GLenum)GL_FRAGMENT_LIGHT0_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT1_SGIX)
			eFragmentLight1Sgix = (GLenum)GL_FRAGMENT_LIGHT1_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT2_SGIX)
			eFragmentLight2Sgix = (GLenum)GL_FRAGMENT_LIGHT2_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT3_SGIX)
			eFragmentLight3Sgix = (GLenum)GL_FRAGMENT_LIGHT3_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT4_SGIX)
			eFragmentLight4Sgix = (GLenum)GL_FRAGMENT_LIGHT4_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT5_SGIX)
			eFragmentLight5Sgix = (GLenum)GL_FRAGMENT_LIGHT5_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT6_SGIX)
			eFragmentLight6Sgix = (GLenum)GL_FRAGMENT_LIGHT6_SGIX,
		#endif
		#if defined(GL_FRAGMENT_LIGHT7_SGIX)
			eFragmentLight7Sgix = (GLenum)GL_FRAGMENT_LIGHT7_SGIX,
		#endif
	};

	enum class PixelStoreResampleMode : GLenum {
		#if defined(GL_RESAMPLE_DECIMATE_SGIX)
			eResampleDecimateSgix = (GLenum)GL_RESAMPLE_DECIMATE_SGIX,
		#endif
		#if defined(GL_RESAMPLE_REPLICATE_SGIX)
			eResampleReplicateSgix = (GLenum)GL_RESAMPLE_REPLICATE_SGIX,
		#endif
		#if defined(GL_RESAMPLE_ZERO_FILL_SGIX)
			eResampleZeroFillSgix = (GLenum)GL_RESAMPLE_ZERO_FILL_SGIX,
		#endif
	};

	enum class FogCoordSrc : GLenum {
		#if defined(GL_FOG_COORD)
			eFogCoord = (GLenum)GL_FOG_COORD,
		#endif
		#if defined(GL_FOG_COORDINATE)
			eFogCoordinate = (GLenum)GL_FOG_COORDINATE,
		#endif
		#if defined(GL_FOG_COORDINATE_EXT)
			eFogCoordinateExt = (GLenum)GL_FOG_COORDINATE_EXT,
		#endif
		#if defined(GL_FRAGMENT_DEPTH)
			eFragmentDepth = (GLenum)GL_FRAGMENT_DEPTH,
		#endif
		#if defined(GL_FRAGMENT_DEPTH_EXT)
			eFragmentDepthExt = (GLenum)GL_FRAGMENT_DEPTH_EXT,
		#endif
	};

	enum class TextureUnit : GLenum {
		#if defined(GL_TEXTURE0)
			eTexture0 = (GLenum)GL_TEXTURE0,
		#endif
		#if defined(GL_TEXTURE1)
			eTexture1 = (GLenum)GL_TEXTURE1,
		#endif
		#if defined(GL_TEXTURE10)
			eTexture10 = (GLenum)GL_TEXTURE10,
		#endif
		#if defined(GL_TEXTURE11)
			eTexture11 = (GLenum)GL_TEXTURE11,
		#endif
		#if defined(GL_TEXTURE12)
			eTexture12 = (GLenum)GL_TEXTURE12,
		#endif
		#if defined(GL_TEXTURE13)
			eTexture13 = (GLenum)GL_TEXTURE13,
		#endif
		#if defined(GL_TEXTURE14)
			eTexture14 = (GLenum)GL_TEXTURE14,
		#endif
		#if defined(GL_TEXTURE15)
			eTexture15 = (GLenum)GL_TEXTURE15,
		#endif
		#if defined(GL_TEXTURE16)
			eTexture16 = (GLenum)GL_TEXTURE16,
		#endif
		#if defined(GL_TEXTURE17)
			eTexture17 = (GLenum)GL_TEXTURE17,
		#endif
		#if defined(GL_TEXTURE18)
			eTexture18 = (GLenum)GL_TEXTURE18,
		#endif
		#if defined(GL_TEXTURE19)
			eTexture19 = (GLenum)GL_TEXTURE19,
		#endif
		#if defined(GL_TEXTURE2)
			eTexture2 = (GLenum)GL_TEXTURE2,
		#endif
		#if defined(GL_TEXTURE20)
			eTexture20 = (GLenum)GL_TEXTURE20,
		#endif
		#if defined(GL_TEXTURE21)
			eTexture21 = (GLenum)GL_TEXTURE21,
		#endif
		#if defined(GL_TEXTURE22)
			eTexture22 = (GLenum)GL_TEXTURE22,
		#endif
		#if defined(GL_TEXTURE23)
			eTexture23 = (GLenum)GL_TEXTURE23,
		#endif
		#if defined(GL_TEXTURE24)
			eTexture24 = (GLenum)GL_TEXTURE24,
		#endif
		#if defined(GL_TEXTURE25)
			eTexture25 = (GLenum)GL_TEXTURE25,
		#endif
		#if defined(GL_TEXTURE26)
			eTexture26 = (GLenum)GL_TEXTURE26,
		#endif
		#if defined(GL_TEXTURE27)
			eTexture27 = (GLenum)GL_TEXTURE27,
		#endif
		#if defined(GL_TEXTURE28)
			eTexture28 = (GLenum)GL_TEXTURE28,
		#endif
		#if defined(GL_TEXTURE29)
			eTexture29 = (GLenum)GL_TEXTURE29,
		#endif
		#if defined(GL_TEXTURE3)
			eTexture3 = (GLenum)GL_TEXTURE3,
		#endif
		#if defined(GL_TEXTURE30)
			eTexture30 = (GLenum)GL_TEXTURE30,
		#endif
		#if defined(GL_TEXTURE31)
			eTexture31 = (GLenum)GL_TEXTURE31,
		#endif
		#if defined(GL_TEXTURE4)
			eTexture4 = (GLenum)GL_TEXTURE4,
		#endif
		#if defined(GL_TEXTURE5)
			eTexture5 = (GLenum)GL_TEXTURE5,
		#endif
		#if defined(GL_TEXTURE6)
			eTexture6 = (GLenum)GL_TEXTURE6,
		#endif
		#if defined(GL_TEXTURE7)
			eTexture7 = (GLenum)GL_TEXTURE7,
		#endif
		#if defined(GL_TEXTURE8)
			eTexture8 = (GLenum)GL_TEXTURE8,
		#endif
		#if defined(GL_TEXTURE9)
			eTexture9 = (GLenum)GL_TEXTURE9,
		#endif
	};

	enum class FragmentShaderTextureSourceATI : GLenum {
		#if defined(GL_REG_0_ATI)
			eReg0Ati = (GLenum)GL_REG_0_ATI,
		#endif
		#if defined(GL_REG_10_ATI)
			eReg10Ati = (GLenum)GL_REG_10_ATI,
		#endif
		#if defined(GL_REG_11_ATI)
			eReg11Ati = (GLenum)GL_REG_11_ATI,
		#endif
		#if defined(GL_REG_12_ATI)
			eReg12Ati = (GLenum)GL_REG_12_ATI,
		#endif
		#if defined(GL_REG_13_ATI)
			eReg13Ati = (GLenum)GL_REG_13_ATI,
		#endif
		#if defined(GL_REG_14_ATI)
			eReg14Ati = (GLenum)GL_REG_14_ATI,
		#endif
		#if defined(GL_REG_15_ATI)
			eReg15Ati = (GLenum)GL_REG_15_ATI,
		#endif
		#if defined(GL_REG_16_ATI)
			eReg16Ati = (GLenum)GL_REG_16_ATI,
		#endif
		#if defined(GL_REG_17_ATI)
			eReg17Ati = (GLenum)GL_REG_17_ATI,
		#endif
		#if defined(GL_REG_18_ATI)
			eReg18Ati = (GLenum)GL_REG_18_ATI,
		#endif
		#if defined(GL_REG_19_ATI)
			eReg19Ati = (GLenum)GL_REG_19_ATI,
		#endif
		#if defined(GL_REG_1_ATI)
			eReg1Ati = (GLenum)GL_REG_1_ATI,
		#endif
		#if defined(GL_REG_20_ATI)
			eReg20Ati = (GLenum)GL_REG_20_ATI,
		#endif
		#if defined(GL_REG_21_ATI)
			eReg21Ati = (GLenum)GL_REG_21_ATI,
		#endif
		#if defined(GL_REG_22_ATI)
			eReg22Ati = (GLenum)GL_REG_22_ATI,
		#endif
		#if defined(GL_REG_23_ATI)
			eReg23Ati = (GLenum)GL_REG_23_ATI,
		#endif
		#if defined(GL_REG_24_ATI)
			eReg24Ati = (GLenum)GL_REG_24_ATI,
		#endif
		#if defined(GL_REG_25_ATI)
			eReg25Ati = (GLenum)GL_REG_25_ATI,
		#endif
		#if defined(GL_REG_26_ATI)
			eReg26Ati = (GLenum)GL_REG_26_ATI,
		#endif
		#if defined(GL_REG_27_ATI)
			eReg27Ati = (GLenum)GL_REG_27_ATI,
		#endif
		#if defined(GL_REG_28_ATI)
			eReg28Ati = (GLenum)GL_REG_28_ATI,
		#endif
		#if defined(GL_REG_29_ATI)
			eReg29Ati = (GLenum)GL_REG_29_ATI,
		#endif
		#if defined(GL_REG_2_ATI)
			eReg2Ati = (GLenum)GL_REG_2_ATI,
		#endif
		#if defined(GL_REG_30_ATI)
			eReg30Ati = (GLenum)GL_REG_30_ATI,
		#endif
		#if defined(GL_REG_31_ATI)
			eReg31Ati = (GLenum)GL_REG_31_ATI,
		#endif
		#if defined(GL_REG_3_ATI)
			eReg3Ati = (GLenum)GL_REG_3_ATI,
		#endif
		#if defined(GL_REG_4_ATI)
			eReg4Ati = (GLenum)GL_REG_4_ATI,
		#endif
		#if defined(GL_REG_5_ATI)
			eReg5Ati = (GLenum)GL_REG_5_ATI,
		#endif
		#if defined(GL_REG_6_ATI)
			eReg6Ati = (GLenum)GL_REG_6_ATI,
		#endif
		#if defined(GL_REG_7_ATI)
			eReg7Ati = (GLenum)GL_REG_7_ATI,
		#endif
		#if defined(GL_REG_8_ATI)
			eReg8Ati = (GLenum)GL_REG_8_ATI,
		#endif
		#if defined(GL_REG_9_ATI)
			eReg9Ati = (GLenum)GL_REG_9_ATI,
		#endif
		#if defined(GL_TEXTURE0)
			eTexture0 = (GLenum)GL_TEXTURE0,
		#endif
		#if defined(GL_TEXTURE1)
			eTexture1 = (GLenum)GL_TEXTURE1,
		#endif
		#if defined(GL_TEXTURE10)
			eTexture10 = (GLenum)GL_TEXTURE10,
		#endif
		#if defined(GL_TEXTURE11)
			eTexture11 = (GLenum)GL_TEXTURE11,
		#endif
		#if defined(GL_TEXTURE12)
			eTexture12 = (GLenum)GL_TEXTURE12,
		#endif
		#if defined(GL_TEXTURE13)
			eTexture13 = (GLenum)GL_TEXTURE13,
		#endif
		#if defined(GL_TEXTURE14)
			eTexture14 = (GLenum)GL_TEXTURE14,
		#endif
		#if defined(GL_TEXTURE15)
			eTexture15 = (GLenum)GL_TEXTURE15,
		#endif
		#if defined(GL_TEXTURE16)
			eTexture16 = (GLenum)GL_TEXTURE16,
		#endif
		#if defined(GL_TEXTURE17)
			eTexture17 = (GLenum)GL_TEXTURE17,
		#endif
		#if defined(GL_TEXTURE18)
			eTexture18 = (GLenum)GL_TEXTURE18,
		#endif
		#if defined(GL_TEXTURE19)
			eTexture19 = (GLenum)GL_TEXTURE19,
		#endif
		#if defined(GL_TEXTURE2)
			eTexture2 = (GLenum)GL_TEXTURE2,
		#endif
		#if defined(GL_TEXTURE20)
			eTexture20 = (GLenum)GL_TEXTURE20,
		#endif
		#if defined(GL_TEXTURE21)
			eTexture21 = (GLenum)GL_TEXTURE21,
		#endif
		#if defined(GL_TEXTURE22)
			eTexture22 = (GLenum)GL_TEXTURE22,
		#endif
		#if defined(GL_TEXTURE23)
			eTexture23 = (GLenum)GL_TEXTURE23,
		#endif
		#if defined(GL_TEXTURE24)
			eTexture24 = (GLenum)GL_TEXTURE24,
		#endif
		#if defined(GL_TEXTURE25)
			eTexture25 = (GLenum)GL_TEXTURE25,
		#endif
		#if defined(GL_TEXTURE26)
			eTexture26 = (GLenum)GL_TEXTURE26,
		#endif
		#if defined(GL_TEXTURE27)
			eTexture27 = (GLenum)GL_TEXTURE27,
		#endif
		#if defined(GL_TEXTURE28)
			eTexture28 = (GLenum)GL_TEXTURE28,
		#endif
		#if defined(GL_TEXTURE29)
			eTexture29 = (GLenum)GL_TEXTURE29,
		#endif
		#if defined(GL_TEXTURE3)
			eTexture3 = (GLenum)GL_TEXTURE3,
		#endif
		#if defined(GL_TEXTURE30)
			eTexture30 = (GLenum)GL_TEXTURE30,
		#endif
		#if defined(GL_TEXTURE31)
			eTexture31 = (GLenum)GL_TEXTURE31,
		#endif
		#if defined(GL_TEXTURE4)
			eTexture4 = (GLenum)GL_TEXTURE4,
		#endif
		#if defined(GL_TEXTURE5)
			eTexture5 = (GLenum)GL_TEXTURE5,
		#endif
		#if defined(GL_TEXTURE6)
			eTexture6 = (GLenum)GL_TEXTURE6,
		#endif
		#if defined(GL_TEXTURE7)
			eTexture7 = (GLenum)GL_TEXTURE7,
		#endif
		#if defined(GL_TEXTURE8)
			eTexture8 = (GLenum)GL_TEXTURE8,
		#endif
		#if defined(GL_TEXTURE9)
			eTexture9 = (GLenum)GL_TEXTURE9,
		#endif
	};

	enum class CombinerRegisterNV : GLenum {
		#if defined(GL_DISCARD_NV)
			eDiscardNv = (GLenum)GL_DISCARD_NV,
		#endif
		#if defined(GL_PRIMARY_COLOR_NV)
			ePrimaryColorNv = (GLenum)GL_PRIMARY_COLOR_NV,
		#endif
		#if defined(GL_SECONDARY_COLOR_NV)
			eSecondaryColorNv = (GLenum)GL_SECONDARY_COLOR_NV,
		#endif
		#if defined(GL_SPARE0_NV)
			eSpare0Nv = (GLenum)GL_SPARE0_NV,
		#endif
		#if defined(GL_SPARE1_NV)
			eSpare1Nv = (GLenum)GL_SPARE1_NV,
		#endif
		#if defined(GL_TEXTURE0_ARB)
			eTexture0Arb = (GLenum)GL_TEXTURE0_ARB,
		#endif
		#if defined(GL_TEXTURE1_ARB)
			eTexture1Arb = (GLenum)GL_TEXTURE1_ARB,
		#endif
	};

	enum class UniformBlockPName : GLenum {
		#if defined(GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS)
			eUniformBlockActiveUniforms = (GLenum)GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS,
		#endif
		#if defined(GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES)
			eUniformBlockActiveUniformIndices = (GLenum)GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,
		#endif
		#if defined(GL_UNIFORM_BLOCK_BINDING)
			eUniformBlockBinding = (GLenum)GL_UNIFORM_BLOCK_BINDING,
		#endif
		#if defined(GL_UNIFORM_BLOCK_DATA_SIZE)
			eUniformBlockDataSize = (GLenum)GL_UNIFORM_BLOCK_DATA_SIZE,
		#endif
		#if defined(GL_UNIFORM_BLOCK_NAME_LENGTH)
			eUniformBlockNameLength = (GLenum)GL_UNIFORM_BLOCK_NAME_LENGTH,
		#endif
		#if defined(GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER)
			eUniformBlockReferencedByComputeShader = (GLenum)GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER,
		#endif
		#if defined(GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER)
			eUniformBlockReferencedByFragmentShader = (GLenum)GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,
		#endif
		#if defined(GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER)
			eUniformBlockReferencedByGeometryShader = (GLenum)GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER,
		#endif
		#if defined(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER)
			eUniformBlockReferencedByTessControlShader = (GLenum)GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER,
		#endif
		#if defined(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER)
			eUniformBlockReferencedByTessEvaluationShader = (GLenum)GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER,
		#endif
		#if defined(GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER)
			eUniformBlockReferencedByVertexShader = (GLenum)GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,
		#endif
	};

	enum class FenceConditionNV : GLenum {
		#if defined(GL_ALL_COMPLETED_NV)
			eAllCompletedNv = (GLenum)GL_ALL_COMPLETED_NV,
		#endif
	};

	enum class FenceParameterNameNV : GLenum {
		#if defined(GL_FENCE_CONDITION_NV)
			eFenceConditionNv = (GLenum)GL_FENCE_CONDITION_NV,
		#endif
		#if defined(GL_FENCE_STATUS_NV)
			eFenceStatusNv = (GLenum)GL_FENCE_STATUS_NV,
		#endif
	};

	enum class CombinerVariableNV : GLenum {
		#if defined(GL_VARIABLE_A_NV)
			eVariableANv = (GLenum)GL_VARIABLE_A_NV,
		#endif
		#if defined(GL_VARIABLE_B_NV)
			eVariableBNv = (GLenum)GL_VARIABLE_B_NV,
		#endif
		#if defined(GL_VARIABLE_C_NV)
			eVariableCNv = (GLenum)GL_VARIABLE_C_NV,
		#endif
		#if defined(GL_VARIABLE_D_NV)
			eVariableDNv = (GLenum)GL_VARIABLE_D_NV,
		#endif
		#if defined(GL_VARIABLE_E_NV)
			eVariableENv = (GLenum)GL_VARIABLE_E_NV,
		#endif
		#if defined(GL_VARIABLE_F_NV)
			eVariableFNv = (GLenum)GL_VARIABLE_F_NV,
		#endif
		#if defined(GL_VARIABLE_G_NV)
			eVariableGNv = (GLenum)GL_VARIABLE_G_NV,
		#endif
	};

	enum class PathColor : GLenum {
		#if defined(GL_PRIMARY_COLOR)
			ePrimaryColor = (GLenum)GL_PRIMARY_COLOR,
		#endif
		#if defined(GL_PRIMARY_COLOR_NV)
			ePrimaryColorNv = (GLenum)GL_PRIMARY_COLOR_NV,
		#endif
		#if defined(GL_SECONDARY_COLOR_NV)
			eSecondaryColorNv = (GLenum)GL_SECONDARY_COLOR_NV,
		#endif
	};

	enum class CombinerMappingNV : GLenum {
		#if defined(GL_EXPAND_NEGATE_NV)
			eExpandNegateNv = (GLenum)GL_EXPAND_NEGATE_NV,
		#endif
		#if defined(GL_EXPAND_NORMAL_NV)
			eExpandNormalNv = (GLenum)GL_EXPAND_NORMAL_NV,
		#endif
		#if defined(GL_HALF_BIAS_NEGATE_NV)
			eHalfBiasNegateNv = (GLenum)GL_HALF_BIAS_NEGATE_NV,
		#endif
		#if defined(GL_HALF_BIAS_NORMAL_NV)
			eHalfBiasNormalNv = (GLenum)GL_HALF_BIAS_NORMAL_NV,
		#endif
		#if defined(GL_SIGNED_IDENTITY_NV)
			eSignedIdentityNv = (GLenum)GL_SIGNED_IDENTITY_NV,
		#endif
		#if defined(GL_SIGNED_NEGATE_NV)
			eSignedNegateNv = (GLenum)GL_SIGNED_NEGATE_NV,
		#endif
		#if defined(GL_UNSIGNED_IDENTITY_NV)
			eUnsignedIdentityNv = (GLenum)GL_UNSIGNED_IDENTITY_NV,
		#endif
		#if defined(GL_UNSIGNED_INVERT_NV)
			eUnsignedInvertNv = (GLenum)GL_UNSIGNED_INVERT_NV,
		#endif
	};

	enum class CombinerParameterNV : GLenum {
		#if defined(GL_COMBINER_COMPONENT_USAGE_NV)
			eCombinerComponentUsageNv = (GLenum)GL_COMBINER_COMPONENT_USAGE_NV,
		#endif
		#if defined(GL_COMBINER_INPUT_NV)
			eCombinerInputNv = (GLenum)GL_COMBINER_INPUT_NV,
		#endif
		#if defined(GL_COMBINER_MAPPING_NV)
			eCombinerMappingNv = (GLenum)GL_COMBINER_MAPPING_NV,
		#endif
	};

	enum class CombinerStageNV : GLenum {
		#if defined(GL_COMBINER0_NV)
			eCombiner0Nv = (GLenum)GL_COMBINER0_NV,
		#endif
		#if defined(GL_COMBINER1_NV)
			eCombiner1Nv = (GLenum)GL_COMBINER1_NV,
		#endif
		#if defined(GL_COMBINER2_NV)
			eCombiner2Nv = (GLenum)GL_COMBINER2_NV,
		#endif
		#if defined(GL_COMBINER3_NV)
			eCombiner3Nv = (GLenum)GL_COMBINER3_NV,
		#endif
		#if defined(GL_COMBINER4_NV)
			eCombiner4Nv = (GLenum)GL_COMBINER4_NV,
		#endif
		#if defined(GL_COMBINER5_NV)
			eCombiner5Nv = (GLenum)GL_COMBINER5_NV,
		#endif
		#if defined(GL_COMBINER6_NV)
			eCombiner6Nv = (GLenum)GL_COMBINER6_NV,
		#endif
		#if defined(GL_COMBINER7_NV)
			eCombiner7Nv = (GLenum)GL_COMBINER7_NV,
		#endif
	};

	enum class PixelStoreSubsampleRate : GLenum {
		#if defined(GL_PIXEL_SUBSAMPLE_2424_SGIX)
			ePixelSubsample2424Sgix = (GLenum)GL_PIXEL_SUBSAMPLE_2424_SGIX,
		#endif
		#if defined(GL_PIXEL_SUBSAMPLE_4242_SGIX)
			ePixelSubsample4242Sgix = (GLenum)GL_PIXEL_SUBSAMPLE_4242_SGIX,
		#endif
		#if defined(GL_PIXEL_SUBSAMPLE_4444_SGIX)
			ePixelSubsample4444Sgix = (GLenum)GL_PIXEL_SUBSAMPLE_4444_SGIX,
		#endif
	};

	enum class TextureNormalModeEXT : GLenum {
		#if defined(GL_PERTURB_EXT)
			ePerturbExt = (GLenum)GL_PERTURB_EXT,
		#endif
	};

	enum class VertexArrayPNameAPPLE : GLenum {
		#if defined(GL_STORAGE_CACHED_APPLE)
			eStorageCachedApple = (GLenum)GL_STORAGE_CACHED_APPLE,
		#endif
		#if defined(GL_STORAGE_CLIENT_APPLE)
			eStorageClientApple = (GLenum)GL_STORAGE_CLIENT_APPLE,
		#endif
		#if defined(GL_STORAGE_SHARED_APPLE)
			eStorageSharedApple = (GLenum)GL_STORAGE_SHARED_APPLE,
		#endif
	};

	enum class VertexAttribEnum : GLenum {
		#if defined(GL_CURRENT_VERTEX_ATTRIB)
			eCurrentVertexAttrib = (GLenum)GL_CURRENT_VERTEX_ATTRIB,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING)
			eVertexAttribArrayBufferBinding = (GLenum)GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_DIVISOR)
			eVertexAttribArrayDivisor = (GLenum)GL_VERTEX_ATTRIB_ARRAY_DIVISOR,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_ENABLED)
			eVertexAttribArrayEnabled = (GLenum)GL_VERTEX_ATTRIB_ARRAY_ENABLED,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_INTEGER)
			eVertexAttribArrayInteger = (GLenum)GL_VERTEX_ATTRIB_ARRAY_INTEGER,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED)
			eVertexAttribArrayNormalized = (GLenum)GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_SIZE)
			eVertexAttribArraySize = (GLenum)GL_VERTEX_ATTRIB_ARRAY_SIZE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_STRIDE)
			eVertexAttribArrayStride = (GLenum)GL_VERTEX_ATTRIB_ARRAY_STRIDE,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_TYPE)
			eVertexAttribArrayType = (GLenum)GL_VERTEX_ATTRIB_ARRAY_TYPE,
		#endif
	};

	enum class ProgramStringProperty : GLenum {
		#if defined(GL_PROGRAM_STRING_ARB)
			eProgramStringArb = (GLenum)GL_PROGRAM_STRING_ARB,
		#endif
	};

	enum class VertexAttribEnumNV : GLenum {
		#if defined(GL_PROGRAM_PARAMETER_NV)
			eProgramParameterNv = (GLenum)GL_PROGRAM_PARAMETER_NV,
		#endif
	};

	enum class VertexAttribPointerPropertyARB : GLenum {
		#if defined(GL_VERTEX_ATTRIB_ARRAY_POINTER)
			eVertexAttribArrayPointer = (GLenum)GL_VERTEX_ATTRIB_ARRAY_POINTER,
		#endif
		#if defined(GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB)
			eVertexAttribArrayPointerArb = (GLenum)GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB,
		#endif
	};

	enum class EvalTargetNV : GLenum {
		#if defined(GL_EVAL_2D_NV)
			eEval2dNv = (GLenum)GL_EVAL_2D_NV,
		#endif
		#if defined(GL_EVAL_TRIANGULAR_2D_NV)
			eEvalTriangular2dNv = (GLenum)GL_EVAL_TRIANGULAR_2D_NV,
		#endif
	};

	enum class MapParameterNV : GLenum {
		#if defined(GL_MAP_TESSELLATION_NV)
			eMapTessellationNv = (GLenum)GL_MAP_TESSELLATION_NV,
		#endif
	};

	enum class MapAttribParameterNV : GLenum {
		#if defined(GL_MAP_ATTRIB_U_ORDER_NV)
			eMapAttribUOrderNv = (GLenum)GL_MAP_ATTRIB_U_ORDER_NV,
		#endif
		#if defined(GL_MAP_ATTRIB_V_ORDER_NV)
			eMapAttribVOrderNv = (GLenum)GL_MAP_ATTRIB_V_ORDER_NV,
		#endif
	};

	enum class ArrayObjectUsageATI : GLenum {
		#if defined(GL_DYNAMIC_ATI)
			eDynamicAti = (GLenum)GL_DYNAMIC_ATI,
		#endif
		#if defined(GL_STATIC_ATI)
			eStaticAti = (GLenum)GL_STATIC_ATI,
		#endif
	};

	enum class PreserveModeATI : GLenum {
		#if defined(GL_DISCARD_ATI)
			eDiscardAti = (GLenum)GL_DISCARD_ATI,
		#endif
		#if defined(GL_PRESERVE_ATI)
			ePreserveAti = (GLenum)GL_PRESERVE_ATI,
		#endif
	};

	enum class ArrayObjectPNameATI : GLenum {
		#if defined(GL_OBJECT_BUFFER_SIZE_ATI)
			eObjectBufferSizeAti = (GLenum)GL_OBJECT_BUFFER_SIZE_ATI,
		#endif
		#if defined(GL_OBJECT_BUFFER_USAGE_ATI)
			eObjectBufferUsageAti = (GLenum)GL_OBJECT_BUFFER_USAGE_ATI,
		#endif
	};

	enum class VertexStreamATI : GLenum {
		#if defined(GL_VERTEX_STREAM0_ATI)
			eVertexStream0Ati = (GLenum)GL_VERTEX_STREAM0_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM1_ATI)
			eVertexStream1Ati = (GLenum)GL_VERTEX_STREAM1_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM2_ATI)
			eVertexStream2Ati = (GLenum)GL_VERTEX_STREAM2_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM3_ATI)
			eVertexStream3Ati = (GLenum)GL_VERTEX_STREAM3_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM4_ATI)
			eVertexStream4Ati = (GLenum)GL_VERTEX_STREAM4_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM5_ATI)
			eVertexStream5Ati = (GLenum)GL_VERTEX_STREAM5_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM6_ATI)
			eVertexStream6Ati = (GLenum)GL_VERTEX_STREAM6_ATI,
		#endif
		#if defined(GL_VERTEX_STREAM7_ATI)
			eVertexStream7Ati = (GLenum)GL_VERTEX_STREAM7_ATI,
		#endif
	};

	enum class GetTexBumpParameterATI : GLenum {
		#if defined(GL_BUMP_NUM_TEX_UNITS_ATI)
			eBumpNumTexUnitsAti = (GLenum)GL_BUMP_NUM_TEX_UNITS_ATI,
		#endif
		#if defined(GL_BUMP_ROT_MATRIX_ATI)
			eBumpRotMatrixAti = (GLenum)GL_BUMP_ROT_MATRIX_ATI,
		#endif
		#if defined(GL_BUMP_ROT_MATRIX_SIZE_ATI)
			eBumpRotMatrixSizeAti = (GLenum)GL_BUMP_ROT_MATRIX_SIZE_ATI,
		#endif
		#if defined(GL_BUMP_TEX_UNITS_ATI)
			eBumpTexUnitsAti = (GLenum)GL_BUMP_TEX_UNITS_ATI,
		#endif
	};

	enum class TexBumpParameterATI : GLenum {
		#if defined(GL_BUMP_ROT_MATRIX_ATI)
			eBumpRotMatrixAti = (GLenum)GL_BUMP_ROT_MATRIX_ATI,
		#endif
	};

	enum class VertexShaderOpEXT : GLenum {
		#if defined(GL_OP_ADD_EXT)
			eOpAddExt = (GLenum)GL_OP_ADD_EXT,
		#endif
		#if defined(GL_OP_CLAMP_EXT)
			eOpClampExt = (GLenum)GL_OP_CLAMP_EXT,
		#endif
		#if defined(GL_OP_CROSS_PRODUCT_EXT)
			eOpCrossProductExt = (GLenum)GL_OP_CROSS_PRODUCT_EXT,
		#endif
		#if defined(GL_OP_DOT3_EXT)
			eOpDot3Ext = (GLenum)GL_OP_DOT3_EXT,
		#endif
		#if defined(GL_OP_DOT4_EXT)
			eOpDot4Ext = (GLenum)GL_OP_DOT4_EXT,
		#endif
		#if defined(GL_OP_EXP_BASE_2_EXT)
			eOpExpBase2Ext = (GLenum)GL_OP_EXP_BASE_2_EXT,
		#endif
		#if defined(GL_OP_FLOOR_EXT)
			eOpFloorExt = (GLenum)GL_OP_FLOOR_EXT,
		#endif
		#if defined(GL_OP_FRAC_EXT)
			eOpFracExt = (GLenum)GL_OP_FRAC_EXT,
		#endif
		#if defined(GL_OP_INDEX_EXT)
			eOpIndexExt = (GLenum)GL_OP_INDEX_EXT,
		#endif
		#if defined(GL_OP_LOG_BASE_2_EXT)
			eOpLogBase2Ext = (GLenum)GL_OP_LOG_BASE_2_EXT,
		#endif
		#if defined(GL_OP_MADD_EXT)
			eOpMaddExt = (GLenum)GL_OP_MADD_EXT,
		#endif
		#if defined(GL_OP_MAX_EXT)
			eOpMaxExt = (GLenum)GL_OP_MAX_EXT,
		#endif
		#if defined(GL_OP_MIN_EXT)
			eOpMinExt = (GLenum)GL_OP_MIN_EXT,
		#endif
		#if defined(GL_OP_MOV_EXT)
			eOpMovExt = (GLenum)GL_OP_MOV_EXT,
		#endif
		#if defined(GL_OP_MULTIPLY_MATRIX_EXT)
			eOpMultiplyMatrixExt = (GLenum)GL_OP_MULTIPLY_MATRIX_EXT,
		#endif
		#if defined(GL_OP_MUL_EXT)
			eOpMulExt = (GLenum)GL_OP_MUL_EXT,
		#endif
		#if defined(GL_OP_NEGATE_EXT)
			eOpNegateExt = (GLenum)GL_OP_NEGATE_EXT,
		#endif
		#if defined(GL_OP_POWER_EXT)
			eOpPowerExt = (GLenum)GL_OP_POWER_EXT,
		#endif
		#if defined(GL_OP_RECIP_EXT)
			eOpRecipExt = (GLenum)GL_OP_RECIP_EXT,
		#endif
		#if defined(GL_OP_RECIP_SQRT_EXT)
			eOpRecipSqrtExt = (GLenum)GL_OP_RECIP_SQRT_EXT,
		#endif
		#if defined(GL_OP_ROUND_EXT)
			eOpRoundExt = (GLenum)GL_OP_ROUND_EXT,
		#endif
		#if defined(GL_OP_SET_GE_EXT)
			eOpSetGeExt = (GLenum)GL_OP_SET_GE_EXT,
		#endif
		#if defined(GL_OP_SET_LT_EXT)
			eOpSetLtExt = (GLenum)GL_OP_SET_LT_EXT,
		#endif
		#if defined(GL_OP_SUB_EXT)
			eOpSubExt = (GLenum)GL_OP_SUB_EXT,
		#endif
	};

	enum class DataTypeEXT : GLenum {
		#if defined(GL_MATRIX_EXT)
			eMatrixExt = (GLenum)GL_MATRIX_EXT,
		#endif
		#if defined(GL_SCALAR_EXT)
			eScalarExt = (GLenum)GL_SCALAR_EXT,
		#endif
		#if defined(GL_VECTOR_EXT)
			eVectorExt = (GLenum)GL_VECTOR_EXT,
		#endif
	};

	enum class VertexShaderStorageTypeEXT : GLenum {
		#if defined(GL_INVARIANT_EXT)
			eInvariantExt = (GLenum)GL_INVARIANT_EXT,
		#endif
		#if defined(GL_LOCAL_CONSTANT_EXT)
			eLocalConstantExt = (GLenum)GL_LOCAL_CONSTANT_EXT,
		#endif
		#if defined(GL_LOCAL_EXT)
			eLocalExt = (GLenum)GL_LOCAL_EXT,
		#endif
		#if defined(GL_VARIANT_EXT)
			eVariantExt = (GLenum)GL_VARIANT_EXT,
		#endif
	};

	enum class VertexShaderCoordOutEXT : GLenum {
		#if defined(GL_NEGATIVE_ONE_EXT)
			eNegativeOneExt = (GLenum)GL_NEGATIVE_ONE_EXT,
		#endif
		#if defined(GL_NEGATIVE_W_EXT)
			eNegativeWExt = (GLenum)GL_NEGATIVE_W_EXT,
		#endif
		#if defined(GL_NEGATIVE_X_EXT)
			eNegativeXExt = (GLenum)GL_NEGATIVE_X_EXT,
		#endif
		#if defined(GL_NEGATIVE_Y_EXT)
			eNegativeYExt = (GLenum)GL_NEGATIVE_Y_EXT,
		#endif
		#if defined(GL_NEGATIVE_Z_EXT)
			eNegativeZExt = (GLenum)GL_NEGATIVE_Z_EXT,
		#endif
		#if defined(GL_ONE_EXT)
			eOneExt = (GLenum)GL_ONE_EXT,
		#endif
		#if defined(GL_W_EXT)
			eWExt = (GLenum)GL_W_EXT,
		#endif
		#if defined(GL_X_EXT)
			eXExt = (GLenum)GL_X_EXT,
		#endif
		#if defined(GL_Y_EXT)
			eYExt = (GLenum)GL_Y_EXT,
		#endif
		#if defined(GL_ZERO_EXT)
			eZeroExt = (GLenum)GL_ZERO_EXT,
		#endif
		#if defined(GL_Z_EXT)
			eZExt = (GLenum)GL_Z_EXT,
		#endif
	};

	enum class ParameterRangeEXT : GLenum {
		#if defined(GL_FULL_RANGE_EXT)
			eFullRangeExt = (GLenum)GL_FULL_RANGE_EXT,
		#endif
		#if defined(GL_NORMALIZED_RANGE_EXT)
			eNormalizedRangeExt = (GLenum)GL_NORMALIZED_RANGE_EXT,
		#endif
	};

	enum class VertexShaderParameterEXT : GLenum {
		#if defined(GL_CURRENT_VERTEX_EXT)
			eCurrentVertexExt = (GLenum)GL_CURRENT_VERTEX_EXT,
		#endif
		#if defined(GL_MVP_MATRIX_EXT)
			eMvpMatrixExt = (GLenum)GL_MVP_MATRIX_EXT,
		#endif
	};

	enum class GetVariantValueEXT : GLenum {
		#if defined(GL_VARIANT_ARRAY_STRIDE_EXT)
			eVariantArrayStrideExt = (GLenum)GL_VARIANT_ARRAY_STRIDE_EXT,
		#endif
		#if defined(GL_VARIANT_ARRAY_TYPE_EXT)
			eVariantArrayTypeExt = (GLenum)GL_VARIANT_ARRAY_TYPE_EXT,
		#endif
		#if defined(GL_VARIANT_DATATYPE_EXT)
			eVariantDatatypeExt = (GLenum)GL_VARIANT_DATATYPE_EXT,
		#endif
		#if defined(GL_VARIANT_VALUE_EXT)
			eVariantValueExt = (GLenum)GL_VARIANT_VALUE_EXT,
		#endif
	};

	enum class VariantCapEXT : GLenum {
		#if defined(GL_VARIANT_ARRAY_EXT)
			eVariantArrayExt = (GLenum)GL_VARIANT_ARRAY_EXT,
		#endif
	};

	enum class PNTrianglesPNameATI : GLenum {
		#if defined(GL_PN_TRIANGLES_NORMAL_MODE_ATI)
			ePnTrianglesNormalModeAti = (GLenum)GL_PN_TRIANGLES_NORMAL_MODE_ATI,
		#endif
		#if defined(GL_PN_TRIANGLES_POINT_MODE_ATI)
			ePnTrianglesPointModeAti = (GLenum)GL_PN_TRIANGLES_POINT_MODE_ATI,
		#endif
		#if defined(GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI)
			ePnTrianglesTesselationLevelAti = (GLenum)GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI,
		#endif
	};

	enum class QueryParameterName : GLenum {
		#if defined(GL_CURRENT_QUERY)
			eCurrentQuery = (GLenum)GL_CURRENT_QUERY,
		#endif
		#if defined(GL_QUERY_COUNTER_BITS)
			eQueryCounterBits = (GLenum)GL_QUERY_COUNTER_BITS,
		#endif
	};

	enum class OcclusionQueryParameterNameNV : GLenum {
		#if defined(GL_PIXEL_COUNT_AVAILABLE_NV)
			ePixelCountAvailableNv = (GLenum)GL_PIXEL_COUNT_AVAILABLE_NV,
		#endif
		#if defined(GL_PIXEL_COUNT_NV)
			ePixelCountNv = (GLenum)GL_PIXEL_COUNT_NV,
		#endif
	};

	enum class ProgramFormat : GLenum {
		#if defined(GL_PROGRAM_FORMAT_ASCII_ARB)
			eProgramFormatAsciiArb = (GLenum)GL_PROGRAM_FORMAT_ASCII_ARB,
		#endif
	};

	enum class PixelDataRangeTargetNV : GLenum {
		#if defined(GL_READ_PIXEL_DATA_RANGE_NV)
			eReadPixelDataRangeNv = (GLenum)GL_READ_PIXEL_DATA_RANGE_NV,
		#endif
		#if defined(GL_WRITE_PIXEL_DATA_RANGE_NV)
			eWritePixelDataRangeNv = (GLenum)GL_WRITE_PIXEL_DATA_RANGE_NV,
		#endif
	};

	enum class CopyBufferSubDataTarget : GLenum {
		#if defined(GL_ARRAY_BUFFER)
			eArrayBuffer = (GLenum)GL_ARRAY_BUFFER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER)
			eAtomicCounterBuffer = (GLenum)GL_ATOMIC_COUNTER_BUFFER,
		#endif
		#if defined(GL_COPY_READ_BUFFER)
			eCopyReadBuffer = (GLenum)GL_COPY_READ_BUFFER,
		#endif
		#if defined(GL_COPY_WRITE_BUFFER)
			eCopyWriteBuffer = (GLenum)GL_COPY_WRITE_BUFFER,
		#endif
		#if defined(GL_DISPATCH_INDIRECT_BUFFER)
			eDispatchIndirectBuffer = (GLenum)GL_DISPATCH_INDIRECT_BUFFER,
		#endif
		#if defined(GL_DRAW_INDIRECT_BUFFER)
			eDrawIndirectBuffer = (GLenum)GL_DRAW_INDIRECT_BUFFER,
		#endif
		#if defined(GL_ELEMENT_ARRAY_BUFFER)
			eElementArrayBuffer = (GLenum)GL_ELEMENT_ARRAY_BUFFER,
		#endif
		#if defined(GL_PIXEL_PACK_BUFFER)
			ePixelPackBuffer = (GLenum)GL_PIXEL_PACK_BUFFER,
		#endif
		#if defined(GL_PIXEL_UNPACK_BUFFER)
			ePixelUnpackBuffer = (GLenum)GL_PIXEL_UNPACK_BUFFER,
		#endif
		#if defined(GL_QUERY_BUFFER)
			eQueryBuffer = (GLenum)GL_QUERY_BUFFER,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER)
			eShaderStorageBuffer = (GLenum)GL_SHADER_STORAGE_BUFFER,
		#endif
		#if defined(GL_TEXTURE_BUFFER)
			eTextureBuffer = (GLenum)GL_TEXTURE_BUFFER,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER)
			eTransformFeedbackBuffer = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER,
		#endif
		#if defined(GL_UNIFORM_BUFFER)
			eUniformBuffer = (GLenum)GL_UNIFORM_BUFFER,
		#endif
	};

	enum class BufferStorageTarget : GLenum {
		#if defined(GL_ARRAY_BUFFER)
			eArrayBuffer = (GLenum)GL_ARRAY_BUFFER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER)
			eAtomicCounterBuffer = (GLenum)GL_ATOMIC_COUNTER_BUFFER,
		#endif
		#if defined(GL_COPY_READ_BUFFER)
			eCopyReadBuffer = (GLenum)GL_COPY_READ_BUFFER,
		#endif
		#if defined(GL_COPY_WRITE_BUFFER)
			eCopyWriteBuffer = (GLenum)GL_COPY_WRITE_BUFFER,
		#endif
		#if defined(GL_DISPATCH_INDIRECT_BUFFER)
			eDispatchIndirectBuffer = (GLenum)GL_DISPATCH_INDIRECT_BUFFER,
		#endif
		#if defined(GL_DRAW_INDIRECT_BUFFER)
			eDrawIndirectBuffer = (GLenum)GL_DRAW_INDIRECT_BUFFER,
		#endif
		#if defined(GL_ELEMENT_ARRAY_BUFFER)
			eElementArrayBuffer = (GLenum)GL_ELEMENT_ARRAY_BUFFER,
		#endif
		#if defined(GL_PIXEL_PACK_BUFFER)
			ePixelPackBuffer = (GLenum)GL_PIXEL_PACK_BUFFER,
		#endif
		#if defined(GL_PIXEL_UNPACK_BUFFER)
			ePixelUnpackBuffer = (GLenum)GL_PIXEL_UNPACK_BUFFER,
		#endif
		#if defined(GL_QUERY_BUFFER)
			eQueryBuffer = (GLenum)GL_QUERY_BUFFER,
		#endif
		#if defined(GL_SHADER_STORAGE_BUFFER)
			eShaderStorageBuffer = (GLenum)GL_SHADER_STORAGE_BUFFER,
		#endif
		#if defined(GL_TEXTURE_BUFFER)
			eTextureBuffer = (GLenum)GL_TEXTURE_BUFFER,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER)
			eTransformFeedbackBuffer = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER,
		#endif
		#if defined(GL_UNIFORM_BUFFER)
			eUniformBuffer = (GLenum)GL_UNIFORM_BUFFER,
		#endif
	};

	enum class BufferAccessARB : GLenum {
		#if defined(GL_READ_ONLY)
			eReadOnly = (GLenum)GL_READ_ONLY,
		#endif
		#if defined(GL_READ_WRITE)
			eReadWrite = (GLenum)GL_READ_WRITE,
		#endif
		#if defined(GL_WRITE_ONLY)
			eWriteOnly = (GLenum)GL_WRITE_ONLY,
		#endif
	};

	enum class BufferPointerNameARB : GLenum {
		#if defined(GL_BUFFER_MAP_POINTER)
			eBufferMapPointer = (GLenum)GL_BUFFER_MAP_POINTER,
		#endif
		#if defined(GL_BUFFER_MAP_POINTER_ARB)
			eBufferMapPointerArb = (GLenum)GL_BUFFER_MAP_POINTER_ARB,
		#endif
	};

	enum class VertexBufferObjectUsage : GLenum {
		#if defined(GL_DYNAMIC_COPY)
			eDynamicCopy = (GLenum)GL_DYNAMIC_COPY,
		#endif
		#if defined(GL_DYNAMIC_DRAW)
			eDynamicDraw = (GLenum)GL_DYNAMIC_DRAW,
		#endif
		#if defined(GL_DYNAMIC_READ)
			eDynamicRead = (GLenum)GL_DYNAMIC_READ,
		#endif
		#if defined(GL_STATIC_COPY)
			eStaticCopy = (GLenum)GL_STATIC_COPY,
		#endif
		#if defined(GL_STATIC_DRAW)
			eStaticDraw = (GLenum)GL_STATIC_DRAW,
		#endif
		#if defined(GL_STATIC_READ)
			eStaticRead = (GLenum)GL_STATIC_READ,
		#endif
		#if defined(GL_STREAM_COPY)
			eStreamCopy = (GLenum)GL_STREAM_COPY,
		#endif
		#if defined(GL_STREAM_DRAW)
			eStreamDraw = (GLenum)GL_STREAM_DRAW,
		#endif
		#if defined(GL_STREAM_READ)
			eStreamRead = (GLenum)GL_STREAM_READ,
		#endif
	};

	enum class BufferUsageARB : GLenum {
		#if defined(GL_DYNAMIC_COPY)
			eDynamicCopy = (GLenum)GL_DYNAMIC_COPY,
		#endif
		#if defined(GL_DYNAMIC_DRAW)
			eDynamicDraw = (GLenum)GL_DYNAMIC_DRAW,
		#endif
		#if defined(GL_DYNAMIC_READ)
			eDynamicRead = (GLenum)GL_DYNAMIC_READ,
		#endif
		#if defined(GL_STATIC_COPY)
			eStaticCopy = (GLenum)GL_STATIC_COPY,
		#endif
		#if defined(GL_STATIC_DRAW)
			eStaticDraw = (GLenum)GL_STATIC_DRAW,
		#endif
		#if defined(GL_STATIC_READ)
			eStaticRead = (GLenum)GL_STATIC_READ,
		#endif
		#if defined(GL_STREAM_COPY)
			eStreamCopy = (GLenum)GL_STREAM_COPY,
		#endif
		#if defined(GL_STREAM_DRAW)
			eStreamDraw = (GLenum)GL_STREAM_DRAW,
		#endif
		#if defined(GL_STREAM_READ)
			eStreamRead = (GLenum)GL_STREAM_READ,
		#endif
	};

	enum class ClampColorTargetARB : GLenum {
		#if defined(GL_CLAMP_FRAGMENT_COLOR_ARB)
			eClampFragmentColorArb = (GLenum)GL_CLAMP_FRAGMENT_COLOR_ARB,
		#endif
		#if defined(GL_CLAMP_READ_COLOR)
			eClampReadColor = (GLenum)GL_CLAMP_READ_COLOR,
		#endif
		#if defined(GL_CLAMP_READ_COLOR_ARB)
			eClampReadColorArb = (GLenum)GL_CLAMP_READ_COLOR_ARB,
		#endif
		#if defined(GL_CLAMP_VERTEX_COLOR_ARB)
			eClampVertexColorArb = (GLenum)GL_CLAMP_VERTEX_COLOR_ARB,
		#endif
	};

	enum class FragmentShaderRegATI : GLenum {
		#if defined(GL_REG_0_ATI)
			eReg0Ati = (GLenum)GL_REG_0_ATI,
		#endif
		#if defined(GL_REG_10_ATI)
			eReg10Ati = (GLenum)GL_REG_10_ATI,
		#endif
		#if defined(GL_REG_11_ATI)
			eReg11Ati = (GLenum)GL_REG_11_ATI,
		#endif
		#if defined(GL_REG_12_ATI)
			eReg12Ati = (GLenum)GL_REG_12_ATI,
		#endif
		#if defined(GL_REG_13_ATI)
			eReg13Ati = (GLenum)GL_REG_13_ATI,
		#endif
		#if defined(GL_REG_14_ATI)
			eReg14Ati = (GLenum)GL_REG_14_ATI,
		#endif
		#if defined(GL_REG_15_ATI)
			eReg15Ati = (GLenum)GL_REG_15_ATI,
		#endif
		#if defined(GL_REG_16_ATI)
			eReg16Ati = (GLenum)GL_REG_16_ATI,
		#endif
		#if defined(GL_REG_17_ATI)
			eReg17Ati = (GLenum)GL_REG_17_ATI,
		#endif
		#if defined(GL_REG_18_ATI)
			eReg18Ati = (GLenum)GL_REG_18_ATI,
		#endif
		#if defined(GL_REG_19_ATI)
			eReg19Ati = (GLenum)GL_REG_19_ATI,
		#endif
		#if defined(GL_REG_1_ATI)
			eReg1Ati = (GLenum)GL_REG_1_ATI,
		#endif
		#if defined(GL_REG_20_ATI)
			eReg20Ati = (GLenum)GL_REG_20_ATI,
		#endif
		#if defined(GL_REG_21_ATI)
			eReg21Ati = (GLenum)GL_REG_21_ATI,
		#endif
		#if defined(GL_REG_22_ATI)
			eReg22Ati = (GLenum)GL_REG_22_ATI,
		#endif
		#if defined(GL_REG_23_ATI)
			eReg23Ati = (GLenum)GL_REG_23_ATI,
		#endif
		#if defined(GL_REG_24_ATI)
			eReg24Ati = (GLenum)GL_REG_24_ATI,
		#endif
		#if defined(GL_REG_25_ATI)
			eReg25Ati = (GLenum)GL_REG_25_ATI,
		#endif
		#if defined(GL_REG_26_ATI)
			eReg26Ati = (GLenum)GL_REG_26_ATI,
		#endif
		#if defined(GL_REG_27_ATI)
			eReg27Ati = (GLenum)GL_REG_27_ATI,
		#endif
		#if defined(GL_REG_28_ATI)
			eReg28Ati = (GLenum)GL_REG_28_ATI,
		#endif
		#if defined(GL_REG_29_ATI)
			eReg29Ati = (GLenum)GL_REG_29_ATI,
		#endif
		#if defined(GL_REG_2_ATI)
			eReg2Ati = (GLenum)GL_REG_2_ATI,
		#endif
		#if defined(GL_REG_30_ATI)
			eReg30Ati = (GLenum)GL_REG_30_ATI,
		#endif
		#if defined(GL_REG_31_ATI)
			eReg31Ati = (GLenum)GL_REG_31_ATI,
		#endif
		#if defined(GL_REG_3_ATI)
			eReg3Ati = (GLenum)GL_REG_3_ATI,
		#endif
		#if defined(GL_REG_4_ATI)
			eReg4Ati = (GLenum)GL_REG_4_ATI,
		#endif
		#if defined(GL_REG_5_ATI)
			eReg5Ati = (GLenum)GL_REG_5_ATI,
		#endif
		#if defined(GL_REG_6_ATI)
			eReg6Ati = (GLenum)GL_REG_6_ATI,
		#endif
		#if defined(GL_REG_7_ATI)
			eReg7Ati = (GLenum)GL_REG_7_ATI,
		#endif
		#if defined(GL_REG_8_ATI)
			eReg8Ati = (GLenum)GL_REG_8_ATI,
		#endif
		#if defined(GL_REG_9_ATI)
			eReg9Ati = (GLenum)GL_REG_9_ATI,
		#endif
	};

	enum class FragmentShaderConATI : GLenum {
		#if defined(GL_CON_0_ATI)
			eCon0Ati = (GLenum)GL_CON_0_ATI,
		#endif
		#if defined(GL_CON_10_ATI)
			eCon10Ati = (GLenum)GL_CON_10_ATI,
		#endif
		#if defined(GL_CON_11_ATI)
			eCon11Ati = (GLenum)GL_CON_11_ATI,
		#endif
		#if defined(GL_CON_12_ATI)
			eCon12Ati = (GLenum)GL_CON_12_ATI,
		#endif
		#if defined(GL_CON_13_ATI)
			eCon13Ati = (GLenum)GL_CON_13_ATI,
		#endif
		#if defined(GL_CON_14_ATI)
			eCon14Ati = (GLenum)GL_CON_14_ATI,
		#endif
		#if defined(GL_CON_15_ATI)
			eCon15Ati = (GLenum)GL_CON_15_ATI,
		#endif
		#if defined(GL_CON_16_ATI)
			eCon16Ati = (GLenum)GL_CON_16_ATI,
		#endif
		#if defined(GL_CON_17_ATI)
			eCon17Ati = (GLenum)GL_CON_17_ATI,
		#endif
		#if defined(GL_CON_18_ATI)
			eCon18Ati = (GLenum)GL_CON_18_ATI,
		#endif
		#if defined(GL_CON_19_ATI)
			eCon19Ati = (GLenum)GL_CON_19_ATI,
		#endif
		#if defined(GL_CON_1_ATI)
			eCon1Ati = (GLenum)GL_CON_1_ATI,
		#endif
		#if defined(GL_CON_20_ATI)
			eCon20Ati = (GLenum)GL_CON_20_ATI,
		#endif
		#if defined(GL_CON_21_ATI)
			eCon21Ati = (GLenum)GL_CON_21_ATI,
		#endif
		#if defined(GL_CON_22_ATI)
			eCon22Ati = (GLenum)GL_CON_22_ATI,
		#endif
		#if defined(GL_CON_23_ATI)
			eCon23Ati = (GLenum)GL_CON_23_ATI,
		#endif
		#if defined(GL_CON_24_ATI)
			eCon24Ati = (GLenum)GL_CON_24_ATI,
		#endif
		#if defined(GL_CON_25_ATI)
			eCon25Ati = (GLenum)GL_CON_25_ATI,
		#endif
		#if defined(GL_CON_26_ATI)
			eCon26Ati = (GLenum)GL_CON_26_ATI,
		#endif
		#if defined(GL_CON_27_ATI)
			eCon27Ati = (GLenum)GL_CON_27_ATI,
		#endif
		#if defined(GL_CON_28_ATI)
			eCon28Ati = (GLenum)GL_CON_28_ATI,
		#endif
		#if defined(GL_CON_29_ATI)
			eCon29Ati = (GLenum)GL_CON_29_ATI,
		#endif
		#if defined(GL_CON_2_ATI)
			eCon2Ati = (GLenum)GL_CON_2_ATI,
		#endif
		#if defined(GL_CON_30_ATI)
			eCon30Ati = (GLenum)GL_CON_30_ATI,
		#endif
		#if defined(GL_CON_31_ATI)
			eCon31Ati = (GLenum)GL_CON_31_ATI,
		#endif
		#if defined(GL_CON_3_ATI)
			eCon3Ati = (GLenum)GL_CON_3_ATI,
		#endif
		#if defined(GL_CON_4_ATI)
			eCon4Ati = (GLenum)GL_CON_4_ATI,
		#endif
		#if defined(GL_CON_5_ATI)
			eCon5Ati = (GLenum)GL_CON_5_ATI,
		#endif
		#if defined(GL_CON_6_ATI)
			eCon6Ati = (GLenum)GL_CON_6_ATI,
		#endif
		#if defined(GL_CON_7_ATI)
			eCon7Ati = (GLenum)GL_CON_7_ATI,
		#endif
		#if defined(GL_CON_8_ATI)
			eCon8Ati = (GLenum)GL_CON_8_ATI,
		#endif
		#if defined(GL_CON_9_ATI)
			eCon9Ati = (GLenum)GL_CON_9_ATI,
		#endif
	};

	enum class FragmentOp1ATI : GLenum {
		#if defined(GL_MOV_ATI)
			eMovAti = (GLenum)GL_MOV_ATI,
		#endif
	};

	enum class FragmentOp2ATI : GLenum {
		#if defined(GL_ADD_ATI)
			eAddAti = (GLenum)GL_ADD_ATI,
		#endif
		#if defined(GL_DOT3_ATI)
			eDot3Ati = (GLenum)GL_DOT3_ATI,
		#endif
		#if defined(GL_DOT4_ATI)
			eDot4Ati = (GLenum)GL_DOT4_ATI,
		#endif
		#if defined(GL_MUL_ATI)
			eMulAti = (GLenum)GL_MUL_ATI,
		#endif
		#if defined(GL_SUB_ATI)
			eSubAti = (GLenum)GL_SUB_ATI,
		#endif
	};

	enum class FragmentOp3ATI : GLenum {
		#if defined(GL_CND0_ATI)
			eCnd0Ati = (GLenum)GL_CND0_ATI,
		#endif
		#if defined(GL_CND_ATI)
			eCndAti = (GLenum)GL_CND_ATI,
		#endif
		#if defined(GL_DOT2_ADD_ATI)
			eDot2AddAti = (GLenum)GL_DOT2_ADD_ATI,
		#endif
		#if defined(GL_LERP_ATI)
			eLerpAti = (GLenum)GL_LERP_ATI,
		#endif
		#if defined(GL_MAD_ATI)
			eMadAti = (GLenum)GL_MAD_ATI,
		#endif
	};

	enum class SwizzleOpATI : GLenum {
		#if defined(GL_SWIZZLE_STQ_ATI)
			eSwizzleStqAti = (GLenum)GL_SWIZZLE_STQ_ATI,
		#endif
		#if defined(GL_SWIZZLE_STQ_DQ_ATI)
			eSwizzleStqDqAti = (GLenum)GL_SWIZZLE_STQ_DQ_ATI,
		#endif
		#if defined(GL_SWIZZLE_STR_ATI)
			eSwizzleStrAti = (GLenum)GL_SWIZZLE_STR_ATI,
		#endif
		#if defined(GL_SWIZZLE_STR_DR_ATI)
			eSwizzleStrDrAti = (GLenum)GL_SWIZZLE_STR_DR_ATI,
		#endif
	};

	enum class ObjectTypeAPPLE : GLenum {
		#if defined(GL_DRAW_PIXELS_APPLE)
			eDrawPixelsApple = (GLenum)GL_DRAW_PIXELS_APPLE,
		#endif
		#if defined(GL_FENCE_APPLE)
			eFenceApple = (GLenum)GL_FENCE_APPLE,
		#endif
	};

	enum class UniformPName : GLenum {
		#if defined(GL_UNIFORM_ARRAY_STRIDE)
			eUniformArrayStride = (GLenum)GL_UNIFORM_ARRAY_STRIDE,
		#endif
		#if defined(GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX)
			eUniformAtomicCounterBufferIndex = (GLenum)GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX,
		#endif
		#if defined(GL_UNIFORM_BLOCK_INDEX)
			eUniformBlockIndex = (GLenum)GL_UNIFORM_BLOCK_INDEX,
		#endif
		#if defined(GL_UNIFORM_IS_ROW_MAJOR)
			eUniformIsRowMajor = (GLenum)GL_UNIFORM_IS_ROW_MAJOR,
		#endif
		#if defined(GL_UNIFORM_MATRIX_STRIDE)
			eUniformMatrixStride = (GLenum)GL_UNIFORM_MATRIX_STRIDE,
		#endif
		#if defined(GL_UNIFORM_NAME_LENGTH)
			eUniformNameLength = (GLenum)GL_UNIFORM_NAME_LENGTH,
		#endif
		#if defined(GL_UNIFORM_OFFSET)
			eUniformOffset = (GLenum)GL_UNIFORM_OFFSET,
		#endif
		#if defined(GL_UNIFORM_SIZE)
			eUniformSize = (GLenum)GL_UNIFORM_SIZE,
		#endif
		#if defined(GL_UNIFORM_TYPE)
			eUniformType = (GLenum)GL_UNIFORM_TYPE,
		#endif
	};

	enum class SubroutineParameterName : GLenum {
		#if defined(GL_COMPATIBLE_SUBROUTINES)
			eCompatibleSubroutines = (GLenum)GL_COMPATIBLE_SUBROUTINES,
		#endif
		#if defined(GL_NUM_COMPATIBLE_SUBROUTINES)
			eNumCompatibleSubroutines = (GLenum)GL_NUM_COMPATIBLE_SUBROUTINES,
		#endif
		#if defined(GL_UNIFORM_NAME_LENGTH)
			eUniformNameLength = (GLenum)GL_UNIFORM_NAME_LENGTH,
		#endif
		#if defined(GL_UNIFORM_SIZE)
			eUniformSize = (GLenum)GL_UNIFORM_SIZE,
		#endif
	};

	enum class ShaderType : GLenum {
		#if defined(GL_COMPUTE_SHADER)
			eComputeShader = (GLenum)GL_COMPUTE_SHADER,
		#endif
		#if defined(GL_FRAGMENT_SHADER)
			eFragmentShader = (GLenum)GL_FRAGMENT_SHADER,
		#endif
		#if defined(GL_FRAGMENT_SHADER_ARB)
			eFragmentShaderArb = (GLenum)GL_FRAGMENT_SHADER_ARB,
		#endif
		#if defined(GL_GEOMETRY_SHADER)
			eGeometryShader = (GLenum)GL_GEOMETRY_SHADER,
		#endif
		#if defined(GL_TESS_CONTROL_SHADER)
			eTessControlShader = (GLenum)GL_TESS_CONTROL_SHADER,
		#endif
		#if defined(GL_TESS_EVALUATION_SHADER)
			eTessEvaluationShader = (GLenum)GL_TESS_EVALUATION_SHADER,
		#endif
		#if defined(GL_VERTEX_SHADER)
			eVertexShader = (GLenum)GL_VERTEX_SHADER,
		#endif
		#if defined(GL_VERTEX_SHADER_ARB)
			eVertexShaderArb = (GLenum)GL_VERTEX_SHADER_ARB,
		#endif
	};

	enum class ContainerType : GLenum {
		#if defined(GL_PROGRAM_OBJECT_ARB)
			eProgramObjectArb = (GLenum)GL_PROGRAM_OBJECT_ARB,
		#endif
		#if defined(GL_PROGRAM_OBJECT_EXT)
			eProgramObjectExt = (GLenum)GL_PROGRAM_OBJECT_EXT,
		#endif
	};

	enum class ShaderParameterName : GLenum {
		#if defined(GL_COMPILE_STATUS)
			eCompileStatus = (GLenum)GL_COMPILE_STATUS,
		#endif
		#if defined(GL_DELETE_STATUS)
			eDeleteStatus = (GLenum)GL_DELETE_STATUS,
		#endif
		#if defined(GL_INFO_LOG_LENGTH)
			eInfoLogLength = (GLenum)GL_INFO_LOG_LENGTH,
		#endif
		#if defined(GL_SHADER_SOURCE_LENGTH)
			eShaderSourceLength = (GLenum)GL_SHADER_SOURCE_LENGTH,
		#endif
		#if defined(GL_SHADER_TYPE)
			eShaderType = (GLenum)GL_SHADER_TYPE,
		#endif
	};

	enum class ShaderBinaryFormat : GLenum {
		#if defined(GL_GCCSO_SHADER_BINARY_FJ)
			eGccsoShaderBinaryFj = (GLenum)GL_GCCSO_SHADER_BINARY_FJ,
		#endif
		#if defined(GL_MALI_SHADER_BINARY_ARM)
			eMaliShaderBinaryArm = (GLenum)GL_MALI_SHADER_BINARY_ARM,
		#endif
		#if defined(GL_SGX_BINARY_IMG)
			eSgxBinaryImg = (GLenum)GL_SGX_BINARY_IMG,
		#endif
		#if defined(GL_SHADER_BINARY_DMP)
			eShaderBinaryDmp = (GLenum)GL_SHADER_BINARY_DMP,
		#endif
		#if defined(GL_SHADER_BINARY_FORMAT_SPIR_V)
			eShaderBinaryFormatSpirV = (GLenum)GL_SHADER_BINARY_FORMAT_SPIR_V,
		#endif
		#if defined(GL_SHADER_BINARY_VIV)
			eShaderBinaryViv = (GLenum)GL_SHADER_BINARY_VIV,
		#endif
	};

	enum class TransformFeedbackPName : GLenum {
		#if defined(GL_TRANSFORM_FEEDBACK_ACTIVE)
			eTransformFeedbackActive = (GLenum)GL_TRANSFORM_FEEDBACK_ACTIVE,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING)
			eTransformFeedbackBufferBinding = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_BINDING,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE)
			eTransformFeedbackBufferSize = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_SIZE,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_START)
			eTransformFeedbackBufferStart = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_START,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_PAUSED)
			eTransformFeedbackPaused = (GLenum)GL_TRANSFORM_FEEDBACK_PAUSED,
		#endif
	};

	enum class TransformFeedbackBufferMode : GLenum {
		#if defined(GL_INTERLEAVED_ATTRIBS)
			eInterleavedAttribs = (GLenum)GL_INTERLEAVED_ATTRIBS,
		#endif
		#if defined(GL_SEPARATE_ATTRIBS)
			eSeparateAttribs = (GLenum)GL_SEPARATE_ATTRIBS,
		#endif
	};

	enum class ProgramInterface : GLenum {
		#if defined(GL_BUFFER_VARIABLE)
			eBufferVariable = (GLenum)GL_BUFFER_VARIABLE,
		#endif
		#if defined(GL_COMPUTE_SUBROUTINE)
			eComputeSubroutine = (GLenum)GL_COMPUTE_SUBROUTINE,
		#endif
		#if defined(GL_COMPUTE_SUBROUTINE_UNIFORM)
			eComputeSubroutineUniform = (GLenum)GL_COMPUTE_SUBROUTINE_UNIFORM,
		#endif
		#if defined(GL_FRAGMENT_SUBROUTINE)
			eFragmentSubroutine = (GLenum)GL_FRAGMENT_SUBROUTINE,
		#endif
		#if defined(GL_FRAGMENT_SUBROUTINE_UNIFORM)
			eFragmentSubroutineUniform = (GLenum)GL_FRAGMENT_SUBROUTINE_UNIFORM,
		#endif
		#if defined(GL_GEOMETRY_SUBROUTINE)
			eGeometrySubroutine = (GLenum)GL_GEOMETRY_SUBROUTINE,
		#endif
		#if defined(GL_GEOMETRY_SUBROUTINE_UNIFORM)
			eGeometrySubroutineUniform = (GLenum)GL_GEOMETRY_SUBROUTINE_UNIFORM,
		#endif
		#if defined(GL_PROGRAM_INPUT)
			eProgramInput = (GLenum)GL_PROGRAM_INPUT,
		#endif
		#if defined(GL_PROGRAM_OUTPUT)
			eProgramOutput = (GLenum)GL_PROGRAM_OUTPUT,
		#endif
		#if defined(GL_SHADER_STORAGE_BLOCK)
			eShaderStorageBlock = (GLenum)GL_SHADER_STORAGE_BLOCK,
		#endif
		#if defined(GL_TESS_CONTROL_SUBROUTINE)
			eTessControlSubroutine = (GLenum)GL_TESS_CONTROL_SUBROUTINE,
		#endif
		#if defined(GL_TESS_CONTROL_SUBROUTINE_UNIFORM)
			eTessControlSubroutineUniform = (GLenum)GL_TESS_CONTROL_SUBROUTINE_UNIFORM,
		#endif
		#if defined(GL_TESS_EVALUATION_SUBROUTINE)
			eTessEvaluationSubroutine = (GLenum)GL_TESS_EVALUATION_SUBROUTINE,
		#endif
		#if defined(GL_TESS_EVALUATION_SUBROUTINE_UNIFORM)
			eTessEvaluationSubroutineUniform = (GLenum)GL_TESS_EVALUATION_SUBROUTINE_UNIFORM,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER)
			eTransformFeedbackBuffer = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_VARYING)
			eTransformFeedbackVarying = (GLenum)GL_TRANSFORM_FEEDBACK_VARYING,
		#endif
		#if defined(GL_UNIFORM)
			eUniform = (GLenum)GL_UNIFORM,
		#endif
		#if defined(GL_UNIFORM_BLOCK)
			eUniformBlock = (GLenum)GL_UNIFORM_BLOCK,
		#endif
		#if defined(GL_VERTEX_SUBROUTINE)
			eVertexSubroutine = (GLenum)GL_VERTEX_SUBROUTINE,
		#endif
		#if defined(GL_VERTEX_SUBROUTINE_UNIFORM)
			eVertexSubroutineUniform = (GLenum)GL_VERTEX_SUBROUTINE_UNIFORM,
		#endif
	};

	enum class ClipControlOrigin : GLenum {
		#if defined(GL_LOWER_LEFT)
			eLowerLeft = (GLenum)GL_LOWER_LEFT,
		#endif
		#if defined(GL_UPPER_LEFT)
			eUpperLeft = (GLenum)GL_UPPER_LEFT,
		#endif
	};

	enum class FramebufferTarget : GLenum {
		#if defined(GL_DRAW_FRAMEBUFFER)
			eDrawFramebuffer = (GLenum)GL_DRAW_FRAMEBUFFER,
		#endif
		#if defined(GL_FRAMEBUFFER)
			eFramebuffer = (GLenum)GL_FRAMEBUFFER,
		#endif
		#if defined(GL_FRAMEBUFFER_OES)
			eFramebufferOes = (GLenum)GL_FRAMEBUFFER_OES,
		#endif
		#if defined(GL_READ_FRAMEBUFFER)
			eReadFramebuffer = (GLenum)GL_READ_FRAMEBUFFER,
		#endif
	};

	enum class RenderbufferParameterName : GLenum {
		#if defined(GL_RENDERBUFFER_ALPHA_SIZE)
			eRenderbufferAlphaSize = (GLenum)GL_RENDERBUFFER_ALPHA_SIZE,
		#endif
		#if defined(GL_RENDERBUFFER_ALPHA_SIZE_EXT)
			eRenderbufferAlphaSizeExt = (GLenum)GL_RENDERBUFFER_ALPHA_SIZE_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_ALPHA_SIZE_OES)
			eRenderbufferAlphaSizeOes = (GLenum)GL_RENDERBUFFER_ALPHA_SIZE_OES,
		#endif
		#if defined(GL_RENDERBUFFER_BLUE_SIZE)
			eRenderbufferBlueSize = (GLenum)GL_RENDERBUFFER_BLUE_SIZE,
		#endif
		#if defined(GL_RENDERBUFFER_BLUE_SIZE_EXT)
			eRenderbufferBlueSizeExt = (GLenum)GL_RENDERBUFFER_BLUE_SIZE_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_BLUE_SIZE_OES)
			eRenderbufferBlueSizeOes = (GLenum)GL_RENDERBUFFER_BLUE_SIZE_OES,
		#endif
		#if defined(GL_RENDERBUFFER_COLOR_SAMPLES_NV)
			eRenderbufferColorSamplesNv = (GLenum)GL_RENDERBUFFER_COLOR_SAMPLES_NV,
		#endif
		#if defined(GL_RENDERBUFFER_COVERAGE_SAMPLES_NV)
			eRenderbufferCoverageSamplesNv = (GLenum)GL_RENDERBUFFER_COVERAGE_SAMPLES_NV,
		#endif
		#if defined(GL_RENDERBUFFER_DEPTH_SIZE)
			eRenderbufferDepthSize = (GLenum)GL_RENDERBUFFER_DEPTH_SIZE,
		#endif
		#if defined(GL_RENDERBUFFER_DEPTH_SIZE_EXT)
			eRenderbufferDepthSizeExt = (GLenum)GL_RENDERBUFFER_DEPTH_SIZE_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_DEPTH_SIZE_OES)
			eRenderbufferDepthSizeOes = (GLenum)GL_RENDERBUFFER_DEPTH_SIZE_OES,
		#endif
		#if defined(GL_RENDERBUFFER_GREEN_SIZE)
			eRenderbufferGreenSize = (GLenum)GL_RENDERBUFFER_GREEN_SIZE,
		#endif
		#if defined(GL_RENDERBUFFER_GREEN_SIZE_EXT)
			eRenderbufferGreenSizeExt = (GLenum)GL_RENDERBUFFER_GREEN_SIZE_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_GREEN_SIZE_OES)
			eRenderbufferGreenSizeOes = (GLenum)GL_RENDERBUFFER_GREEN_SIZE_OES,
		#endif
		#if defined(GL_RENDERBUFFER_HEIGHT)
			eRenderbufferHeight = (GLenum)GL_RENDERBUFFER_HEIGHT,
		#endif
		#if defined(GL_RENDERBUFFER_HEIGHT_EXT)
			eRenderbufferHeightExt = (GLenum)GL_RENDERBUFFER_HEIGHT_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_HEIGHT_OES)
			eRenderbufferHeightOes = (GLenum)GL_RENDERBUFFER_HEIGHT_OES,
		#endif
		#if defined(GL_RENDERBUFFER_INTERNAL_FORMAT)
			eRenderbufferInternalFormat = (GLenum)GL_RENDERBUFFER_INTERNAL_FORMAT,
		#endif
		#if defined(GL_RENDERBUFFER_INTERNAL_FORMAT_EXT)
			eRenderbufferInternalFormatExt = (GLenum)GL_RENDERBUFFER_INTERNAL_FORMAT_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_INTERNAL_FORMAT_OES)
			eRenderbufferInternalFormatOes = (GLenum)GL_RENDERBUFFER_INTERNAL_FORMAT_OES,
		#endif
		#if defined(GL_RENDERBUFFER_RED_SIZE)
			eRenderbufferRedSize = (GLenum)GL_RENDERBUFFER_RED_SIZE,
		#endif
		#if defined(GL_RENDERBUFFER_RED_SIZE_EXT)
			eRenderbufferRedSizeExt = (GLenum)GL_RENDERBUFFER_RED_SIZE_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_RED_SIZE_OES)
			eRenderbufferRedSizeOes = (GLenum)GL_RENDERBUFFER_RED_SIZE_OES,
		#endif
		#if defined(GL_RENDERBUFFER_SAMPLES)
			eRenderbufferSamples = (GLenum)GL_RENDERBUFFER_SAMPLES,
		#endif
		#if defined(GL_RENDERBUFFER_SAMPLES_ANGLE)
			eRenderbufferSamplesAngle = (GLenum)GL_RENDERBUFFER_SAMPLES_ANGLE,
		#endif
		#if defined(GL_RENDERBUFFER_SAMPLES_APPLE)
			eRenderbufferSamplesApple = (GLenum)GL_RENDERBUFFER_SAMPLES_APPLE,
		#endif
		#if defined(GL_RENDERBUFFER_SAMPLES_EXT)
			eRenderbufferSamplesExt = (GLenum)GL_RENDERBUFFER_SAMPLES_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_SAMPLES_IMG)
			eRenderbufferSamplesImg = (GLenum)GL_RENDERBUFFER_SAMPLES_IMG,
		#endif
		#if defined(GL_RENDERBUFFER_SAMPLES_NV)
			eRenderbufferSamplesNv = (GLenum)GL_RENDERBUFFER_SAMPLES_NV,
		#endif
		#if defined(GL_RENDERBUFFER_STENCIL_SIZE)
			eRenderbufferStencilSize = (GLenum)GL_RENDERBUFFER_STENCIL_SIZE,
		#endif
		#if defined(GL_RENDERBUFFER_STENCIL_SIZE_EXT)
			eRenderbufferStencilSizeExt = (GLenum)GL_RENDERBUFFER_STENCIL_SIZE_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_STENCIL_SIZE_OES)
			eRenderbufferStencilSizeOes = (GLenum)GL_RENDERBUFFER_STENCIL_SIZE_OES,
		#endif
		#if defined(GL_RENDERBUFFER_STORAGE_SAMPLES_AMD)
			eRenderbufferStorageSamplesAmd = (GLenum)GL_RENDERBUFFER_STORAGE_SAMPLES_AMD,
		#endif
		#if defined(GL_RENDERBUFFER_WIDTH)
			eRenderbufferWidth = (GLenum)GL_RENDERBUFFER_WIDTH,
		#endif
		#if defined(GL_RENDERBUFFER_WIDTH_EXT)
			eRenderbufferWidthExt = (GLenum)GL_RENDERBUFFER_WIDTH_EXT,
		#endif
		#if defined(GL_RENDERBUFFER_WIDTH_OES)
			eRenderbufferWidthOes = (GLenum)GL_RENDERBUFFER_WIDTH_OES,
		#endif
	};

	enum class RenderbufferTarget : GLenum {
		#if defined(GL_RENDERBUFFER)
			eRenderbuffer = (GLenum)GL_RENDERBUFFER,
		#endif
		#if defined(GL_RENDERBUFFER_OES)
			eRenderbufferOes = (GLenum)GL_RENDERBUFFER_OES,
		#endif
	};

	enum class ProgramStagePName : GLenum {
		#if defined(GL_ACTIVE_SUBROUTINES)
			eActiveSubroutines = (GLenum)GL_ACTIVE_SUBROUTINES,
		#endif
		#if defined(GL_ACTIVE_SUBROUTINE_MAX_LENGTH)
			eActiveSubroutineMaxLength = (GLenum)GL_ACTIVE_SUBROUTINE_MAX_LENGTH,
		#endif
		#if defined(GL_ACTIVE_SUBROUTINE_UNIFORMS)
			eActiveSubroutineUniforms = (GLenum)GL_ACTIVE_SUBROUTINE_UNIFORMS,
		#endif
		#if defined(GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS)
			eActiveSubroutineUniformLocations = (GLenum)GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS,
		#endif
		#if defined(GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH)
			eActiveSubroutineUniformMaxLength = (GLenum)GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH,
		#endif
	};

	enum class PrecisionType : GLenum {
		#if defined(GL_HIGH_FLOAT)
			eHighFloat = (GLenum)GL_HIGH_FLOAT,
		#endif
		#if defined(GL_HIGH_INT)
			eHighInt = (GLenum)GL_HIGH_INT,
		#endif
		#if defined(GL_LOW_FLOAT)
			eLowFloat = (GLenum)GL_LOW_FLOAT,
		#endif
		#if defined(GL_LOW_INT)
			eLowInt = (GLenum)GL_LOW_INT,
		#endif
		#if defined(GL_MEDIUM_FLOAT)
			eMediumFloat = (GLenum)GL_MEDIUM_FLOAT,
		#endif
		#if defined(GL_MEDIUM_INT)
			eMediumInt = (GLenum)GL_MEDIUM_INT,
		#endif
	};

	enum class ConditionalRenderMode : GLenum {
		#if defined(GL_QUERY_BY_REGION_NO_WAIT)
			eQueryByRegionNoWait = (GLenum)GL_QUERY_BY_REGION_NO_WAIT,
		#endif
		#if defined(GL_QUERY_BY_REGION_NO_WAIT_INVERTED)
			eQueryByRegionNoWaitInverted = (GLenum)GL_QUERY_BY_REGION_NO_WAIT_INVERTED,
		#endif
		#if defined(GL_QUERY_BY_REGION_WAIT)
			eQueryByRegionWait = (GLenum)GL_QUERY_BY_REGION_WAIT,
		#endif
		#if defined(GL_QUERY_BY_REGION_WAIT_INVERTED)
			eQueryByRegionWaitInverted = (GLenum)GL_QUERY_BY_REGION_WAIT_INVERTED,
		#endif
		#if defined(GL_QUERY_NO_WAIT)
			eQueryNoWait = (GLenum)GL_QUERY_NO_WAIT,
		#endif
		#if defined(GL_QUERY_NO_WAIT_INVERTED)
			eQueryNoWaitInverted = (GLenum)GL_QUERY_NO_WAIT_INVERTED,
		#endif
		#if defined(GL_QUERY_WAIT)
			eQueryWait = (GLenum)GL_QUERY_WAIT,
		#endif
		#if defined(GL_QUERY_WAIT_INVERTED)
			eQueryWaitInverted = (GLenum)GL_QUERY_WAIT_INVERTED,
		#endif
	};

	enum class BindTransformFeedbackTarget : GLenum {
		#if defined(GL_TRANSFORM_FEEDBACK)
			eTransformFeedback = (GLenum)GL_TRANSFORM_FEEDBACK,
		#endif
	};

	enum class QueryCounterTarget : GLenum {
		#if defined(GL_TIMESTAMP)
			eTimestamp = (GLenum)GL_TIMESTAMP,
		#endif
		#if defined(GL_TIMESTAMP_EXT)
			eTimestampExt = (GLenum)GL_TIMESTAMP_EXT,
		#endif
	};

	enum class ProgramResourceProperty : GLenum {
		#if defined(GL_ACTIVE_VARIABLES)
			eActiveVariables = (GLenum)GL_ACTIVE_VARIABLES,
		#endif
		#if defined(GL_ARRAY_SIZE)
			eArraySize = (GLenum)GL_ARRAY_SIZE,
		#endif
		#if defined(GL_ARRAY_STRIDE)
			eArrayStride = (GLenum)GL_ARRAY_STRIDE,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_INDEX)
			eAtomicCounterBufferIndex = (GLenum)GL_ATOMIC_COUNTER_BUFFER_INDEX,
		#endif
		#if defined(GL_BLOCK_INDEX)
			eBlockIndex = (GLenum)GL_BLOCK_INDEX,
		#endif
		#if defined(GL_BUFFER_BINDING)
			eBufferBinding = (GLenum)GL_BUFFER_BINDING,
		#endif
		#if defined(GL_BUFFER_DATA_SIZE)
			eBufferDataSize = (GLenum)GL_BUFFER_DATA_SIZE,
		#endif
		#if defined(GL_COMPATIBLE_SUBROUTINES)
			eCompatibleSubroutines = (GLenum)GL_COMPATIBLE_SUBROUTINES,
		#endif
		#if defined(GL_IS_PER_PATCH)
			eIsPerPatch = (GLenum)GL_IS_PER_PATCH,
		#endif
		#if defined(GL_IS_ROW_MAJOR)
			eIsRowMajor = (GLenum)GL_IS_ROW_MAJOR,
		#endif
		#if defined(GL_LOCATION)
			eLocation = (GLenum)GL_LOCATION,
		#endif
		#if defined(GL_LOCATION_COMPONENT)
			eLocationComponent = (GLenum)GL_LOCATION_COMPONENT,
		#endif
		#if defined(GL_LOCATION_INDEX)
			eLocationIndex = (GLenum)GL_LOCATION_INDEX,
		#endif
		#if defined(GL_MATRIX_STRIDE)
			eMatrixStride = (GLenum)GL_MATRIX_STRIDE,
		#endif
		#if defined(GL_NAME_LENGTH)
			eNameLength = (GLenum)GL_NAME_LENGTH,
		#endif
		#if defined(GL_NUM_ACTIVE_VARIABLES)
			eNumActiveVariables = (GLenum)GL_NUM_ACTIVE_VARIABLES,
		#endif
		#if defined(GL_NUM_COMPATIBLE_SUBROUTINES)
			eNumCompatibleSubroutines = (GLenum)GL_NUM_COMPATIBLE_SUBROUTINES,
		#endif
		#if defined(GL_OFFSET)
			eOffset = (GLenum)GL_OFFSET,
		#endif
		#if defined(GL_REFERENCED_BY_COMPUTE_SHADER)
			eReferencedByComputeShader = (GLenum)GL_REFERENCED_BY_COMPUTE_SHADER,
		#endif
		#if defined(GL_REFERENCED_BY_FRAGMENT_SHADER)
			eReferencedByFragmentShader = (GLenum)GL_REFERENCED_BY_FRAGMENT_SHADER,
		#endif
		#if defined(GL_REFERENCED_BY_GEOMETRY_SHADER)
			eReferencedByGeometryShader = (GLenum)GL_REFERENCED_BY_GEOMETRY_SHADER,
		#endif
		#if defined(GL_REFERENCED_BY_TESS_CONTROL_SHADER)
			eReferencedByTessControlShader = (GLenum)GL_REFERENCED_BY_TESS_CONTROL_SHADER,
		#endif
		#if defined(GL_REFERENCED_BY_TESS_EVALUATION_SHADER)
			eReferencedByTessEvaluationShader = (GLenum)GL_REFERENCED_BY_TESS_EVALUATION_SHADER,
		#endif
		#if defined(GL_REFERENCED_BY_VERTEX_SHADER)
			eReferencedByVertexShader = (GLenum)GL_REFERENCED_BY_VERTEX_SHADER,
		#endif
		#if defined(GL_TOP_LEVEL_ARRAY_SIZE)
			eTopLevelArraySize = (GLenum)GL_TOP_LEVEL_ARRAY_SIZE,
		#endif
		#if defined(GL_TOP_LEVEL_ARRAY_STRIDE)
			eTopLevelArrayStride = (GLenum)GL_TOP_LEVEL_ARRAY_STRIDE,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_INDEX)
			eTransformFeedbackBufferIndex = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_INDEX,
		#endif
		#if defined(GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE)
			eTransformFeedbackBufferStride = (GLenum)GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE,
		#endif
		#if defined(GL_TYPE)
			eType = (GLenum)GL_TYPE,
		#endif
		#if defined(GL_UNIFORM)
			eUniform = (GLenum)GL_UNIFORM,
		#endif
	};

	enum class VertexProvokingMode : GLenum {
		#if defined(GL_FIRST_VERTEX_CONVENTION)
			eFirstVertexConvention = (GLenum)GL_FIRST_VERTEX_CONVENTION,
		#endif
		#if defined(GL_LAST_VERTEX_CONVENTION)
			eLastVertexConvention = (GLenum)GL_LAST_VERTEX_CONVENTION,
		#endif
	};

	enum class GetMultisamplePNameNV : GLenum {
		#if defined(GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB)
			eProgrammableSampleLocationArb = (GLenum)GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB,
		#endif
		#if defined(GL_SAMPLE_LOCATION_ARB)
			eSampleLocationArb = (GLenum)GL_SAMPLE_LOCATION_ARB,
		#endif
		#if defined(GL_SAMPLE_POSITION)
			eSamplePosition = (GLenum)GL_SAMPLE_POSITION,
		#endif
	};

	enum class PatchParameterName : GLenum {
		#if defined(GL_PATCH_DEFAULT_INNER_LEVEL)
			ePatchDefaultInnerLevel = (GLenum)GL_PATCH_DEFAULT_INNER_LEVEL,
		#endif
		#if defined(GL_PATCH_DEFAULT_OUTER_LEVEL)
			ePatchDefaultOuterLevel = (GLenum)GL_PATCH_DEFAULT_OUTER_LEVEL,
		#endif
		#if defined(GL_PATCH_VERTICES)
			ePatchVertices = (GLenum)GL_PATCH_VERTICES,
		#endif
	};

	enum class PathStringFormat : GLenum {
		#if defined(GL_PATH_FORMAT_PS_NV)
			ePathFormatPsNv = (GLenum)GL_PATH_FORMAT_PS_NV,
		#endif
		#if defined(GL_PATH_FORMAT_SVG_NV)
			ePathFormatSvgNv = (GLenum)GL_PATH_FORMAT_SVG_NV,
		#endif
	};

	enum class PathFontTarget : GLenum {
		#if defined(GL_FILE_NAME_NV)
			eFileNameNv = (GLenum)GL_FILE_NAME_NV,
		#endif
		#if defined(GL_STANDARD_FONT_NAME_NV)
			eStandardFontNameNv = (GLenum)GL_STANDARD_FONT_NAME_NV,
		#endif
		#if defined(GL_SYSTEM_FONT_NAME_NV)
			eSystemFontNameNv = (GLenum)GL_SYSTEM_FONT_NAME_NV,
		#endif
	};

	enum class PathParameter : GLenum {
		#if defined(GL_PATH_CLIENT_LENGTH_NV)
			ePathClientLengthNv = (GLenum)GL_PATH_CLIENT_LENGTH_NV,
		#endif
		#if defined(GL_PATH_COMMAND_COUNT_NV)
			ePathCommandCountNv = (GLenum)GL_PATH_COMMAND_COUNT_NV,
		#endif
		#if defined(GL_PATH_COMPUTED_LENGTH_NV)
			ePathComputedLengthNv = (GLenum)GL_PATH_COMPUTED_LENGTH_NV,
		#endif
		#if defined(GL_PATH_COORD_COUNT_NV)
			ePathCoordCountNv = (GLenum)GL_PATH_COORD_COUNT_NV,
		#endif
		#if defined(GL_PATH_DASH_ARRAY_COUNT_NV)
			ePathDashArrayCountNv = (GLenum)GL_PATH_DASH_ARRAY_COUNT_NV,
		#endif
		#if defined(GL_PATH_DASH_CAPS_NV)
			ePathDashCapsNv = (GLenum)GL_PATH_DASH_CAPS_NV,
		#endif
		#if defined(GL_PATH_DASH_OFFSET_NV)
			ePathDashOffsetNv = (GLenum)GL_PATH_DASH_OFFSET_NV,
		#endif
		#if defined(GL_PATH_DASH_OFFSET_RESET_NV)
			ePathDashOffsetResetNv = (GLenum)GL_PATH_DASH_OFFSET_RESET_NV,
		#endif
		#if defined(GL_PATH_END_CAPS_NV)
			ePathEndCapsNv = (GLenum)GL_PATH_END_CAPS_NV,
		#endif
		#if defined(GL_PATH_FILL_BOUNDING_BOX_NV)
			ePathFillBoundingBoxNv = (GLenum)GL_PATH_FILL_BOUNDING_BOX_NV,
		#endif
		#if defined(GL_PATH_FILL_COVER_MODE_NV)
			ePathFillCoverModeNv = (GLenum)GL_PATH_FILL_COVER_MODE_NV,
		#endif
		#if defined(GL_PATH_FILL_MASK_NV)
			ePathFillMaskNv = (GLenum)GL_PATH_FILL_MASK_NV,
		#endif
		#if defined(GL_PATH_FILL_MODE_NV)
			ePathFillModeNv = (GLenum)GL_PATH_FILL_MODE_NV,
		#endif
		#if defined(GL_PATH_INITIAL_DASH_CAP_NV)
			ePathInitialDashCapNv = (GLenum)GL_PATH_INITIAL_DASH_CAP_NV,
		#endif
		#if defined(GL_PATH_INITIAL_END_CAP_NV)
			ePathInitialEndCapNv = (GLenum)GL_PATH_INITIAL_END_CAP_NV,
		#endif
		#if defined(GL_PATH_JOIN_STYLE_NV)
			ePathJoinStyleNv = (GLenum)GL_PATH_JOIN_STYLE_NV,
		#endif
		#if defined(GL_PATH_MITER_LIMIT_NV)
			ePathMiterLimitNv = (GLenum)GL_PATH_MITER_LIMIT_NV,
		#endif
		#if defined(GL_PATH_OBJECT_BOUNDING_BOX_NV)
			ePathObjectBoundingBoxNv = (GLenum)GL_PATH_OBJECT_BOUNDING_BOX_NV,
		#endif
		#if defined(GL_PATH_STROKE_BOUNDING_BOX_NV)
			ePathStrokeBoundingBoxNv = (GLenum)GL_PATH_STROKE_BOUNDING_BOX_NV,
		#endif
		#if defined(GL_PATH_STROKE_COVER_MODE_NV)
			ePathStrokeCoverModeNv = (GLenum)GL_PATH_STROKE_COVER_MODE_NV,
		#endif
		#if defined(GL_PATH_STROKE_MASK_NV)
			ePathStrokeMaskNv = (GLenum)GL_PATH_STROKE_MASK_NV,
		#endif
		#if defined(GL_PATH_STROKE_WIDTH_NV)
			ePathStrokeWidthNv = (GLenum)GL_PATH_STROKE_WIDTH_NV,
		#endif
		#if defined(GL_PATH_TERMINAL_DASH_CAP_NV)
			ePathTerminalDashCapNv = (GLenum)GL_PATH_TERMINAL_DASH_CAP_NV,
		#endif
		#if defined(GL_PATH_TERMINAL_END_CAP_NV)
			ePathTerminalEndCapNv = (GLenum)GL_PATH_TERMINAL_END_CAP_NV,
		#endif
	};

	enum class PathCoverMode : GLenum {
		#if defined(GL_BOUNDING_BOX_NV)
			eBoundingBoxNv = (GLenum)GL_BOUNDING_BOX_NV,
		#endif
		#if defined(GL_CONVEX_HULL_NV)
			eConvexHullNv = (GLenum)GL_CONVEX_HULL_NV,
		#endif
		#if defined(GL_PATH_FILL_COVER_MODE_NV)
			ePathFillCoverModeNv = (GLenum)GL_PATH_FILL_COVER_MODE_NV,
		#endif
	};

	enum class InstancedPathCoverMode : GLenum {
		#if defined(GL_BOUNDING_BOX_NV)
			eBoundingBoxNv = (GLenum)GL_BOUNDING_BOX_NV,
		#endif
		#if defined(GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV)
			eBoundingBoxOfBoundingBoxesNv = (GLenum)GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV,
		#endif
		#if defined(GL_CONVEX_HULL_NV)
			eConvexHullNv = (GLenum)GL_CONVEX_HULL_NV,
		#endif
		#if defined(GL_PATH_FILL_COVER_MODE_NV)
			ePathFillCoverModeNv = (GLenum)GL_PATH_FILL_COVER_MODE_NV,
		#endif
	};

	enum class PathElementType : GLenum {
		#if defined(GL_UTF16_NV)
			eUtf16Nv = (GLenum)GL_UTF16_NV,
		#endif
		#if defined(GL_UTF8_NV)
			eUtf8Nv = (GLenum)GL_UTF8_NV,
		#endif
	};

	enum class PathHandleMissingGlyphs : GLenum {
		#if defined(GL_SKIP_MISSING_GLYPH_NV)
			eSkipMissingGlyphNv = (GLenum)GL_SKIP_MISSING_GLYPH_NV,
		#endif
		#if defined(GL_USE_MISSING_GLYPH_NV)
			eUseMissingGlyphNv = (GLenum)GL_USE_MISSING_GLYPH_NV,
		#endif
	};

	enum class PathListMode : GLenum {
		#if defined(GL_ACCUM_ADJACENT_PAIRS_NV)
			eAccumAdjacentPairsNv = (GLenum)GL_ACCUM_ADJACENT_PAIRS_NV,
		#endif
		#if defined(GL_ADJACENT_PAIRS_NV)
			eAdjacentPairsNv = (GLenum)GL_ADJACENT_PAIRS_NV,
		#endif
		#if defined(GL_FIRST_TO_REST_NV)
			eFirstToRestNv = (GLenum)GL_FIRST_TO_REST_NV,
		#endif
	};

	enum class AtomicCounterBufferPName : GLenum {
		#if defined(GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS)
			eAtomicCounterBufferActiveAtomicCounters = (GLenum)GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES)
			eAtomicCounterBufferActiveAtomicCounterIndices = (GLenum)GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_BINDING)
			eAtomicCounterBufferBinding = (GLenum)GL_ATOMIC_COUNTER_BUFFER_BINDING,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE)
			eAtomicCounterBufferDataSize = (GLenum)GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER)
			eAtomicCounterBufferReferencedByComputeShader = (GLenum)GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER)
			eAtomicCounterBufferReferencedByFragmentShader = (GLenum)GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER)
			eAtomicCounterBufferReferencedByGeometryShader = (GLenum)GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER)
			eAtomicCounterBufferReferencedByTessControlShader = (GLenum)GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER)
			eAtomicCounterBufferReferencedByTessEvaluationShader = (GLenum)GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER,
		#endif
		#if defined(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER)
			eAtomicCounterBufferReferencedByVertexShader = (GLenum)GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER,
		#endif
	};

	enum class SyncParameterName : GLenum {
		#if defined(GL_OBJECT_TYPE)
			eObjectType = (GLenum)GL_OBJECT_TYPE,
		#endif
		#if defined(GL_SYNC_CONDITION)
			eSyncCondition = (GLenum)GL_SYNC_CONDITION,
		#endif
		#if defined(GL_SYNC_FLAGS)
			eSyncFlags = (GLenum)GL_SYNC_FLAGS,
		#endif
		#if defined(GL_SYNC_STATUS)
			eSyncStatus = (GLenum)GL_SYNC_STATUS,
		#endif
	};

	enum class SyncCondition : GLenum {
		#if defined(GL_SYNC_GPU_COMMANDS_COMPLETE)
			eSyncGpuCommandsComplete = (GLenum)GL_SYNC_GPU_COMMANDS_COMPLETE,
		#endif
	};

	enum class SyncStatus : GLenum {
		#if defined(GL_ALREADY_SIGNALED)
			eAlreadySignaled = (GLenum)GL_ALREADY_SIGNALED,
		#endif
		#if defined(GL_CONDITION_SATISFIED)
			eConditionSatisfied = (GLenum)GL_CONDITION_SATISFIED,
		#endif
		#if defined(GL_TIMEOUT_EXPIRED)
			eTimeoutExpired = (GLenum)GL_TIMEOUT_EXPIRED,
		#endif
		#if defined(GL_WAIT_FAILED)
			eWaitFailed = (GLenum)GL_WAIT_FAILED,
		#endif
	};

	enum class ProgramInterfacePName : GLenum {
		#if defined(GL_ACTIVE_RESOURCES)
			eActiveResources = (GLenum)GL_ACTIVE_RESOURCES,
		#endif
		#if defined(GL_MAX_NAME_LENGTH)
			eMaxNameLength = (GLenum)GL_MAX_NAME_LENGTH,
		#endif
		#if defined(GL_MAX_NUM_ACTIVE_VARIABLES)
			eMaxNumActiveVariables = (GLenum)GL_MAX_NUM_ACTIVE_VARIABLES,
		#endif
		#if defined(GL_MAX_NUM_COMPATIBLE_SUBROUTINES)
			eMaxNumCompatibleSubroutines = (GLenum)GL_MAX_NUM_COMPATIBLE_SUBROUTINES,
		#endif
	};

	enum class FramebufferParameterName : GLenum {
		#if defined(GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS)
			eFramebufferDefaultFixedSampleLocations = (GLenum)GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_HEIGHT)
			eFramebufferDefaultHeight = (GLenum)GL_FRAMEBUFFER_DEFAULT_HEIGHT,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_LAYERS)
			eFramebufferDefaultLayers = (GLenum)GL_FRAMEBUFFER_DEFAULT_LAYERS,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_SAMPLES)
			eFramebufferDefaultSamples = (GLenum)GL_FRAMEBUFFER_DEFAULT_SAMPLES,
		#endif
		#if defined(GL_FRAMEBUFFER_DEFAULT_WIDTH)
			eFramebufferDefaultWidth = (GLenum)GL_FRAMEBUFFER_DEFAULT_WIDTH,
		#endif
	};

	enum class ClipControlDepth : GLenum {
		#if defined(GL_NEGATIVE_ONE_TO_ONE)
			eNegativeOneToOne = (GLenum)GL_NEGATIVE_ONE_TO_ONE,
		#endif
		#if defined(GL_ZERO_TO_ONE)
			eZeroToOne = (GLenum)GL_ZERO_TO_ONE,
		#endif
	};

	enum class TextureLayout : GLenum {
		#if defined(GL_LAYOUT_COLOR_ATTACHMENT_EXT)
			eLayoutColorAttachmentExt = (GLenum)GL_LAYOUT_COLOR_ATTACHMENT_EXT,
		#endif
		#if defined(GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT)
			eLayoutDepthAttachmentStencilReadOnlyExt = (GLenum)GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT,
		#endif
		#if defined(GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT)
			eLayoutDepthReadOnlyStencilAttachmentExt = (GLenum)GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT,
		#endif
		#if defined(GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT)
			eLayoutDepthStencilAttachmentExt = (GLenum)GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT,
		#endif
		#if defined(GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT)
			eLayoutDepthStencilReadOnlyExt = (GLenum)GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT,
		#endif
		#if defined(GL_LAYOUT_GENERAL_EXT)
			eLayoutGeneralExt = (GLenum)GL_LAYOUT_GENERAL_EXT,
		#endif
		#if defined(GL_LAYOUT_SHADER_READ_ONLY_EXT)
			eLayoutShaderReadOnlyExt = (GLenum)GL_LAYOUT_SHADER_READ_ONLY_EXT,
		#endif
		#if defined(GL_LAYOUT_TRANSFER_DST_EXT)
			eLayoutTransferDstExt = (GLenum)GL_LAYOUT_TRANSFER_DST_EXT,
		#endif
		#if defined(GL_LAYOUT_TRANSFER_SRC_EXT)
			eLayoutTransferSrcExt = (GLenum)GL_LAYOUT_TRANSFER_SRC_EXT,
		#endif
	};

	enum class MemoryObjectParameterName : GLenum {
		#if defined(GL_DEDICATED_MEMORY_OBJECT_EXT)
			eDedicatedMemoryObjectExt = (GLenum)GL_DEDICATED_MEMORY_OBJECT_EXT,
		#endif
		#if defined(GL_PROTECTED_MEMORY_OBJECT_EXT)
			eProtectedMemoryObjectExt = (GLenum)GL_PROTECTED_MEMORY_OBJECT_EXT,
		#endif
	};

	enum class ExternalHandleType : GLenum {
		#if defined(GL_HANDLE_TYPE_D3D11_IMAGE_EXT)
			eHandleTypeD3d11ImageExt = (GLenum)GL_HANDLE_TYPE_D3D11_IMAGE_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT)
			eHandleTypeD3d11ImageKmtExt = (GLenum)GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_D3D12_FENCE_EXT)
			eHandleTypeD3d12FenceExt = (GLenum)GL_HANDLE_TYPE_D3D12_FENCE_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_D3D12_RESOURCE_EXT)
			eHandleTypeD3d12ResourceExt = (GLenum)GL_HANDLE_TYPE_D3D12_RESOURCE_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT)
			eHandleTypeD3d12TilepoolExt = (GLenum)GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_OPAQUE_FD_EXT)
			eHandleTypeOpaqueFdExt = (GLenum)GL_HANDLE_TYPE_OPAQUE_FD_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_OPAQUE_WIN32_EXT)
			eHandleTypeOpaqueWin32Ext = (GLenum)GL_HANDLE_TYPE_OPAQUE_WIN32_EXT,
		#endif
		#if defined(GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT)
			eHandleTypeOpaqueWin32KmtExt = (GLenum)GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT,
		#endif
	};

	enum class SemaphoreParameterName : GLenum {
		#if defined(GL_D3D12_FENCE_VALUE_EXT)
			eD3d12FenceValueExt = (GLenum)GL_D3D12_FENCE_VALUE_EXT,
		#endif
		#if defined(GL_SEMAPHORE_TYPE_BINARY_NV)
			eSemaphoreTypeBinaryNv = (GLenum)GL_SEMAPHORE_TYPE_BINARY_NV,
		#endif
		#if defined(GL_SEMAPHORE_TYPE_NV)
			eSemaphoreTypeNv = (GLenum)GL_SEMAPHORE_TYPE_NV,
		#endif
		#if defined(GL_SEMAPHORE_TYPE_TIMELINE_NV)
			eSemaphoreTypeTimelineNv = (GLenum)GL_SEMAPHORE_TYPE_TIMELINE_NV,
		#endif
		#if defined(GL_TIMELINE_SEMAPHORE_VALUE_NV)
			eTimelineSemaphoreValueNv = (GLenum)GL_TIMELINE_SEMAPHORE_VALUE_NV,
		#endif
	};

	enum class ShadingRateQCOM : GLenum {
		#if defined(GL_SHADING_RATE_1X1_PIXELS_QCOM)
			eShadingRate1x1PixelsQcom = (GLenum)GL_SHADING_RATE_1X1_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_1X2_PIXELS_QCOM)
			eShadingRate1x2PixelsQcom = (GLenum)GL_SHADING_RATE_1X2_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_1X4_PIXELS_QCOM)
			eShadingRate1x4PixelsQcom = (GLenum)GL_SHADING_RATE_1X4_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_2X1_PIXELS_QCOM)
			eShadingRate2x1PixelsQcom = (GLenum)GL_SHADING_RATE_2X1_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_2X2_PIXELS_QCOM)
			eShadingRate2x2PixelsQcom = (GLenum)GL_SHADING_RATE_2X2_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_2X4_PIXELS_QCOM)
			eShadingRate2x4PixelsQcom = (GLenum)GL_SHADING_RATE_2X4_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_4X1_PIXELS_QCOM)
			eShadingRate4x1PixelsQcom = (GLenum)GL_SHADING_RATE_4X1_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_4X2_PIXELS_QCOM)
			eShadingRate4x2PixelsQcom = (GLenum)GL_SHADING_RATE_4X2_PIXELS_QCOM,
		#endif
		#if defined(GL_SHADING_RATE_4X4_PIXELS_QCOM)
			eShadingRate4x4PixelsQcom = (GLenum)GL_SHADING_RATE_4X4_PIXELS_QCOM,
		#endif
	};

	enum class ShadingRate : GLenum {
		#if defined(GL_SHADING_RATE_1X1_PIXELS_EXT)
			eShadingRate1x1PixelsExt = (GLenum)GL_SHADING_RATE_1X1_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_1X2_PIXELS_EXT)
			eShadingRate1x2PixelsExt = (GLenum)GL_SHADING_RATE_1X2_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_1X4_PIXELS_EXT)
			eShadingRate1x4PixelsExt = (GLenum)GL_SHADING_RATE_1X4_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_2X1_PIXELS_EXT)
			eShadingRate2x1PixelsExt = (GLenum)GL_SHADING_RATE_2X1_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_2X2_PIXELS_EXT)
			eShadingRate2x2PixelsExt = (GLenum)GL_SHADING_RATE_2X2_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_2X4_PIXELS_EXT)
			eShadingRate2x4PixelsExt = (GLenum)GL_SHADING_RATE_2X4_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_4X1_PIXELS_EXT)
			eShadingRate4x1PixelsExt = (GLenum)GL_SHADING_RATE_4X1_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_4X2_PIXELS_EXT)
			eShadingRate4x2PixelsExt = (GLenum)GL_SHADING_RATE_4X2_PIXELS_EXT,
		#endif
		#if defined(GL_SHADING_RATE_4X4_PIXELS_EXT)
			eShadingRate4x4PixelsExt = (GLenum)GL_SHADING_RATE_4X4_PIXELS_EXT,
		#endif
	};

	enum class TexStorageAttribs : GLenum {
		#if defined(GL_SURFACE_COMPRESSION_EXT)
			eSurfaceCompressionExt = (GLenum)GL_SURFACE_COMPRESSION_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT)
			eSurfaceCompressionFixedRate10bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT)
			eSurfaceCompressionFixedRate11bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT)
			eSurfaceCompressionFixedRate12bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT)
			eSurfaceCompressionFixedRate1bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT)
			eSurfaceCompressionFixedRate2bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT)
			eSurfaceCompressionFixedRate3bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT)
			eSurfaceCompressionFixedRate4bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT)
			eSurfaceCompressionFixedRate5bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT)
			eSurfaceCompressionFixedRate6bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT)
			eSurfaceCompressionFixedRate7bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT)
			eSurfaceCompressionFixedRate8bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT)
			eSurfaceCompressionFixedRate9bpcExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT)
			eSurfaceCompressionFixedRateDefaultExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT,
		#endif
		#if defined(GL_SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT)
			eSurfaceCompressionFixedRateNoneExt = (GLenum)GL_SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT,
		#endif
	};

	enum class ShadingRateCombinerOp : GLenum {
		#if defined(GL_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_EXT)
			eFragmentShadingRateCombinerOpKeepExt = (GLenum)GL_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_EXT)
			eFragmentShadingRateCombinerOpMaxExt = (GLenum)GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_EXT)
			eFragmentShadingRateCombinerOpMinExt = (GLenum)GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_EXT)
			eFragmentShadingRateCombinerOpMulExt = (GLenum)GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_EXT,
		#endif
		#if defined(GL_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_EXT)
			eFragmentShadingRateCombinerOpReplaceExt = (GLenum)GL_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_EXT,
		#endif
	};

	enum class HintTargetPGI : GLenum {
		#if defined(GL_MATERIAL_SIDE_HINT_PGI)
			eMaterialSideHintPgi = (GLenum)GL_MATERIAL_SIDE_HINT_PGI,
		#endif
		#if defined(GL_MAX_VERTEX_HINT_PGI)
			eMaxVertexHintPgi = (GLenum)GL_MAX_VERTEX_HINT_PGI,
		#endif
		#if defined(GL_VERTEX_CONSISTENT_HINT_PGI)
			eVertexConsistentHintPgi = (GLenum)GL_VERTEX_CONSISTENT_HINT_PGI,
		#endif
		#if defined(GL_VERTEX_DATA_HINT_PGI)
			eVertexDataHintPgi = (GLenum)GL_VERTEX_DATA_HINT_PGI,
		#endif
	};
} // namespace enums
} // namespace ogl
