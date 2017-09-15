CMAKE_MINIMUM_REQUIRED (VERSION 3.8.1)
PROJECT (TimeTracker)

SET (CMAKE_C_STANDARD 99)

ADD_SUBDIRECTORY (google-test)
INCLUDE_DIRECTORIES (google-test/googletest/include)
INCLUDE_DIRECTORIES (google-test/googlemock/include)


SET (SOURCE_FILES main.c includes/main.h includes/time.h includes/numeric-defs.h time.c includes/parse-args.h parse-args.c includes/user.h user.c includes/debug.h includes/stdlib/string.h includes/io.h io.c includes/program.h program.c includes/os-dependent.h includes/error.h includes/memory.h memory.c includes/google-test.h tests/gtests/TestClass.cpp tests/gtests/TestClass.h)
ADD_EXECUTABLE (TimeTracker ${SOURCE_FILES})
TARGET_LINK_LIBRARIES (TimeTracker gtest gtest_main)
