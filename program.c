//
// Created by jflop on 9/15/2017.
//

#include "includes/program.h"


ProgramOptions InitializeProgram() {
  PRINTLN("Initializing program...")
  ProgramOptions options = (ProgramOptions) malloc (sizeof (t_ProgramOptions));

  // TODO: Fix so that it responds per command line params
  options->debugMode = true;
  options->userProgress = NULL;

  PRINT("Debug Mode:", options->debugMode);
  PRINT("User Progress:", (int) options->userProgress);

  return (options);
}

void DisplayMainMenu() {
  CLEARSCREEN

  printf("\n\n\t\t\t TIME TRACKER APPLICATION 0.0.1 \n\n");

  printf("Please select an option: \n");
  printf("\t1. Track Activity Time \n");
  printf("\t2. Countdown Timer \n");
  printf("\n\t0. Exit \n");
}

void TerminateProgram(ProgramOptions options) {
  FUNCDBG
  PRINTLN("[placeholder...] \n")
}