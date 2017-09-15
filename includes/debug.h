//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_DEBUG_H
#define TRACKER_DEBUG_H

#include "error.h"
#include "os-dependent.h"

#if defined RELEASE
#define FUNCDBG
#else
#define FUNCDBG printf("%s\n", __func__);
#endif

#if defined RELEASE
#define PRINT(msg,val)
#define PRINTLN(msg)
#else
#define PRINT(msg,val) printf("[DEBUG %s : %s] %s: %i (%s, %li) \n", \
                              __DATE__,                              \
                              __TIME__,                              \
                                msg,                                 \
                                val,                                 \
                              __FILE__,                              \
                              __LINE__);
#define PRINTLN(msg) printf("[DEBUG %s : %s] %s: (%s, %li) \n",      \
                              __DATE__,                              \
                              __TIME__,                              \
                                msg,                                 \
                              __FILE__,                              \
                              __LINE__);
#endif

#endif //TRACKER_DEBUG_H
