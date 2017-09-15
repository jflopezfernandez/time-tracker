//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_OS_DEPENDENT_H
#define TRACKER_OS_DEPENDENT_H

#ifdef _WIN32
#else
#include <unistd.h>
#endif

#ifdef _WIN32
#define CLEARSCREEN system("cls");
#else
#define CLEARSCREEN system("clear");
#endif

#endif //TRACKER_OS_DEPENDENT_H
