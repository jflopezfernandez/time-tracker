//
// Created by jflop on 9/15/2017.
//


#include "includes/io.h"


void* promptUserForInput(Type inputNeeded) {
  char buffer[16];
  fgets(buffer, 15, stdin);

  switch (inputNeeded) {
    case (INT):
      PRINTLN("integer");
      break;
    case (FLOAT):
      PRINTLN("float");
      break;
    case (DOUBLE):
      PRINTLN("double");
      break;
    case (CHAR):
      PRINTLN("char");
      break;
    case (INT_H):
      PRINTLN("int handler");
      break;
    case (FLOAT_H):
      PRINTLN("flot handler");
      break;
    case (DOUBLE_H):
      PRINTLN("double handler");
      break;
    case (CHAR_H):
      PRINTLN("char handler");
      break;
    default:
      ERRMSG("Did not understand user input, please try again.", ERRONEOUS_USER_INPUT)
  }

  void* nptr = NULL;

  return (nptr);
}

Option PromptForSaveFile() {
  printf("Would you like to load your progress from file? ");

  OptionHandler loadFile = (OptionHandler) promptUserForInput();
  PRINT("User response: ", *loadFile)

  return (*loadFile);
}

Status SaveProgress() {
  return (EXIT_FAILURE);
}

Status LoadProgress() {
  return (EXIT_FAILURE);
}