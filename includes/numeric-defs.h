//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_NUMERIC_DEFS_H
#define TRACKER_NUMERIC_DEFS_H

#include "debug.h"

#include <stdint.h>
#include <limits.h>
#include <stdbool.h>

#define TRUE  1
#define FALSE 0

#define ENABLED  1
#define DISABLED 0

#define ERROR -7
#define UNINITIALIZED -1

#define VERIFY(x) ((x != ERROR) : true ? false)

typedef int Option;
typedef int Status;
typedef bool Switch;

typedef int* OptionHandler;

typedef uint64_t Int;

#define CHECK_POSITIVE(n) (n > 0) : true ? false);


#endif //TRACKER_NUMERIC_DEFS_H
