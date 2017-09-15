//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_PROGRAM_H
#define TRACKER_PROGRAM_H

#include "debug.h"
#include "numeric-defs.h"
#include "time.h"
#include "error.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Main menu options
#define TRACK_TIME 1
#define COUNT_DOWN 2

typedef struct {
  Option debugMode;
  Option printHelp;

  Progress userProgress;
}t_ProgramOptions;
typedef t_ProgramOptions* ProgramOptions;

ProgramOptions InitializeProgram();

void DisplayMainMenu();

void TerminateProgram(ProgramOptions options);

#define INITIALIZE_PROGRAM ProgramOptions options = InitializeProgram();
#define TERMINATE_PROGRAM TerminateProgram(options); \
                          return (EXIT_SUCCESS);
#define SETUP_HANDLER_FUNCTION int (*userAction)(Progress userProgress); \
                               userAction = NULL;

#define SET(fn) userAction = fn;

#endif //TRACKER_PROGRAM_H
