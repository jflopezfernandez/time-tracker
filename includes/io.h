//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_IO_H
#define TRACKER_IO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "debug.h"
#include "error.h"
#include "numeric-defs.h"

#define INT       1
#define FLOAT     2
#define DOUBLE    3
#define CHAR      4

#define INT_H    10
#define FLOAT_H  20
#define DOUBLE_H 30
#define CHAR_H   40

typedef int Type;

void* promptUserForInput(Type inputNeeded);
#define SELECT_OPTION(x) OptionHandler x = (OptionHandler) promptUserForInput(INT_H);

Option PromptForSaveFile();

Status SaveProgress();
Status LoadProgress();

#define GET_USER_SELECTION OptionHandler userOption = (OptionHandler) promptUserForInput(INT_H);
#define USER_SELECTION *userOption

#endif //TRACKER_IO_H
