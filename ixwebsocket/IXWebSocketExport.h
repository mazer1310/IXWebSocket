/*
 *  IXWebSocketExport.h
 */
#ifndef IXWEBSOCKET_EXPORT_H
#define IXWEBSOCKET_EXPORT_H

#undef IXWEBSOCKET_EXPORT
#if defined(_WIN32) || defined(WIN32)
#   ifdef IXWEBSOCKET_STATIC_DEFINE 
    /* Building and using static library */
#       define IXWEBSOCKET_EXPORT
#   else
#       ifdef ixwebsocket_EXPORTS /* Comes from cmake, documented in DEFINE_SYMBOL */
        /* Building dynamic library */
#           define IXWEBSOCKET_EXPORT __declspec(dllexport)
#       else
           /* Using dynamic library */
#          define IXWEBSOCKET_EXPORT __declspec(dllimport)
#       endif
#   endif /* IXWEBSOCKET_STATIC_DEFINE */
#else
#   define IXWEBSOCKET_EXPORT
#endif /* WIN32 */

#endif /* IXWEBSOCKET_EXPORT_H */
