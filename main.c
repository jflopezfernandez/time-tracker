
#include "includes/debug.h"
#include "includes/main.h"
#include "includes/time.h"
#include "includes/parse-args.h"
#include "includes/io.h"
#include "includes/program.h"

// FUTURE FEATURE: Ranks for productivity

void test() {
  FUNCDBG
  printf("testing testing testing... \n");
}


int main(int argc, char *argv[])
{
  INITIALIZE_PROGRAM

  // *** Parse command line args ***
  //Option passedInParameters = ParseCommandLineArguments(argc, argv);
  //if (passedInParameters == 1)
  //return (EXIT_FAILURE);

  // *** Select option from Main menu ***
  DisplayMainMenu();
  OptionHandler userOption = (OptionHandler) promptUserForInput(INT_H);

  // This function pointer will carry out the function the user selects
  int (*userAction)(Progress userProgress);
  userAction = NULL;

  switch (*userOption) {
    case (TRACK_TIME):
      //PromptForSaveFile();
      //int userOptionLoadSaveFile = getUserInput();

      //if (userOptionLoadSaveFile == FALSE) {
        //userProgress = InitializeNewTimer();
        //PrintUserProgress(userProgress);
      //}
      userAction = TrackTime;
      break;

    case (COUNT_DOWN):
      userAction = CountDown;
      break;

    default:
      printf("[ERROR] Could not understand your input. Terminating... \n\n");
  }

  // Carry out user action selected
  userAction(options->userProgress);

  return (EXIT_SUCCESS);
}