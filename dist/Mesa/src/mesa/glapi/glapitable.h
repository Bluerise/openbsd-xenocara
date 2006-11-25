/* DO NOT EDIT - This file generated automatically by gl_table.py (from Mesa) script */

/*
 * Copyright (C) 1999-2003  Brian Paul   All Rights Reserved.
 * (C) Copyright IBM Corporation 2004
 * All Rights Reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * BRIAN PAUL, IBM,
 * AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined( _GLAPI_TABLE_H_ )
#  define _GLAPI_TABLE_H_

#ifndef GLAPIENTRYP
#define GLAPIENTRYP
#endif

typedef void (*_glapi_proc)(void); /* generic function pointer */

struct _glapi_table
{
   void (GLAPIENTRYP NewList)(GLuint list, GLenum mode); /* 0 */
   void (GLAPIENTRYP EndList)(void); /* 1 */
   void (GLAPIENTRYP CallList)(GLuint list); /* 2 */
   void (GLAPIENTRYP CallLists)(GLsizei n, GLenum type, const GLvoid * lists); /* 3 */
   void (GLAPIENTRYP DeleteLists)(GLuint list, GLsizei range); /* 4 */
   GLuint (GLAPIENTRYP GenLists)(GLsizei range); /* 5 */
   void (GLAPIENTRYP ListBase)(GLuint base); /* 6 */
   void (GLAPIENTRYP Begin)(GLenum mode); /* 7 */
   void (GLAPIENTRYP Bitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap); /* 8 */
   void (GLAPIENTRYP Color3b)(GLbyte red, GLbyte green, GLbyte blue); /* 9 */
   void (GLAPIENTRYP Color3bv)(const GLbyte * v); /* 10 */
   void (GLAPIENTRYP Color3d)(GLdouble red, GLdouble green, GLdouble blue); /* 11 */
   void (GLAPIENTRYP Color3dv)(const GLdouble * v); /* 12 */
   void (GLAPIENTRYP Color3f)(GLfloat red, GLfloat green, GLfloat blue); /* 13 */
   void (GLAPIENTRYP Color3fv)(const GLfloat * v); /* 14 */
   void (GLAPIENTRYP Color3i)(GLint red, GLint green, GLint blue); /* 15 */
   void (GLAPIENTRYP Color3iv)(const GLint * v); /* 16 */
   void (GLAPIENTRYP Color3s)(GLshort red, GLshort green, GLshort blue); /* 17 */
   void (GLAPIENTRYP Color3sv)(const GLshort * v); /* 18 */
   void (GLAPIENTRYP Color3ub)(GLubyte red, GLubyte green, GLubyte blue); /* 19 */
   void (GLAPIENTRYP Color3ubv)(const GLubyte * v); /* 20 */
   void (GLAPIENTRYP Color3ui)(GLuint red, GLuint green, GLuint blue); /* 21 */
   void (GLAPIENTRYP Color3uiv)(const GLuint * v); /* 22 */
   void (GLAPIENTRYP Color3us)(GLushort red, GLushort green, GLushort blue); /* 23 */
   void (GLAPIENTRYP Color3usv)(const GLushort * v); /* 24 */
   void (GLAPIENTRYP Color4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha); /* 25 */
   void (GLAPIENTRYP Color4bv)(const GLbyte * v); /* 26 */
   void (GLAPIENTRYP Color4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha); /* 27 */
   void (GLAPIENTRYP Color4dv)(const GLdouble * v); /* 28 */
   void (GLAPIENTRYP Color4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); /* 29 */
   void (GLAPIENTRYP Color4fv)(const GLfloat * v); /* 30 */
   void (GLAPIENTRYP Color4i)(GLint red, GLint green, GLint blue, GLint alpha); /* 31 */
   void (GLAPIENTRYP Color4iv)(const GLint * v); /* 32 */
   void (GLAPIENTRYP Color4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha); /* 33 */
   void (GLAPIENTRYP Color4sv)(const GLshort * v); /* 34 */
   void (GLAPIENTRYP Color4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha); /* 35 */
   void (GLAPIENTRYP Color4ubv)(const GLubyte * v); /* 36 */
   void (GLAPIENTRYP Color4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha); /* 37 */
   void (GLAPIENTRYP Color4uiv)(const GLuint * v); /* 38 */
   void (GLAPIENTRYP Color4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha); /* 39 */
   void (GLAPIENTRYP Color4usv)(const GLushort * v); /* 40 */
   void (GLAPIENTRYP EdgeFlag)(GLboolean flag); /* 41 */
   void (GLAPIENTRYP EdgeFlagv)(const GLboolean * flag); /* 42 */
   void (GLAPIENTRYP End)(void); /* 43 */
   void (GLAPIENTRYP Indexd)(GLdouble c); /* 44 */
   void (GLAPIENTRYP Indexdv)(const GLdouble * c); /* 45 */
   void (GLAPIENTRYP Indexf)(GLfloat c); /* 46 */
   void (GLAPIENTRYP Indexfv)(const GLfloat * c); /* 47 */
   void (GLAPIENTRYP Indexi)(GLint c); /* 48 */
   void (GLAPIENTRYP Indexiv)(const GLint * c); /* 49 */
   void (GLAPIENTRYP Indexs)(GLshort c); /* 50 */
   void (GLAPIENTRYP Indexsv)(const GLshort * c); /* 51 */
   void (GLAPIENTRYP Normal3b)(GLbyte nx, GLbyte ny, GLbyte nz); /* 52 */
   void (GLAPIENTRYP Normal3bv)(const GLbyte * v); /* 53 */
   void (GLAPIENTRYP Normal3d)(GLdouble nx, GLdouble ny, GLdouble nz); /* 54 */
   void (GLAPIENTRYP Normal3dv)(const GLdouble * v); /* 55 */
   void (GLAPIENTRYP Normal3f)(GLfloat nx, GLfloat ny, GLfloat nz); /* 56 */
   void (GLAPIENTRYP Normal3fv)(const GLfloat * v); /* 57 */
   void (GLAPIENTRYP Normal3i)(GLint nx, GLint ny, GLint nz); /* 58 */
   void (GLAPIENTRYP Normal3iv)(const GLint * v); /* 59 */
   void (GLAPIENTRYP Normal3s)(GLshort nx, GLshort ny, GLshort nz); /* 60 */
   void (GLAPIENTRYP Normal3sv)(const GLshort * v); /* 61 */
   void (GLAPIENTRYP RasterPos2d)(GLdouble x, GLdouble y); /* 62 */
   void (GLAPIENTRYP RasterPos2dv)(const GLdouble * v); /* 63 */
   void (GLAPIENTRYP RasterPos2f)(GLfloat x, GLfloat y); /* 64 */
   void (GLAPIENTRYP RasterPos2fv)(const GLfloat * v); /* 65 */
   void (GLAPIENTRYP RasterPos2i)(GLint x, GLint y); /* 66 */
   void (GLAPIENTRYP RasterPos2iv)(const GLint * v); /* 67 */
   void (GLAPIENTRYP RasterPos2s)(GLshort x, GLshort y); /* 68 */
   void (GLAPIENTRYP RasterPos2sv)(const GLshort * v); /* 69 */
   void (GLAPIENTRYP RasterPos3d)(GLdouble x, GLdouble y, GLdouble z); /* 70 */
   void (GLAPIENTRYP RasterPos3dv)(const GLdouble * v); /* 71 */
   void (GLAPIENTRYP RasterPos3f)(GLfloat x, GLfloat y, GLfloat z); /* 72 */
   void (GLAPIENTRYP RasterPos3fv)(const GLfloat * v); /* 73 */
   void (GLAPIENTRYP RasterPos3i)(GLint x, GLint y, GLint z); /* 74 */
   void (GLAPIENTRYP RasterPos3iv)(const GLint * v); /* 75 */
   void (GLAPIENTRYP RasterPos3s)(GLshort x, GLshort y, GLshort z); /* 76 */
   void (GLAPIENTRYP RasterPos3sv)(const GLshort * v); /* 77 */
   void (GLAPIENTRYP RasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 78 */
   void (GLAPIENTRYP RasterPos4dv)(const GLdouble * v); /* 79 */
   void (GLAPIENTRYP RasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 80 */
   void (GLAPIENTRYP RasterPos4fv)(const GLfloat * v); /* 81 */
   void (GLAPIENTRYP RasterPos4i)(GLint x, GLint y, GLint z, GLint w); /* 82 */
   void (GLAPIENTRYP RasterPos4iv)(const GLint * v); /* 83 */
   void (GLAPIENTRYP RasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w); /* 84 */
   void (GLAPIENTRYP RasterPos4sv)(const GLshort * v); /* 85 */
   void (GLAPIENTRYP Rectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2); /* 86 */
   void (GLAPIENTRYP Rectdv)(const GLdouble * v1, const GLdouble * v2); /* 87 */
   void (GLAPIENTRYP Rectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2); /* 88 */
   void (GLAPIENTRYP Rectfv)(const GLfloat * v1, const GLfloat * v2); /* 89 */
   void (GLAPIENTRYP Recti)(GLint x1, GLint y1, GLint x2, GLint y2); /* 90 */
   void (GLAPIENTRYP Rectiv)(const GLint * v1, const GLint * v2); /* 91 */
   void (GLAPIENTRYP Rects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2); /* 92 */
   void (GLAPIENTRYP Rectsv)(const GLshort * v1, const GLshort * v2); /* 93 */
   void (GLAPIENTRYP TexCoord1d)(GLdouble s); /* 94 */
   void (GLAPIENTRYP TexCoord1dv)(const GLdouble * v); /* 95 */
   void (GLAPIENTRYP TexCoord1f)(GLfloat s); /* 96 */
   void (GLAPIENTRYP TexCoord1fv)(const GLfloat * v); /* 97 */
   void (GLAPIENTRYP TexCoord1i)(GLint s); /* 98 */
   void (GLAPIENTRYP TexCoord1iv)(const GLint * v); /* 99 */
   void (GLAPIENTRYP TexCoord1s)(GLshort s); /* 100 */
   void (GLAPIENTRYP TexCoord1sv)(const GLshort * v); /* 101 */
   void (GLAPIENTRYP TexCoord2d)(GLdouble s, GLdouble t); /* 102 */
   void (GLAPIENTRYP TexCoord2dv)(const GLdouble * v); /* 103 */
   void (GLAPIENTRYP TexCoord2f)(GLfloat s, GLfloat t); /* 104 */
   void (GLAPIENTRYP TexCoord2fv)(const GLfloat * v); /* 105 */
   void (GLAPIENTRYP TexCoord2i)(GLint s, GLint t); /* 106 */
   void (GLAPIENTRYP TexCoord2iv)(const GLint * v); /* 107 */
   void (GLAPIENTRYP TexCoord2s)(GLshort s, GLshort t); /* 108 */
   void (GLAPIENTRYP TexCoord2sv)(const GLshort * v); /* 109 */
   void (GLAPIENTRYP TexCoord3d)(GLdouble s, GLdouble t, GLdouble r); /* 110 */
   void (GLAPIENTRYP TexCoord3dv)(const GLdouble * v); /* 111 */
   void (GLAPIENTRYP TexCoord3f)(GLfloat s, GLfloat t, GLfloat r); /* 112 */
   void (GLAPIENTRYP TexCoord3fv)(const GLfloat * v); /* 113 */
   void (GLAPIENTRYP TexCoord3i)(GLint s, GLint t, GLint r); /* 114 */
   void (GLAPIENTRYP TexCoord3iv)(const GLint * v); /* 115 */
   void (GLAPIENTRYP TexCoord3s)(GLshort s, GLshort t, GLshort r); /* 116 */
   void (GLAPIENTRYP TexCoord3sv)(const GLshort * v); /* 117 */
   void (GLAPIENTRYP TexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q); /* 118 */
   void (GLAPIENTRYP TexCoord4dv)(const GLdouble * v); /* 119 */
   void (GLAPIENTRYP TexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q); /* 120 */
   void (GLAPIENTRYP TexCoord4fv)(const GLfloat * v); /* 121 */
   void (GLAPIENTRYP TexCoord4i)(GLint s, GLint t, GLint r, GLint q); /* 122 */
   void (GLAPIENTRYP TexCoord4iv)(const GLint * v); /* 123 */
   void (GLAPIENTRYP TexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q); /* 124 */
   void (GLAPIENTRYP TexCoord4sv)(const GLshort * v); /* 125 */
   void (GLAPIENTRYP Vertex2d)(GLdouble x, GLdouble y); /* 126 */
   void (GLAPIENTRYP Vertex2dv)(const GLdouble * v); /* 127 */
   void (GLAPIENTRYP Vertex2f)(GLfloat x, GLfloat y); /* 128 */
   void (GLAPIENTRYP Vertex2fv)(const GLfloat * v); /* 129 */
   void (GLAPIENTRYP Vertex2i)(GLint x, GLint y); /* 130 */
   void (GLAPIENTRYP Vertex2iv)(const GLint * v); /* 131 */
   void (GLAPIENTRYP Vertex2s)(GLshort x, GLshort y); /* 132 */
   void (GLAPIENTRYP Vertex2sv)(const GLshort * v); /* 133 */
   void (GLAPIENTRYP Vertex3d)(GLdouble x, GLdouble y, GLdouble z); /* 134 */
   void (GLAPIENTRYP Vertex3dv)(const GLdouble * v); /* 135 */
   void (GLAPIENTRYP Vertex3f)(GLfloat x, GLfloat y, GLfloat z); /* 136 */
   void (GLAPIENTRYP Vertex3fv)(const GLfloat * v); /* 137 */
   void (GLAPIENTRYP Vertex3i)(GLint x, GLint y, GLint z); /* 138 */
   void (GLAPIENTRYP Vertex3iv)(const GLint * v); /* 139 */
   void (GLAPIENTRYP Vertex3s)(GLshort x, GLshort y, GLshort z); /* 140 */
   void (GLAPIENTRYP Vertex3sv)(const GLshort * v); /* 141 */
   void (GLAPIENTRYP Vertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 142 */
   void (GLAPIENTRYP Vertex4dv)(const GLdouble * v); /* 143 */
   void (GLAPIENTRYP Vertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 144 */
   void (GLAPIENTRYP Vertex4fv)(const GLfloat * v); /* 145 */
   void (GLAPIENTRYP Vertex4i)(GLint x, GLint y, GLint z, GLint w); /* 146 */
   void (GLAPIENTRYP Vertex4iv)(const GLint * v); /* 147 */
   void (GLAPIENTRYP Vertex4s)(GLshort x, GLshort y, GLshort z, GLshort w); /* 148 */
   void (GLAPIENTRYP Vertex4sv)(const GLshort * v); /* 149 */
   void (GLAPIENTRYP ClipPlane)(GLenum plane, const GLdouble * equation); /* 150 */
   void (GLAPIENTRYP ColorMaterial)(GLenum face, GLenum mode); /* 151 */
   void (GLAPIENTRYP CullFace)(GLenum mode); /* 152 */
   void (GLAPIENTRYP Fogf)(GLenum pname, GLfloat param); /* 153 */
   void (GLAPIENTRYP Fogfv)(GLenum pname, const GLfloat * params); /* 154 */
   void (GLAPIENTRYP Fogi)(GLenum pname, GLint param); /* 155 */
   void (GLAPIENTRYP Fogiv)(GLenum pname, const GLint * params); /* 156 */
   void (GLAPIENTRYP FrontFace)(GLenum mode); /* 157 */
   void (GLAPIENTRYP Hint)(GLenum target, GLenum mode); /* 158 */
   void (GLAPIENTRYP Lightf)(GLenum light, GLenum pname, GLfloat param); /* 159 */
   void (GLAPIENTRYP Lightfv)(GLenum light, GLenum pname, const GLfloat * params); /* 160 */
   void (GLAPIENTRYP Lighti)(GLenum light, GLenum pname, GLint param); /* 161 */
   void (GLAPIENTRYP Lightiv)(GLenum light, GLenum pname, const GLint * params); /* 162 */
   void (GLAPIENTRYP LightModelf)(GLenum pname, GLfloat param); /* 163 */
   void (GLAPIENTRYP LightModelfv)(GLenum pname, const GLfloat * params); /* 164 */
   void (GLAPIENTRYP LightModeli)(GLenum pname, GLint param); /* 165 */
   void (GLAPIENTRYP LightModeliv)(GLenum pname, const GLint * params); /* 166 */
   void (GLAPIENTRYP LineStipple)(GLint factor, GLushort pattern); /* 167 */
   void (GLAPIENTRYP LineWidth)(GLfloat width); /* 168 */
   void (GLAPIENTRYP Materialf)(GLenum face, GLenum pname, GLfloat param); /* 169 */
   void (GLAPIENTRYP Materialfv)(GLenum face, GLenum pname, const GLfloat * params); /* 170 */
   void (GLAPIENTRYP Materiali)(GLenum face, GLenum pname, GLint param); /* 171 */
   void (GLAPIENTRYP Materialiv)(GLenum face, GLenum pname, const GLint * params); /* 172 */
   void (GLAPIENTRYP PointSize)(GLfloat size); /* 173 */
   void (GLAPIENTRYP PolygonMode)(GLenum face, GLenum mode); /* 174 */
   void (GLAPIENTRYP PolygonStipple)(const GLubyte * mask); /* 175 */
   void (GLAPIENTRYP Scissor)(GLint x, GLint y, GLsizei width, GLsizei height); /* 176 */
   void (GLAPIENTRYP ShadeModel)(GLenum mode); /* 177 */
   void (GLAPIENTRYP TexParameterf)(GLenum target, GLenum pname, GLfloat param); /* 178 */
   void (GLAPIENTRYP TexParameterfv)(GLenum target, GLenum pname, const GLfloat * params); /* 179 */
   void (GLAPIENTRYP TexParameteri)(GLenum target, GLenum pname, GLint param); /* 180 */
   void (GLAPIENTRYP TexParameteriv)(GLenum target, GLenum pname, const GLint * params); /* 181 */
   void (GLAPIENTRYP TexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels); /* 182 */
   void (GLAPIENTRYP TexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels); /* 183 */
   void (GLAPIENTRYP TexEnvf)(GLenum target, GLenum pname, GLfloat param); /* 184 */
   void (GLAPIENTRYP TexEnvfv)(GLenum target, GLenum pname, const GLfloat * params); /* 185 */
   void (GLAPIENTRYP TexEnvi)(GLenum target, GLenum pname, GLint param); /* 186 */
   void (GLAPIENTRYP TexEnviv)(GLenum target, GLenum pname, const GLint * params); /* 187 */
   void (GLAPIENTRYP TexGend)(GLenum coord, GLenum pname, GLdouble param); /* 188 */
   void (GLAPIENTRYP TexGendv)(GLenum coord, GLenum pname, const GLdouble * params); /* 189 */
   void (GLAPIENTRYP TexGenf)(GLenum coord, GLenum pname, GLfloat param); /* 190 */
   void (GLAPIENTRYP TexGenfv)(GLenum coord, GLenum pname, const GLfloat * params); /* 191 */
   void (GLAPIENTRYP TexGeni)(GLenum coord, GLenum pname, GLint param); /* 192 */
   void (GLAPIENTRYP TexGeniv)(GLenum coord, GLenum pname, const GLint * params); /* 193 */
   void (GLAPIENTRYP FeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer); /* 194 */
   void (GLAPIENTRYP SelectBuffer)(GLsizei size, GLuint * buffer); /* 195 */
   GLint (GLAPIENTRYP RenderMode)(GLenum mode); /* 196 */
   void (GLAPIENTRYP InitNames)(void); /* 197 */
   void (GLAPIENTRYP LoadName)(GLuint name); /* 198 */
   void (GLAPIENTRYP PassThrough)(GLfloat token); /* 199 */
   void (GLAPIENTRYP PopName)(void); /* 200 */
   void (GLAPIENTRYP PushName)(GLuint name); /* 201 */
   void (GLAPIENTRYP DrawBuffer)(GLenum mode); /* 202 */
   void (GLAPIENTRYP Clear)(GLbitfield mask); /* 203 */
   void (GLAPIENTRYP ClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); /* 204 */
   void (GLAPIENTRYP ClearIndex)(GLfloat c); /* 205 */
   void (GLAPIENTRYP ClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha); /* 206 */
   void (GLAPIENTRYP ClearStencil)(GLint s); /* 207 */
   void (GLAPIENTRYP ClearDepth)(GLclampd depth); /* 208 */
   void (GLAPIENTRYP StencilMask)(GLuint mask); /* 209 */
   void (GLAPIENTRYP ColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha); /* 210 */
   void (GLAPIENTRYP DepthMask)(GLboolean flag); /* 211 */
   void (GLAPIENTRYP IndexMask)(GLuint mask); /* 212 */
   void (GLAPIENTRYP Accum)(GLenum op, GLfloat value); /* 213 */
   void (GLAPIENTRYP Disable)(GLenum cap); /* 214 */
   void (GLAPIENTRYP Enable)(GLenum cap); /* 215 */
   void (GLAPIENTRYP Finish)(void); /* 216 */
   void (GLAPIENTRYP Flush)(void); /* 217 */
   void (GLAPIENTRYP PopAttrib)(void); /* 218 */
   void (GLAPIENTRYP PushAttrib)(GLbitfield mask); /* 219 */
   void (GLAPIENTRYP Map1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points); /* 220 */
   void (GLAPIENTRYP Map1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points); /* 221 */
   void (GLAPIENTRYP Map2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points); /* 222 */
   void (GLAPIENTRYP Map2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points); /* 223 */
   void (GLAPIENTRYP MapGrid1d)(GLint un, GLdouble u1, GLdouble u2); /* 224 */
   void (GLAPIENTRYP MapGrid1f)(GLint un, GLfloat u1, GLfloat u2); /* 225 */
   void (GLAPIENTRYP MapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2); /* 226 */
   void (GLAPIENTRYP MapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2); /* 227 */
   void (GLAPIENTRYP EvalCoord1d)(GLdouble u); /* 228 */
   void (GLAPIENTRYP EvalCoord1dv)(const GLdouble * u); /* 229 */
   void (GLAPIENTRYP EvalCoord1f)(GLfloat u); /* 230 */
   void (GLAPIENTRYP EvalCoord1fv)(const GLfloat * u); /* 231 */
   void (GLAPIENTRYP EvalCoord2d)(GLdouble u, GLdouble v); /* 232 */
   void (GLAPIENTRYP EvalCoord2dv)(const GLdouble * u); /* 233 */
   void (GLAPIENTRYP EvalCoord2f)(GLfloat u, GLfloat v); /* 234 */
   void (GLAPIENTRYP EvalCoord2fv)(const GLfloat * u); /* 235 */
   void (GLAPIENTRYP EvalMesh1)(GLenum mode, GLint i1, GLint i2); /* 236 */
   void (GLAPIENTRYP EvalPoint1)(GLint i); /* 237 */
   void (GLAPIENTRYP EvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2); /* 238 */
   void (GLAPIENTRYP EvalPoint2)(GLint i, GLint j); /* 239 */
   void (GLAPIENTRYP AlphaFunc)(GLenum func, GLclampf ref); /* 240 */
   void (GLAPIENTRYP BlendFunc)(GLenum sfactor, GLenum dfactor); /* 241 */
   void (GLAPIENTRYP LogicOp)(GLenum opcode); /* 242 */
   void (GLAPIENTRYP StencilFunc)(GLenum func, GLint ref, GLuint mask); /* 243 */
   void (GLAPIENTRYP StencilOp)(GLenum fail, GLenum zfail, GLenum zpass); /* 244 */
   void (GLAPIENTRYP DepthFunc)(GLenum func); /* 245 */
   void (GLAPIENTRYP PixelZoom)(GLfloat xfactor, GLfloat yfactor); /* 246 */
   void (GLAPIENTRYP PixelTransferf)(GLenum pname, GLfloat param); /* 247 */
   void (GLAPIENTRYP PixelTransferi)(GLenum pname, GLint param); /* 248 */
   void (GLAPIENTRYP PixelStoref)(GLenum pname, GLfloat param); /* 249 */
   void (GLAPIENTRYP PixelStorei)(GLenum pname, GLint param); /* 250 */
   void (GLAPIENTRYP PixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values); /* 251 */
   void (GLAPIENTRYP PixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values); /* 252 */
   void (GLAPIENTRYP PixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values); /* 253 */
   void (GLAPIENTRYP ReadBuffer)(GLenum mode); /* 254 */
   void (GLAPIENTRYP CopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type); /* 255 */
   void (GLAPIENTRYP ReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels); /* 256 */
   void (GLAPIENTRYP DrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels); /* 257 */
   void (GLAPIENTRYP GetBooleanv)(GLenum pname, GLboolean * params); /* 258 */
   void (GLAPIENTRYP GetClipPlane)(GLenum plane, GLdouble * equation); /* 259 */
   void (GLAPIENTRYP GetDoublev)(GLenum pname, GLdouble * params); /* 260 */
   GLenum (GLAPIENTRYP GetError)(void); /* 261 */
   void (GLAPIENTRYP GetFloatv)(GLenum pname, GLfloat * params); /* 262 */
   void (GLAPIENTRYP GetIntegerv)(GLenum pname, GLint * params); /* 263 */
   void (GLAPIENTRYP GetLightfv)(GLenum light, GLenum pname, GLfloat * params); /* 264 */
   void (GLAPIENTRYP GetLightiv)(GLenum light, GLenum pname, GLint * params); /* 265 */
   void (GLAPIENTRYP GetMapdv)(GLenum target, GLenum query, GLdouble * v); /* 266 */
   void (GLAPIENTRYP GetMapfv)(GLenum target, GLenum query, GLfloat * v); /* 267 */
   void (GLAPIENTRYP GetMapiv)(GLenum target, GLenum query, GLint * v); /* 268 */
   void (GLAPIENTRYP GetMaterialfv)(GLenum face, GLenum pname, GLfloat * params); /* 269 */
   void (GLAPIENTRYP GetMaterialiv)(GLenum face, GLenum pname, GLint * params); /* 270 */
   void (GLAPIENTRYP GetPixelMapfv)(GLenum map, GLfloat * values); /* 271 */
   void (GLAPIENTRYP GetPixelMapuiv)(GLenum map, GLuint * values); /* 272 */
   void (GLAPIENTRYP GetPixelMapusv)(GLenum map, GLushort * values); /* 273 */
   void (GLAPIENTRYP GetPolygonStipple)(GLubyte * mask); /* 274 */
   const GLubyte * (GLAPIENTRYP GetString)(GLenum name); /* 275 */
   void (GLAPIENTRYP GetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params); /* 276 */
   void (GLAPIENTRYP GetTexEnviv)(GLenum target, GLenum pname, GLint * params); /* 277 */
   void (GLAPIENTRYP GetTexGendv)(GLenum coord, GLenum pname, GLdouble * params); /* 278 */
   void (GLAPIENTRYP GetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params); /* 279 */
   void (GLAPIENTRYP GetTexGeniv)(GLenum coord, GLenum pname, GLint * params); /* 280 */
   void (GLAPIENTRYP GetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels); /* 281 */
   void (GLAPIENTRYP GetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params); /* 282 */
   void (GLAPIENTRYP GetTexParameteriv)(GLenum target, GLenum pname, GLint * params); /* 283 */
   void (GLAPIENTRYP GetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params); /* 284 */
   void (GLAPIENTRYP GetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params); /* 285 */
   GLboolean (GLAPIENTRYP IsEnabled)(GLenum cap); /* 286 */
   GLboolean (GLAPIENTRYP IsList)(GLuint list); /* 287 */
   void (GLAPIENTRYP DepthRange)(GLclampd zNear, GLclampd zFar); /* 288 */
   void (GLAPIENTRYP Frustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar); /* 289 */
   void (GLAPIENTRYP LoadIdentity)(void); /* 290 */
   void (GLAPIENTRYP LoadMatrixf)(const GLfloat * m); /* 291 */
   void (GLAPIENTRYP LoadMatrixd)(const GLdouble * m); /* 292 */
   void (GLAPIENTRYP MatrixMode)(GLenum mode); /* 293 */
   void (GLAPIENTRYP MultMatrixf)(const GLfloat * m); /* 294 */
   void (GLAPIENTRYP MultMatrixd)(const GLdouble * m); /* 295 */
   void (GLAPIENTRYP Ortho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar); /* 296 */
   void (GLAPIENTRYP PopMatrix)(void); /* 297 */
   void (GLAPIENTRYP PushMatrix)(void); /* 298 */
   void (GLAPIENTRYP Rotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z); /* 299 */
   void (GLAPIENTRYP Rotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z); /* 300 */
   void (GLAPIENTRYP Scaled)(GLdouble x, GLdouble y, GLdouble z); /* 301 */
   void (GLAPIENTRYP Scalef)(GLfloat x, GLfloat y, GLfloat z); /* 302 */
   void (GLAPIENTRYP Translated)(GLdouble x, GLdouble y, GLdouble z); /* 303 */
   void (GLAPIENTRYP Translatef)(GLfloat x, GLfloat y, GLfloat z); /* 304 */
   void (GLAPIENTRYP Viewport)(GLint x, GLint y, GLsizei width, GLsizei height); /* 305 */
   void (GLAPIENTRYP ArrayElement)(GLint i); /* 306 */
   void (GLAPIENTRYP BindTexture)(GLenum target, GLuint texture); /* 307 */
   void (GLAPIENTRYP ColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer); /* 308 */
   void (GLAPIENTRYP DisableClientState)(GLenum array); /* 309 */
   void (GLAPIENTRYP DrawArrays)(GLenum mode, GLint first, GLsizei count); /* 310 */
   void (GLAPIENTRYP DrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices); /* 311 */
   void (GLAPIENTRYP EdgeFlagPointer)(GLsizei stride, const GLvoid * pointer); /* 312 */
   void (GLAPIENTRYP EnableClientState)(GLenum array); /* 313 */
   void (GLAPIENTRYP IndexPointer)(GLenum type, GLsizei stride, const GLvoid * pointer); /* 314 */
   void (GLAPIENTRYP Indexub)(GLubyte c); /* 315 */
   void (GLAPIENTRYP Indexubv)(const GLubyte * c); /* 316 */
   void (GLAPIENTRYP InterleavedArrays)(GLenum format, GLsizei stride, const GLvoid * pointer); /* 317 */
   void (GLAPIENTRYP NormalPointer)(GLenum type, GLsizei stride, const GLvoid * pointer); /* 318 */
   void (GLAPIENTRYP PolygonOffset)(GLfloat factor, GLfloat units); /* 319 */
   void (GLAPIENTRYP TexCoordPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer); /* 320 */
   void (GLAPIENTRYP VertexPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer); /* 321 */
   GLboolean (GLAPIENTRYP AreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences); /* 322 */
   void (GLAPIENTRYP CopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border); /* 323 */
   void (GLAPIENTRYP CopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border); /* 324 */
   void (GLAPIENTRYP CopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width); /* 325 */
   void (GLAPIENTRYP CopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height); /* 326 */
   void (GLAPIENTRYP DeleteTextures)(GLsizei n, const GLuint * textures); /* 327 */
   void (GLAPIENTRYP GenTextures)(GLsizei n, GLuint * textures); /* 328 */
   void (GLAPIENTRYP GetPointerv)(GLenum pname, GLvoid ** params); /* 329 */
   GLboolean (GLAPIENTRYP IsTexture)(GLuint texture); /* 330 */
   void (GLAPIENTRYP PrioritizeTextures)(GLsizei n, const GLuint * textures, const GLclampf * priorities); /* 331 */
   void (GLAPIENTRYP TexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels); /* 332 */
   void (GLAPIENTRYP TexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels); /* 333 */
   void (GLAPIENTRYP PopClientAttrib)(void); /* 334 */
   void (GLAPIENTRYP PushClientAttrib)(GLbitfield mask); /* 335 */
   void (GLAPIENTRYP BlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha); /* 336 */
   void (GLAPIENTRYP BlendEquation)(GLenum mode); /* 337 */
   void (GLAPIENTRYP DrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices); /* 338 */
   void (GLAPIENTRYP ColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table); /* 339 */
   void (GLAPIENTRYP ColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat * params); /* 340 */
   void (GLAPIENTRYP ColorTableParameteriv)(GLenum target, GLenum pname, const GLint * params); /* 341 */
   void (GLAPIENTRYP CopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width); /* 342 */
   void (GLAPIENTRYP GetColorTable)(GLenum target, GLenum format, GLenum type, GLvoid * table); /* 343 */
   void (GLAPIENTRYP GetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat * params); /* 344 */
   void (GLAPIENTRYP GetColorTableParameteriv)(GLenum target, GLenum pname, GLint * params); /* 345 */
   void (GLAPIENTRYP ColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data); /* 346 */
   void (GLAPIENTRYP CopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width); /* 347 */
   void (GLAPIENTRYP ConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image); /* 348 */
   void (GLAPIENTRYP ConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image); /* 349 */
   void (GLAPIENTRYP ConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params); /* 350 */
   void (GLAPIENTRYP ConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat * params); /* 351 */
   void (GLAPIENTRYP ConvolutionParameteri)(GLenum target, GLenum pname, GLint params); /* 352 */
   void (GLAPIENTRYP ConvolutionParameteriv)(GLenum target, GLenum pname, const GLint * params); /* 353 */
   void (GLAPIENTRYP CopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width); /* 354 */
   void (GLAPIENTRYP CopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height); /* 355 */
   void (GLAPIENTRYP GetConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLvoid * image); /* 356 */
   void (GLAPIENTRYP GetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat * params); /* 357 */
   void (GLAPIENTRYP GetConvolutionParameteriv)(GLenum target, GLenum pname, GLint * params); /* 358 */
   void (GLAPIENTRYP GetSeparableFilter)(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span); /* 359 */
   void (GLAPIENTRYP SeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column); /* 360 */
   void (GLAPIENTRYP GetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values); /* 361 */
   void (GLAPIENTRYP GetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat * params); /* 362 */
   void (GLAPIENTRYP GetHistogramParameteriv)(GLenum target, GLenum pname, GLint * params); /* 363 */
   void (GLAPIENTRYP GetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values); /* 364 */
   void (GLAPIENTRYP GetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat * params); /* 365 */
   void (GLAPIENTRYP GetMinmaxParameteriv)(GLenum target, GLenum pname, GLint * params); /* 366 */
   void (GLAPIENTRYP Histogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink); /* 367 */
   void (GLAPIENTRYP Minmax)(GLenum target, GLenum internalformat, GLboolean sink); /* 368 */
   void (GLAPIENTRYP ResetHistogram)(GLenum target); /* 369 */
   void (GLAPIENTRYP ResetMinmax)(GLenum target); /* 370 */
   void (GLAPIENTRYP TexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels); /* 371 */
   void (GLAPIENTRYP TexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels); /* 372 */
   void (GLAPIENTRYP CopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height); /* 373 */
   void (GLAPIENTRYP ActiveTextureARB)(GLenum texture); /* 374 */
   void (GLAPIENTRYP ClientActiveTextureARB)(GLenum texture); /* 375 */
   void (GLAPIENTRYP MultiTexCoord1dARB)(GLenum target, GLdouble s); /* 376 */
   void (GLAPIENTRYP MultiTexCoord1dvARB)(GLenum target, const GLdouble * v); /* 377 */
   void (GLAPIENTRYP MultiTexCoord1fARB)(GLenum target, GLfloat s); /* 378 */
   void (GLAPIENTRYP MultiTexCoord1fvARB)(GLenum target, const GLfloat * v); /* 379 */
   void (GLAPIENTRYP MultiTexCoord1iARB)(GLenum target, GLint s); /* 380 */
   void (GLAPIENTRYP MultiTexCoord1ivARB)(GLenum target, const GLint * v); /* 381 */
   void (GLAPIENTRYP MultiTexCoord1sARB)(GLenum target, GLshort s); /* 382 */
   void (GLAPIENTRYP MultiTexCoord1svARB)(GLenum target, const GLshort * v); /* 383 */
   void (GLAPIENTRYP MultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t); /* 384 */
   void (GLAPIENTRYP MultiTexCoord2dvARB)(GLenum target, const GLdouble * v); /* 385 */
   void (GLAPIENTRYP MultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t); /* 386 */
   void (GLAPIENTRYP MultiTexCoord2fvARB)(GLenum target, const GLfloat * v); /* 387 */
   void (GLAPIENTRYP MultiTexCoord2iARB)(GLenum target, GLint s, GLint t); /* 388 */
   void (GLAPIENTRYP MultiTexCoord2ivARB)(GLenum target, const GLint * v); /* 389 */
   void (GLAPIENTRYP MultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t); /* 390 */
   void (GLAPIENTRYP MultiTexCoord2svARB)(GLenum target, const GLshort * v); /* 391 */
   void (GLAPIENTRYP MultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r); /* 392 */
   void (GLAPIENTRYP MultiTexCoord3dvARB)(GLenum target, const GLdouble * v); /* 393 */
   void (GLAPIENTRYP MultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r); /* 394 */
   void (GLAPIENTRYP MultiTexCoord3fvARB)(GLenum target, const GLfloat * v); /* 395 */
   void (GLAPIENTRYP MultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r); /* 396 */
   void (GLAPIENTRYP MultiTexCoord3ivARB)(GLenum target, const GLint * v); /* 397 */
   void (GLAPIENTRYP MultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r); /* 398 */
   void (GLAPIENTRYP MultiTexCoord3svARB)(GLenum target, const GLshort * v); /* 399 */
   void (GLAPIENTRYP MultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q); /* 400 */
   void (GLAPIENTRYP MultiTexCoord4dvARB)(GLenum target, const GLdouble * v); /* 401 */
   void (GLAPIENTRYP MultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q); /* 402 */
   void (GLAPIENTRYP MultiTexCoord4fvARB)(GLenum target, const GLfloat * v); /* 403 */
   void (GLAPIENTRYP MultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q); /* 404 */
   void (GLAPIENTRYP MultiTexCoord4ivARB)(GLenum target, const GLint * v); /* 405 */
   void (GLAPIENTRYP MultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q); /* 406 */
   void (GLAPIENTRYP MultiTexCoord4svARB)(GLenum target, const GLshort * v); /* 407 */
   void (GLAPIENTRYP StencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask); /* 408 */
   void (GLAPIENTRYP StencilMaskSeparate)(GLenum face, GLuint mask); /* 409 */
   void (GLAPIENTRYP StencilOpSeparate)(GLenum face, GLenum fail, GLenum zfail, GLenum zpass); /* 410 */
   void (GLAPIENTRYP LoadTransposeMatrixdARB)(const GLdouble * m); /* 411 */
   void (GLAPIENTRYP LoadTransposeMatrixfARB)(const GLfloat * m); /* 412 */
   void (GLAPIENTRYP MultTransposeMatrixdARB)(const GLdouble * m); /* 413 */
   void (GLAPIENTRYP MultTransposeMatrixfARB)(const GLfloat * m); /* 414 */
   void (GLAPIENTRYP SampleCoverageARB)(GLclampf value, GLboolean invert); /* 415 */
   void (GLAPIENTRYP CompressedTexImage1DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data); /* 416 */
   void (GLAPIENTRYP CompressedTexImage2DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data); /* 417 */
   void (GLAPIENTRYP CompressedTexImage3DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data); /* 418 */
   void (GLAPIENTRYP CompressedTexSubImage1DARB)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data); /* 419 */
   void (GLAPIENTRYP CompressedTexSubImage2DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data); /* 420 */
   void (GLAPIENTRYP CompressedTexSubImage3DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data); /* 421 */
   void (GLAPIENTRYP GetCompressedTexImageARB)(GLenum target, GLint level, GLvoid * img); /* 422 */
   void (GLAPIENTRYP DisableVertexAttribArrayARB)(GLuint index); /* 423 */
   void (GLAPIENTRYP EnableVertexAttribArrayARB)(GLuint index); /* 424 */
   void (GLAPIENTRYP GetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble * params); /* 425 */
   void (GLAPIENTRYP GetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat * params); /* 426 */
   void (GLAPIENTRYP GetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble * params); /* 427 */
   void (GLAPIENTRYP GetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat * params); /* 428 */
   void (GLAPIENTRYP GetProgramStringARB)(GLenum target, GLenum pname, GLvoid * string); /* 429 */
   void (GLAPIENTRYP GetProgramivARB)(GLenum target, GLenum pname, GLint * params); /* 430 */
   void (GLAPIENTRYP GetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble * params); /* 431 */
   void (GLAPIENTRYP GetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat * params); /* 432 */
   void (GLAPIENTRYP GetVertexAttribivARB)(GLuint index, GLenum pname, GLint * params); /* 433 */
   void (GLAPIENTRYP ProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 434 */
   void (GLAPIENTRYP ProgramEnvParameter4dvARB)(GLenum target, GLuint index, const GLdouble * params); /* 435 */
   void (GLAPIENTRYP ProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 436 */
   void (GLAPIENTRYP ProgramEnvParameter4fvARB)(GLenum target, GLuint index, const GLfloat * params); /* 437 */
   void (GLAPIENTRYP ProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 438 */
   void (GLAPIENTRYP ProgramLocalParameter4dvARB)(GLenum target, GLuint index, const GLdouble * params); /* 439 */
   void (GLAPIENTRYP ProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 440 */
   void (GLAPIENTRYP ProgramLocalParameter4fvARB)(GLenum target, GLuint index, const GLfloat * params); /* 441 */
   void (GLAPIENTRYP ProgramStringARB)(GLenum target, GLenum format, GLsizei len, const GLvoid * string); /* 442 */
   void (GLAPIENTRYP VertexAttrib1dARB)(GLuint index, GLdouble x); /* 443 */
   void (GLAPIENTRYP VertexAttrib1dvARB)(GLuint index, const GLdouble * v); /* 444 */
   void (GLAPIENTRYP VertexAttrib1fARB)(GLuint index, GLfloat x); /* 445 */
   void (GLAPIENTRYP VertexAttrib1fvARB)(GLuint index, const GLfloat * v); /* 446 */
   void (GLAPIENTRYP VertexAttrib1sARB)(GLuint index, GLshort x); /* 447 */
   void (GLAPIENTRYP VertexAttrib1svARB)(GLuint index, const GLshort * v); /* 448 */
   void (GLAPIENTRYP VertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y); /* 449 */
   void (GLAPIENTRYP VertexAttrib2dvARB)(GLuint index, const GLdouble * v); /* 450 */
   void (GLAPIENTRYP VertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y); /* 451 */
   void (GLAPIENTRYP VertexAttrib2fvARB)(GLuint index, const GLfloat * v); /* 452 */
   void (GLAPIENTRYP VertexAttrib2sARB)(GLuint index, GLshort x, GLshort y); /* 453 */
   void (GLAPIENTRYP VertexAttrib2svARB)(GLuint index, const GLshort * v); /* 454 */
   void (GLAPIENTRYP VertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z); /* 455 */
   void (GLAPIENTRYP VertexAttrib3dvARB)(GLuint index, const GLdouble * v); /* 456 */
   void (GLAPIENTRYP VertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z); /* 457 */
   void (GLAPIENTRYP VertexAttrib3fvARB)(GLuint index, const GLfloat * v); /* 458 */
   void (GLAPIENTRYP VertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z); /* 459 */
   void (GLAPIENTRYP VertexAttrib3svARB)(GLuint index, const GLshort * v); /* 460 */
   void (GLAPIENTRYP VertexAttrib4NbvARB)(GLuint index, const GLbyte * v); /* 461 */
   void (GLAPIENTRYP VertexAttrib4NivARB)(GLuint index, const GLint * v); /* 462 */
   void (GLAPIENTRYP VertexAttrib4NsvARB)(GLuint index, const GLshort * v); /* 463 */
   void (GLAPIENTRYP VertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w); /* 464 */
   void (GLAPIENTRYP VertexAttrib4NubvARB)(GLuint index, const GLubyte * v); /* 465 */
   void (GLAPIENTRYP VertexAttrib4NuivARB)(GLuint index, const GLuint * v); /* 466 */
   void (GLAPIENTRYP VertexAttrib4NusvARB)(GLuint index, const GLushort * v); /* 467 */
   void (GLAPIENTRYP VertexAttrib4bvARB)(GLuint index, const GLbyte * v); /* 468 */
   void (GLAPIENTRYP VertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 469 */
   void (GLAPIENTRYP VertexAttrib4dvARB)(GLuint index, const GLdouble * v); /* 470 */
   void (GLAPIENTRYP VertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 471 */
   void (GLAPIENTRYP VertexAttrib4fvARB)(GLuint index, const GLfloat * v); /* 472 */
   void (GLAPIENTRYP VertexAttrib4ivARB)(GLuint index, const GLint * v); /* 473 */
   void (GLAPIENTRYP VertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w); /* 474 */
   void (GLAPIENTRYP VertexAttrib4svARB)(GLuint index, const GLshort * v); /* 475 */
   void (GLAPIENTRYP VertexAttrib4ubvARB)(GLuint index, const GLubyte * v); /* 476 */
   void (GLAPIENTRYP VertexAttrib4uivARB)(GLuint index, const GLuint * v); /* 477 */
   void (GLAPIENTRYP VertexAttrib4usvARB)(GLuint index, const GLushort * v); /* 478 */
   void (GLAPIENTRYP VertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer); /* 479 */
   void (GLAPIENTRYP BindBufferARB)(GLenum target, GLuint buffer); /* 480 */
   void (GLAPIENTRYP BufferDataARB)(GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage); /* 481 */
   void (GLAPIENTRYP BufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data); /* 482 */
   void (GLAPIENTRYP DeleteBuffersARB)(GLsizei n, const GLuint * buffer); /* 483 */
   void (GLAPIENTRYP GenBuffersARB)(GLsizei n, GLuint * buffer); /* 484 */
   void (GLAPIENTRYP GetBufferParameterivARB)(GLenum target, GLenum pname, GLint * params); /* 485 */
   void (GLAPIENTRYP GetBufferPointervARB)(GLenum target, GLenum pname, GLvoid ** params); /* 486 */
   void (GLAPIENTRYP GetBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid * data); /* 487 */
   GLboolean (GLAPIENTRYP IsBufferARB)(GLuint buffer); /* 488 */
   GLvoid * (GLAPIENTRYP MapBufferARB)(GLenum target, GLenum access); /* 489 */
   GLboolean (GLAPIENTRYP UnmapBufferARB)(GLenum target); /* 490 */
   void (GLAPIENTRYP BeginQueryARB)(GLenum target, GLuint id); /* 491 */
   void (GLAPIENTRYP DeleteQueriesARB)(GLsizei n, const GLuint * ids); /* 492 */
   void (GLAPIENTRYP EndQueryARB)(GLenum target); /* 493 */
   void (GLAPIENTRYP GenQueriesARB)(GLsizei n, GLuint * ids); /* 494 */
   void (GLAPIENTRYP GetQueryObjectivARB)(GLuint id, GLenum pname, GLint * params); /* 495 */
   void (GLAPIENTRYP GetQueryObjectuivARB)(GLuint id, GLenum pname, GLuint * params); /* 496 */
   void (GLAPIENTRYP GetQueryivARB)(GLenum target, GLenum pname, GLint * params); /* 497 */
   GLboolean (GLAPIENTRYP IsQueryARB)(GLuint id); /* 498 */
   void (GLAPIENTRYP AttachObjectARB)(GLhandleARB containerObj, GLhandleARB obj); /* 499 */
   void (GLAPIENTRYP CompileShaderARB)(GLhandleARB shaderObj); /* 500 */
   GLhandleARB (GLAPIENTRYP CreateProgramObjectARB)(void); /* 501 */
   GLhandleARB (GLAPIENTRYP CreateShaderObjectARB)(GLenum shaderType); /* 502 */
   void (GLAPIENTRYP DeleteObjectARB)(GLhandleARB obj); /* 503 */
   void (GLAPIENTRYP DetachObjectARB)(GLhandleARB containerObj, GLhandleARB attachedObj); /* 504 */
   void (GLAPIENTRYP GetActiveUniformARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name); /* 505 */
   void (GLAPIENTRYP GetAttachedObjectsARB)(GLhandleARB containerObj, GLsizei maxLength, GLsizei * length, GLhandleARB * infoLog); /* 506 */
   GLhandleARB (GLAPIENTRYP GetHandleARB)(GLenum pname); /* 507 */
   void (GLAPIENTRYP GetInfoLogARB)(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog); /* 508 */
   void (GLAPIENTRYP GetObjectParameterfvARB)(GLhandleARB obj, GLenum pname, GLfloat * params); /* 509 */
   void (GLAPIENTRYP GetObjectParameterivARB)(GLhandleARB obj, GLenum pname, GLint * params); /* 510 */
   void (GLAPIENTRYP GetShaderSourceARB)(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source); /* 511 */
   GLint (GLAPIENTRYP GetUniformLocationARB)(GLhandleARB programObj, const GLcharARB * name); /* 512 */
   void (GLAPIENTRYP GetUniformfvARB)(GLhandleARB programObj, GLint location, GLfloat * params); /* 513 */
   void (GLAPIENTRYP GetUniformivARB)(GLhandleARB programObj, GLint location, GLint * params); /* 514 */
   void (GLAPIENTRYP LinkProgramARB)(GLhandleARB programObj); /* 515 */
   void (GLAPIENTRYP ShaderSourceARB)(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length); /* 516 */
   void (GLAPIENTRYP Uniform1fARB)(GLint location, GLfloat v0); /* 517 */
   void (GLAPIENTRYP Uniform1fvARB)(GLint location, GLsizei count, const GLfloat * value); /* 518 */
   void (GLAPIENTRYP Uniform1iARB)(GLint location, GLint v0); /* 519 */
   void (GLAPIENTRYP Uniform1ivARB)(GLint location, GLsizei count, const GLint * value); /* 520 */
   void (GLAPIENTRYP Uniform2fARB)(GLint location, GLfloat v0, GLfloat v1); /* 521 */
   void (GLAPIENTRYP Uniform2fvARB)(GLint location, GLsizei count, const GLfloat * value); /* 522 */
   void (GLAPIENTRYP Uniform2iARB)(GLint location, GLint v0, GLint v1); /* 523 */
   void (GLAPIENTRYP Uniform2ivARB)(GLint location, GLsizei count, const GLint * value); /* 524 */
   void (GLAPIENTRYP Uniform3fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2); /* 525 */
   void (GLAPIENTRYP Uniform3fvARB)(GLint location, GLsizei count, const GLfloat * value); /* 526 */
   void (GLAPIENTRYP Uniform3iARB)(GLint location, GLint v0, GLint v1, GLint v2); /* 527 */
   void (GLAPIENTRYP Uniform3ivARB)(GLint location, GLsizei count, const GLint * value); /* 528 */
   void (GLAPIENTRYP Uniform4fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3); /* 529 */
   void (GLAPIENTRYP Uniform4fvARB)(GLint location, GLsizei count, const GLfloat * value); /* 530 */
   void (GLAPIENTRYP Uniform4iARB)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3); /* 531 */
   void (GLAPIENTRYP Uniform4ivARB)(GLint location, GLsizei count, const GLint * value); /* 532 */
   void (GLAPIENTRYP UniformMatrix2fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value); /* 533 */
   void (GLAPIENTRYP UniformMatrix3fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value); /* 534 */
   void (GLAPIENTRYP UniformMatrix4fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value); /* 535 */
   void (GLAPIENTRYP UseProgramObjectARB)(GLhandleARB programObj); /* 536 */
   void (GLAPIENTRYP ValidateProgramARB)(GLhandleARB programObj); /* 537 */
   void (GLAPIENTRYP BindAttribLocationARB)(GLhandleARB programObj, GLuint index, const GLcharARB * name); /* 538 */
   void (GLAPIENTRYP GetActiveAttribARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name); /* 539 */
   GLint (GLAPIENTRYP GetAttribLocationARB)(GLhandleARB programObj, const GLcharARB * name); /* 540 */
   void (GLAPIENTRYP DrawBuffersARB)(GLsizei n, const GLenum * bufs); /* 541 */
   void (GLAPIENTRYP PolygonOffsetEXT)(GLfloat factor, GLfloat bias); /* 542 */
   void (GLAPIENTRYP GetHistogramEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values); /* 543 */
   void (GLAPIENTRYP GetHistogramParameterfvEXT)(GLenum target, GLenum pname, GLfloat * params); /* 544 */
   void (GLAPIENTRYP GetHistogramParameterivEXT)(GLenum target, GLenum pname, GLint * params); /* 545 */
   void (GLAPIENTRYP GetMinmaxEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values); /* 546 */
   void (GLAPIENTRYP GetMinmaxParameterfvEXT)(GLenum target, GLenum pname, GLfloat * params); /* 547 */
   void (GLAPIENTRYP GetMinmaxParameterivEXT)(GLenum target, GLenum pname, GLint * params); /* 548 */
   void (GLAPIENTRYP GetConvolutionFilterEXT)(GLenum target, GLenum format, GLenum type, GLvoid * image); /* 549 */
   void (GLAPIENTRYP GetConvolutionParameterfvEXT)(GLenum target, GLenum pname, GLfloat * params); /* 550 */
   void (GLAPIENTRYP GetConvolutionParameterivEXT)(GLenum target, GLenum pname, GLint * params); /* 551 */
   void (GLAPIENTRYP GetSeparableFilterEXT)(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span); /* 552 */
   void (GLAPIENTRYP GetColorTableParameterfvSGI)(GLenum target, GLenum pname, GLfloat * params); /* 553 */
   void (GLAPIENTRYP GetColorTableParameterivSGI)(GLenum target, GLenum pname, GLint * params); /* 554 */
   void (GLAPIENTRYP GetColorTableSGI)(GLenum target, GLenum format, GLenum type, GLvoid * table); /* 555 */
   void (GLAPIENTRYP GetPixelTexGenParameterfvSGIS)(GLenum pname, GLfloat * params); /* 556 */
   void (GLAPIENTRYP GetPixelTexGenParameterivSGIS)(GLenum pname, GLint * params); /* 557 */
   void (GLAPIENTRYP PixelTexGenParameterfSGIS)(GLenum pname, GLfloat param); /* 558 */
   void (GLAPIENTRYP PixelTexGenParameterfvSGIS)(GLenum pname, const GLfloat * params); /* 559 */
   void (GLAPIENTRYP PixelTexGenParameteriSGIS)(GLenum pname, GLint param); /* 560 */
   void (GLAPIENTRYP PixelTexGenParameterivSGIS)(GLenum pname, const GLint * params); /* 561 */
   GLboolean (GLAPIENTRYP AreTexturesResidentEXT)(GLsizei n, const GLuint * textures, GLboolean * residences); /* 562 */
   void (GLAPIENTRYP GenTexturesEXT)(GLsizei n, GLuint * textures); /* 563 */
   GLboolean (GLAPIENTRYP IsTextureEXT)(GLuint texture); /* 564 */
   void (GLAPIENTRYP SampleMaskSGIS)(GLclampf value, GLboolean invert); /* 565 */
   void (GLAPIENTRYP SamplePatternSGIS)(GLenum pattern); /* 566 */
   void (GLAPIENTRYP ColorPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer); /* 567 */
   void (GLAPIENTRYP EdgeFlagPointerEXT)(GLsizei stride, GLsizei count, const GLboolean * pointer); /* 568 */
   void (GLAPIENTRYP IndexPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer); /* 569 */
   void (GLAPIENTRYP NormalPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer); /* 570 */
   void (GLAPIENTRYP TexCoordPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer); /* 571 */
   void (GLAPIENTRYP VertexPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer); /* 572 */
   void (GLAPIENTRYP PointParameterfEXT)(GLenum pname, GLfloat param); /* 573 */
   void (GLAPIENTRYP PointParameterfvEXT)(GLenum pname, const GLfloat * params); /* 574 */
   void (GLAPIENTRYP LockArraysEXT)(GLint first, GLsizei count); /* 575 */
   void (GLAPIENTRYP UnlockArraysEXT)(void); /* 576 */
   void (GLAPIENTRYP CullParameterdvEXT)(GLenum pname, GLdouble * params); /* 577 */
   void (GLAPIENTRYP CullParameterfvEXT)(GLenum pname, GLfloat * params); /* 578 */
   void (GLAPIENTRYP SecondaryColor3bEXT)(GLbyte red, GLbyte green, GLbyte blue); /* 579 */
   void (GLAPIENTRYP SecondaryColor3bvEXT)(const GLbyte * v); /* 580 */
   void (GLAPIENTRYP SecondaryColor3dEXT)(GLdouble red, GLdouble green, GLdouble blue); /* 581 */
   void (GLAPIENTRYP SecondaryColor3dvEXT)(const GLdouble * v); /* 582 */
   void (GLAPIENTRYP SecondaryColor3fEXT)(GLfloat red, GLfloat green, GLfloat blue); /* 583 */
   void (GLAPIENTRYP SecondaryColor3fvEXT)(const GLfloat * v); /* 584 */
   void (GLAPIENTRYP SecondaryColor3iEXT)(GLint red, GLint green, GLint blue); /* 585 */
   void (GLAPIENTRYP SecondaryColor3ivEXT)(const GLint * v); /* 586 */
   void (GLAPIENTRYP SecondaryColor3sEXT)(GLshort red, GLshort green, GLshort blue); /* 587 */
   void (GLAPIENTRYP SecondaryColor3svEXT)(const GLshort * v); /* 588 */
   void (GLAPIENTRYP SecondaryColor3ubEXT)(GLubyte red, GLubyte green, GLubyte blue); /* 589 */
   void (GLAPIENTRYP SecondaryColor3ubvEXT)(const GLubyte * v); /* 590 */
   void (GLAPIENTRYP SecondaryColor3uiEXT)(GLuint red, GLuint green, GLuint blue); /* 591 */
   void (GLAPIENTRYP SecondaryColor3uivEXT)(const GLuint * v); /* 592 */
   void (GLAPIENTRYP SecondaryColor3usEXT)(GLushort red, GLushort green, GLushort blue); /* 593 */
   void (GLAPIENTRYP SecondaryColor3usvEXT)(const GLushort * v); /* 594 */
   void (GLAPIENTRYP SecondaryColorPointerEXT)(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer); /* 595 */
   void (GLAPIENTRYP MultiDrawArraysEXT)(GLenum mode, GLint * first, GLsizei * count, GLsizei primcount); /* 596 */
   void (GLAPIENTRYP MultiDrawElementsEXT)(GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount); /* 597 */
   void (GLAPIENTRYP FogCoordPointerEXT)(GLenum type, GLsizei stride, const GLvoid * pointer); /* 598 */
   void (GLAPIENTRYP FogCoorddEXT)(GLdouble coord); /* 599 */
   void (GLAPIENTRYP FogCoorddvEXT)(const GLdouble * coord); /* 600 */
   void (GLAPIENTRYP FogCoordfEXT)(GLfloat coord); /* 601 */
   void (GLAPIENTRYP FogCoordfvEXT)(const GLfloat * coord); /* 602 */
   void (GLAPIENTRYP PixelTexGenSGIX)(GLenum mode); /* 603 */
   void (GLAPIENTRYP BlendFuncSeparateEXT)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha); /* 604 */
   void (GLAPIENTRYP FlushVertexArrayRangeNV)(void); /* 605 */
   void (GLAPIENTRYP VertexArrayRangeNV)(GLsizei length, const GLvoid * pointer); /* 606 */
   void (GLAPIENTRYP CombinerInputNV)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage); /* 607 */
   void (GLAPIENTRYP CombinerOutputNV)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum); /* 608 */
   void (GLAPIENTRYP CombinerParameterfNV)(GLenum pname, GLfloat param); /* 609 */
   void (GLAPIENTRYP CombinerParameterfvNV)(GLenum pname, const GLfloat * params); /* 610 */
   void (GLAPIENTRYP CombinerParameteriNV)(GLenum pname, GLint param); /* 611 */
   void (GLAPIENTRYP CombinerParameterivNV)(GLenum pname, const GLint * params); /* 612 */
   void (GLAPIENTRYP FinalCombinerInputNV)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage); /* 613 */
   void (GLAPIENTRYP GetCombinerInputParameterfvNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params); /* 614 */
   void (GLAPIENTRYP GetCombinerInputParameterivNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params); /* 615 */
   void (GLAPIENTRYP GetCombinerOutputParameterfvNV)(GLenum stage, GLenum portion, GLenum pname, GLfloat * params); /* 616 */
   void (GLAPIENTRYP GetCombinerOutputParameterivNV)(GLenum stage, GLenum portion, GLenum pname, GLint * params); /* 617 */
   void (GLAPIENTRYP GetFinalCombinerInputParameterfvNV)(GLenum variable, GLenum pname, GLfloat * params); /* 618 */
   void (GLAPIENTRYP GetFinalCombinerInputParameterivNV)(GLenum variable, GLenum pname, GLint * params); /* 619 */
   void (GLAPIENTRYP ResizeBuffersMESA)(void); /* 620 */
   void (GLAPIENTRYP WindowPos2dMESA)(GLdouble x, GLdouble y); /* 621 */
   void (GLAPIENTRYP WindowPos2dvMESA)(const GLdouble * v); /* 622 */
   void (GLAPIENTRYP WindowPos2fMESA)(GLfloat x, GLfloat y); /* 623 */
   void (GLAPIENTRYP WindowPos2fvMESA)(const GLfloat * v); /* 624 */
   void (GLAPIENTRYP WindowPos2iMESA)(GLint x, GLint y); /* 625 */
   void (GLAPIENTRYP WindowPos2ivMESA)(const GLint * v); /* 626 */
   void (GLAPIENTRYP WindowPos2sMESA)(GLshort x, GLshort y); /* 627 */
   void (GLAPIENTRYP WindowPos2svMESA)(const GLshort * v); /* 628 */
   void (GLAPIENTRYP WindowPos3dMESA)(GLdouble x, GLdouble y, GLdouble z); /* 629 */
   void (GLAPIENTRYP WindowPos3dvMESA)(const GLdouble * v); /* 630 */
   void (GLAPIENTRYP WindowPos3fMESA)(GLfloat x, GLfloat y, GLfloat z); /* 631 */
   void (GLAPIENTRYP WindowPos3fvMESA)(const GLfloat * v); /* 632 */
   void (GLAPIENTRYP WindowPos3iMESA)(GLint x, GLint y, GLint z); /* 633 */
   void (GLAPIENTRYP WindowPos3ivMESA)(const GLint * v); /* 634 */
   void (GLAPIENTRYP WindowPos3sMESA)(GLshort x, GLshort y, GLshort z); /* 635 */
   void (GLAPIENTRYP WindowPos3svMESA)(const GLshort * v); /* 636 */
   void (GLAPIENTRYP WindowPos4dMESA)(GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 637 */
   void (GLAPIENTRYP WindowPos4dvMESA)(const GLdouble * v); /* 638 */
   void (GLAPIENTRYP WindowPos4fMESA)(GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 639 */
   void (GLAPIENTRYP WindowPos4fvMESA)(const GLfloat * v); /* 640 */
   void (GLAPIENTRYP WindowPos4iMESA)(GLint x, GLint y, GLint z, GLint w); /* 641 */
   void (GLAPIENTRYP WindowPos4ivMESA)(const GLint * v); /* 642 */
   void (GLAPIENTRYP WindowPos4sMESA)(GLshort x, GLshort y, GLshort z, GLshort w); /* 643 */
   void (GLAPIENTRYP WindowPos4svMESA)(const GLshort * v); /* 644 */
   void (GLAPIENTRYP MultiModeDrawArraysIBM)(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride); /* 645 */
   void (GLAPIENTRYP MultiModeDrawElementsIBM)(const GLenum * mode, const GLsizei * count, GLenum type, const GLvoid * const * indices, GLsizei primcount, GLint modestride); /* 646 */
   void (GLAPIENTRYP DeleteFencesNV)(GLsizei n, const GLuint * fences); /* 647 */
   void (GLAPIENTRYP FinishFenceNV)(GLuint fence); /* 648 */
   void (GLAPIENTRYP GenFencesNV)(GLsizei n, GLuint * fences); /* 649 */
   void (GLAPIENTRYP GetFenceivNV)(GLuint fence, GLenum pname, GLint * params); /* 650 */
   GLboolean (GLAPIENTRYP IsFenceNV)(GLuint fence); /* 651 */
   void (GLAPIENTRYP SetFenceNV)(GLuint fence, GLenum condition); /* 652 */
   GLboolean (GLAPIENTRYP TestFenceNV)(GLuint fence); /* 653 */
   GLboolean (GLAPIENTRYP AreProgramsResidentNV)(GLsizei n, const GLuint * ids, GLboolean * residences); /* 654 */
   void (GLAPIENTRYP BindProgramNV)(GLenum target, GLuint program); /* 655 */
   void (GLAPIENTRYP DeleteProgramsNV)(GLsizei n, const GLuint * programs); /* 656 */
   void (GLAPIENTRYP ExecuteProgramNV)(GLenum target, GLuint id, const GLfloat * params); /* 657 */
   void (GLAPIENTRYP GenProgramsNV)(GLsizei n, GLuint * programs); /* 658 */
   void (GLAPIENTRYP GetProgramParameterdvNV)(GLenum target, GLuint index, GLenum pname, GLdouble * params); /* 659 */
   void (GLAPIENTRYP GetProgramParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat * params); /* 660 */
   void (GLAPIENTRYP GetProgramStringNV)(GLuint id, GLenum pname, GLubyte * program); /* 661 */
   void (GLAPIENTRYP GetProgramivNV)(GLuint id, GLenum pname, GLint * params); /* 662 */
   void (GLAPIENTRYP GetTrackMatrixivNV)(GLenum target, GLuint address, GLenum pname, GLint * params); /* 663 */
   void (GLAPIENTRYP GetVertexAttribPointervNV)(GLuint index, GLenum pname, GLvoid ** params); /* 664 */
   void (GLAPIENTRYP GetVertexAttribdvNV)(GLuint index, GLenum pname, GLdouble * params); /* 665 */
   void (GLAPIENTRYP GetVertexAttribfvNV)(GLuint index, GLenum pname, GLfloat * params); /* 666 */
   void (GLAPIENTRYP GetVertexAttribivNV)(GLuint index, GLenum pname, GLint * params); /* 667 */
   GLboolean (GLAPIENTRYP IsProgramNV)(GLuint program); /* 668 */
   void (GLAPIENTRYP LoadProgramNV)(GLenum target, GLuint id, GLsizei len, const GLubyte * program); /* 669 */
   void (GLAPIENTRYP ProgramParameter4dNV)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 670 */
   void (GLAPIENTRYP ProgramParameter4dvNV)(GLenum target, GLuint index, const GLdouble * params); /* 671 */
   void (GLAPIENTRYP ProgramParameter4fNV)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 672 */
   void (GLAPIENTRYP ProgramParameter4fvNV)(GLenum target, GLuint index, const GLfloat * params); /* 673 */
   void (GLAPIENTRYP ProgramParameters4dvNV)(GLenum target, GLuint index, GLuint num, const GLdouble * params); /* 674 */
   void (GLAPIENTRYP ProgramParameters4fvNV)(GLenum target, GLuint index, GLuint num, const GLfloat * params); /* 675 */
   void (GLAPIENTRYP RequestResidentProgramsNV)(GLsizei n, const GLuint * ids); /* 676 */
   void (GLAPIENTRYP TrackMatrixNV)(GLenum target, GLuint address, GLenum matrix, GLenum transform); /* 677 */
   void (GLAPIENTRYP VertexAttrib1dNV)(GLuint index, GLdouble x); /* 678 */
   void (GLAPIENTRYP VertexAttrib1dvNV)(GLuint index, const GLdouble * v); /* 679 */
   void (GLAPIENTRYP VertexAttrib1fNV)(GLuint index, GLfloat x); /* 680 */
   void (GLAPIENTRYP VertexAttrib1fvNV)(GLuint index, const GLfloat * v); /* 681 */
   void (GLAPIENTRYP VertexAttrib1sNV)(GLuint index, GLshort x); /* 682 */
   void (GLAPIENTRYP VertexAttrib1svNV)(GLuint index, const GLshort * v); /* 683 */
   void (GLAPIENTRYP VertexAttrib2dNV)(GLuint index, GLdouble x, GLdouble y); /* 684 */
   void (GLAPIENTRYP VertexAttrib2dvNV)(GLuint index, const GLdouble * v); /* 685 */
   void (GLAPIENTRYP VertexAttrib2fNV)(GLuint index, GLfloat x, GLfloat y); /* 686 */
   void (GLAPIENTRYP VertexAttrib2fvNV)(GLuint index, const GLfloat * v); /* 687 */
   void (GLAPIENTRYP VertexAttrib2sNV)(GLuint index, GLshort x, GLshort y); /* 688 */
   void (GLAPIENTRYP VertexAttrib2svNV)(GLuint index, const GLshort * v); /* 689 */
   void (GLAPIENTRYP VertexAttrib3dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z); /* 690 */
   void (GLAPIENTRYP VertexAttrib3dvNV)(GLuint index, const GLdouble * v); /* 691 */
   void (GLAPIENTRYP VertexAttrib3fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z); /* 692 */
   void (GLAPIENTRYP VertexAttrib3fvNV)(GLuint index, const GLfloat * v); /* 693 */
   void (GLAPIENTRYP VertexAttrib3sNV)(GLuint index, GLshort x, GLshort y, GLshort z); /* 694 */
   void (GLAPIENTRYP VertexAttrib3svNV)(GLuint index, const GLshort * v); /* 695 */
   void (GLAPIENTRYP VertexAttrib4dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 696 */
   void (GLAPIENTRYP VertexAttrib4dvNV)(GLuint index, const GLdouble * v); /* 697 */
   void (GLAPIENTRYP VertexAttrib4fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 698 */
   void (GLAPIENTRYP VertexAttrib4fvNV)(GLuint index, const GLfloat * v); /* 699 */
   void (GLAPIENTRYP VertexAttrib4sNV)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w); /* 700 */
   void (GLAPIENTRYP VertexAttrib4svNV)(GLuint index, const GLshort * v); /* 701 */
   void (GLAPIENTRYP VertexAttrib4ubNV)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w); /* 702 */
   void (GLAPIENTRYP VertexAttrib4ubvNV)(GLuint index, const GLubyte * v); /* 703 */
   void (GLAPIENTRYP VertexAttribPointerNV)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer); /* 704 */
   void (GLAPIENTRYP VertexAttribs1dvNV)(GLuint index, GLsizei n, const GLdouble * v); /* 705 */
   void (GLAPIENTRYP VertexAttribs1fvNV)(GLuint index, GLsizei n, const GLfloat * v); /* 706 */
   void (GLAPIENTRYP VertexAttribs1svNV)(GLuint index, GLsizei n, const GLshort * v); /* 707 */
   void (GLAPIENTRYP VertexAttribs2dvNV)(GLuint index, GLsizei n, const GLdouble * v); /* 708 */
   void (GLAPIENTRYP VertexAttribs2fvNV)(GLuint index, GLsizei n, const GLfloat * v); /* 709 */
   void (GLAPIENTRYP VertexAttribs2svNV)(GLuint index, GLsizei n, const GLshort * v); /* 710 */
   void (GLAPIENTRYP VertexAttribs3dvNV)(GLuint index, GLsizei n, const GLdouble * v); /* 711 */
   void (GLAPIENTRYP VertexAttribs3fvNV)(GLuint index, GLsizei n, const GLfloat * v); /* 712 */
   void (GLAPIENTRYP VertexAttribs3svNV)(GLuint index, GLsizei n, const GLshort * v); /* 713 */
   void (GLAPIENTRYP VertexAttribs4dvNV)(GLuint index, GLsizei n, const GLdouble * v); /* 714 */
   void (GLAPIENTRYP VertexAttribs4fvNV)(GLuint index, GLsizei n, const GLfloat * v); /* 715 */
   void (GLAPIENTRYP VertexAttribs4svNV)(GLuint index, GLsizei n, const GLshort * v); /* 716 */
   void (GLAPIENTRYP VertexAttribs4ubvNV)(GLuint index, GLsizei n, const GLubyte * v); /* 717 */
   void (GLAPIENTRYP AlphaFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod); /* 718 */
   void (GLAPIENTRYP AlphaFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod); /* 719 */
   void (GLAPIENTRYP AlphaFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod); /* 720 */
   void (GLAPIENTRYP BeginFragmentShaderATI)(void); /* 721 */
   void (GLAPIENTRYP BindFragmentShaderATI)(GLuint id); /* 722 */
   void (GLAPIENTRYP ColorFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod); /* 723 */
   void (GLAPIENTRYP ColorFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod); /* 724 */
   void (GLAPIENTRYP ColorFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod); /* 725 */
   void (GLAPIENTRYP DeleteFragmentShaderATI)(GLuint id); /* 726 */
   void (GLAPIENTRYP EndFragmentShaderATI)(void); /* 727 */
   GLuint (GLAPIENTRYP GenFragmentShadersATI)(GLuint range); /* 728 */
   void (GLAPIENTRYP PassTexCoordATI)(GLuint dst, GLuint coord, GLenum swizzle); /* 729 */
   void (GLAPIENTRYP SampleMapATI)(GLuint dst, GLuint interp, GLenum swizzle); /* 730 */
   void (GLAPIENTRYP SetFragmentShaderConstantATI)(GLuint dst, const GLfloat * value); /* 731 */
   void (GLAPIENTRYP PointParameteriNV)(GLenum pname, GLint param); /* 732 */
   void (GLAPIENTRYP PointParameterivNV)(GLenum pname, const GLint * params); /* 733 */
   void (GLAPIENTRYP ActiveStencilFaceEXT)(GLenum face); /* 734 */
   void (GLAPIENTRYP BindVertexArrayAPPLE)(GLuint array); /* 735 */
   void (GLAPIENTRYP DeleteVertexArraysAPPLE)(GLsizei n, const GLuint * arrays); /* 736 */
   void (GLAPIENTRYP GenVertexArraysAPPLE)(GLsizei n, GLuint * arrays); /* 737 */
   GLboolean (GLAPIENTRYP IsVertexArrayAPPLE)(GLuint array); /* 738 */
   void (GLAPIENTRYP GetProgramNamedParameterdvNV)(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params); /* 739 */
   void (GLAPIENTRYP GetProgramNamedParameterfvNV)(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params); /* 740 */
   void (GLAPIENTRYP ProgramNamedParameter4dNV)(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w); /* 741 */
   void (GLAPIENTRYP ProgramNamedParameter4dvNV)(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v); /* 742 */
   void (GLAPIENTRYP ProgramNamedParameter4fNV)(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w); /* 743 */
   void (GLAPIENTRYP ProgramNamedParameter4fvNV)(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v); /* 744 */
   void (GLAPIENTRYP DepthBoundsEXT)(GLclampd zmin, GLclampd zmax); /* 745 */
   void (GLAPIENTRYP BlendEquationSeparateEXT)(GLenum modeRGB, GLenum modeA); /* 746 */
   void (GLAPIENTRYP BindFramebufferEXT)(GLenum target, GLuint framebuffer); /* 747 */
   void (GLAPIENTRYP BindRenderbufferEXT)(GLenum target, GLuint renderbuffer); /* 748 */
   GLenum (GLAPIENTRYP CheckFramebufferStatusEXT)(GLenum target); /* 749 */
   void (GLAPIENTRYP DeleteFramebuffersEXT)(GLsizei n, const GLuint * framebuffers); /* 750 */
   void (GLAPIENTRYP DeleteRenderbuffersEXT)(GLsizei n, const GLuint * renderbuffers); /* 751 */
   void (GLAPIENTRYP FramebufferRenderbufferEXT)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer); /* 752 */
   void (GLAPIENTRYP FramebufferTexture1DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level); /* 753 */
   void (GLAPIENTRYP FramebufferTexture2DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level); /* 754 */
   void (GLAPIENTRYP FramebufferTexture3DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset); /* 755 */
   void (GLAPIENTRYP GenFramebuffersEXT)(GLsizei n, GLuint * framebuffers); /* 756 */
   void (GLAPIENTRYP GenRenderbuffersEXT)(GLsizei n, GLuint * renderbuffers); /* 757 */
   void (GLAPIENTRYP GenerateMipmapEXT)(GLenum target); /* 758 */
   void (GLAPIENTRYP GetFramebufferAttachmentParameterivEXT)(GLenum target, GLenum attachment, GLenum pname, GLint * params); /* 759 */
   void (GLAPIENTRYP GetQueryObjecti64vEXT)(GLuint id, GLenum pname, GLint64EXT * params); /* 760 */
   void (GLAPIENTRYP GetQueryObjectui64vEXT)(GLuint id, GLenum pname, GLuint64EXT * params); /* 761 */
   void (GLAPIENTRYP GetRenderbufferParameterivEXT)(GLenum target, GLenum pname, GLint * params); /* 762 */
   GLboolean (GLAPIENTRYP IsFramebufferEXT)(GLuint framebuffer); /* 763 */
   GLboolean (GLAPIENTRYP IsRenderbufferEXT)(GLuint renderbuffer); /* 764 */
   void (GLAPIENTRYP RenderbufferStorageEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height); /* 765 */
   void (GLAPIENTRYP BlitFramebufferEXT)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter); /* 766 */
   void (GLAPIENTRYP ProgramEnvParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, const GLfloat * params); /* 767 */
   void (GLAPIENTRYP ProgramLocalParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, const GLfloat * params); /* 768 */
};

#endif /* !defined( _GLAPI_TABLE_H_ ) */
