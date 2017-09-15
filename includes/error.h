//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_ERROR_H
#define TRACKER_ERROR_H

#include <stdio.h>
#include <stdlib.h>

/** Program Error Codes */
#define ERRONEOUS_USER_INPUT 100

#define ERRMSG(msg,code) printf("[ERROR CODE %i - %s %s] %s (file: %s, line: %li) \n", \
                                    code,                                                \
                                  __DATE__,                                            \
                                  __TIME__,                                            \
                                    msg,                                               \
                                  __FILE__,                                            \
                                  __LINE__);

#endif //TRACKER_ERROR_H
