// Autogenerated by: https://gist.github.com/wheybags/fe2fc44e309f1942fb3e0f34e01adf5f

#include <SDL.h>

#ifdef GL_GLEXT_PROTOTYPES
    #undef GL_GLEXT_PROTOTYPES
#endif

#define glBlendEquation glBlendEquation_BROKEN_SDL_DECLARATION
#define glActiveTexture glActiveTexture_BROKEN_SDL_DECLARATION
#include <SDL_opengl.h>
#undef glBlendEquation
#undef glActiveTexture

#ifndef SDL_GL_FUNCS
#define SDL_GL_FUNCS

    extern PFNGLGENBUFFERSPROC glGenBuffers;
    extern PFNGLBINDBUFFERPROC glBindBuffer;
    extern PFNGLBUFFERDATAPROC glBufferData;
    extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
    extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
    extern PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
    extern PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
    extern PFNGLCREATESHADERPROC glCreateShader;
    extern PFNGLCOMPILESHADERPROC glCompileShader;
    extern PFNGLSHADERSOURCEPROC glShaderSource;
    extern PFNGLCREATEPROGRAMPROC glCreateProgram;
    extern PFNGLATTACHSHADERPROC glAttachShader;
    extern PFNGLLINKPROGRAMPROC glLinkProgram;
    extern PFNGLUSEPROGRAMPROC glUseProgram;
    extern PFNGLGETSHADERIVPROC glGetShaderiv;
    extern PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
    extern PFNGLDELETESHADERPROC glDeleteShader;
    extern PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
    extern PFNGLUNIFORM1FPROC glUniform1f;
    extern PFNGLGETPROGRAMIVPROC glGetProgramiv;
    extern PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
    extern PFNGLDETACHSHADERPROC glDetachShader;
    extern PFNGLDELETEPROGRAMPROC glDeleteProgram;
    extern PFNGLDELETEBUFFERSPROC glDeleteBuffers;
    extern PFNGLUNIFORM1IPROC glUniform1i;
    extern PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
    extern PFNGLMAPBUFFERPROC glMapBuffer;
    extern PFNGLUNMAPBUFFERPROC glUnmapBuffer;
    extern PFNGLBLENDEQUATIONPROC glBlendEquation;
    extern PFNGLACTIVETEXTUREPROC glActiveTexture;

    void initGlFuncs();

#endif