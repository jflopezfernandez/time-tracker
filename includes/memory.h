//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_MEMORY_H
#define TRACKER_MEMORY_H

#include "debug.h"
#include "numeric-defs.h"

#include <assert.h>

typedef void* Object;

Status deleteObject(Object n);

static Object setToNull(Object n);
#define VERIFY_OBJECT_IS_NULL(n) assert(n == NULL);


#endif //TRACKER_MEMORY_H
