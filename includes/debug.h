//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_DEBUG_H
#define TRACKER_DEBUG_H

#include "error.h"
#include "os-dependent.h"

#define NOT(x) !(x)
#define IS_NOT(x) NOT(x)

#if defined RELEASE
#define FUNCDBG
#else
#define FUNCDBG printf("%s\n", __func__);
#endif

#if defined RELEASE
#define PRINT(msg,val)
#define PRINTLN(msg)
#define VERIFY_NONNEGATIVE_EXIT_STATUS(x) x
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

#define VERIFY_NONNEGATIVE_EXIT_STATUS(x) assert(IS_NOT(x < 0));

#endif

#endif //TRACKER_DEBUG_H
