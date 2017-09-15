CMAKE_MINIMUM_REQUIRED (VERSION 3.8.1)
PROJECT (tracker)

SET (CMAKE_C_STANDARD 99)

SET (SOURCE_FILES main.c includes/main.h includes/time.h includes/numeric-defs.h time.c includes/parse-args.h parse-args.c includes/user.h user.c includes/debug.h includes/stdlib/string.h includes/io.h io.c includes/program.h program.c includes/os-dependent.h includes/error.h)
ADD_EXECUTABLE (tracker ${SOURCE_FILES})