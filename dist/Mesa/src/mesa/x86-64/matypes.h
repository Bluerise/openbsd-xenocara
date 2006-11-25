/*
 * This file is automatically generated from the Mesa internal type
 * definitions.  Do not edit directly.
 */

#ifndef __ASM_TYPES_H__
#define __ASM_TYPES_H__



/* =============================================================
 * Offsets for GLcontext
 */

#define CTX_DRIVER_CTX              	944

#define CTX_LIGHT_ENABLED           	39288
#define CTX_LIGHT_SHADE_MODEL       	39292
#define CTX_LIGHT_COLOR_MAT_FACE    	39296
#define CTX_LIGHT_COLOR_MAT_MODE    	39300
#define CTX_LIGHT_COLOR_MAT_MASK    	39304
#define CTX_LIGHT_COLOR_MAT_ENABLED 	39308
#define CTX_LIGHT_ENABLED_LIST      	39312
#define CTX_LIGHT_NEED_VERTS        	43673
#define CTX_LIGHT_FLAGS             	43676
#define CTX_LIGHT_BASE_COLOR        	43680


/* =============================================================
 * Offsets for struct vertex_buffer
 */

#define VB_SIZE                	0
#define VB_COUNT               	4

#define VB_ELTS                	8
#define VB_OBJ_PTR             	12
#define VB_EYE_PTR             	16
#define VB_CLIP_PTR            	20
#define VB_PROJ_CLIP_PTR       	24
#define VB_CLIP_OR_MASK        	28
#define VB_CLIP_MASK           	32
#define VB_NORMAL_PTR          	36
#define VB_EDGE_FLAG           	44
#define VB_TEX0_COORD_PTR      	48
#define VB_TEX1_COORD_PTR      	52
#define VB_TEX2_COORD_PTR      	56
#define VB_TEX3_COORD_PTR      	60
#define VB_INDEX_PTR           	80
#define VB_COLOR_PTR           	88
#define VB_SECONDARY_COLOR_PTR 	96
#define VB_FOG_COORD_PTR       	104
#define VB_PRIMITIVE           	172


/*
 * Flags for struct vertex_buffer
 */

#define VERT_BIT_OBJ           	0x1
#define VERT_BIT_NORM          	0x4
#define VERT_BIT_RGBA          	0x8
#define VERT_BIT_SPEC_RGB      	0x10
#define VERT_BIT_FOG_COORD     	0x20
#define VERT_BIT_TEX0          	0x100
#define VERT_BIT_TEX1          	0x200
#define VERT_BIT_TEX2          	0x400
#define VERT_BIT_TEX3          	0x800


/* =============================================================
 * Offsets for GLvector4f
 */

#define V4F_DATA          	0
#define V4F_START         	4
#define V4F_COUNT         	8
#define V4F_STRIDE        	12
#define V4F_SIZE          	16
#define V4F_FLAGS         	20

/*
 * Flags for GLvector4f
 */

#define VEC_MALLOC        	0x10
#define VEC_NOT_WRITEABLE 	0x40
#define VEC_BAD_STRIDE    	0x100

#define VEC_SIZE_1        	0x1
#define VEC_SIZE_2        	0x3
#define VEC_SIZE_3        	0x7
#define VEC_SIZE_4        	0xf


/* =============================================================
 * Offsets for GLmatrix
 */

#define MATRIX_DATA   	0
#define MATRIX_INV    	4
#define MATRIX_FLAGS  	8
#define MATRIX_TYPE   	12


/* =============================================================
 * Offsets for struct gl_light
 */

#define LIGHT_NEXT              	0
#define LIGHT_PREV              	4

#define LIGHT_AMBIENT           	8
#define LIGHT_DIFFUSE           	24
#define LIGHT_SPECULAR          	40
#define LIGHT_EYE_POSITION      	56
#define LIGHT_EYE_DIRECTION     	72
#define LIGHT_SPOT_EXPONENT     	88
#define LIGHT_SPOT_CUTOFF       	92
#define LIGHT_COS_CUTOFF        	100
#define LIGHT_CONST_ATTEN       	104
#define LIGHT_LINEAR_ATTEN      	108
#define LIGHT_QUADRATIC_ATTEN   	112
#define LIGHT_ENABLED           	116

#define LIGHT_FLAGS             	120

#define LIGHT_POSITION          	124
#define LIGHT_VP_INF_NORM       	140
#define LIGHT_H_INF_NORM        	152
#define LIGHT_NORM_DIRECTION    	164
#define LIGHT_VP_INF_SPOT_ATTEN 	180

#define LIGHT_SPOT_EXP_TABLE    	184
#define LIGHT_MAT_AMBIENT       	4280
#define LIGHT_MAT_DIFFUSE       	4304
#define LIGHT_MAT_SPECULAR      	4328

#define SIZEOF_GL_LIGHT         	4360

/*
 * Flags for struct gl_light
 */

#define LIGHT_SPOT              	0x1
#define LIGHT_LOCAL_VIEWER      	0x2
#define LIGHT_POSITIONAL        	0x4

#define LIGHT_NEED_VERTICES     	0x6


/* =============================================================
 * Offsets for struct gl_lightmodel
 */

#define LIGHT_MODEL_AMBIENT       	0
#define LIGHT_MODEL_LOCAL_VIEWER  	16
#define LIGHT_MODEL_TWO_SIDE      	17
#define LIGHT_MODEL_COLOR_CONTROL 	20


#endif /* __ASM_TYPES_H__ */
