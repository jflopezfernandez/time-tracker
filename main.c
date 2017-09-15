
#include "includes/debug.h"
#include "includes/google-test.h"
#include "includes/main.h"
#include "includes/time.h"
#include "includes/parse-args.h"
#include "includes/io.h"
#include "includes/program.h"

// FUTURE FEATURE: Ranks for productivity
// FUTURE FEATURE: Google Test Framework

// TODO: Program still does not actually have a time tracking feature


int main(int argc, char *argv[])
{
  INITIALIZE_PROGRAM

  // *** Parse command line args ***
  //Option passedInParameters = ParseCommandLineArguments(argc, argv);
  //if (passedInParameters == 1)
  //return (EXIT_FAILURE);

  DisplayMainMenu();
  GET_USER_SELECTION
  SETUP_HANDLER_FUNCTION

#ifdef DISABLE
  switch (USER_SELECTION) {
    case (TRACK_TIME):
      SET(TrackTime);
      break;

    case (COUNT_DOWN):
      SET(CountDown);
      break;

    default:
      ERRMSG("Could not understand your input.", ERRONEOUS_USER_INPUT)
  }
#endif

  // Carry out selected user action
  VERIFY_NONNEGATIVE_EXIT_STATUS(userAction(options->userProgress))

  //TERMINATE_PROGRAM
  testing::InitGoogleTest(&argc,argv);
  RUN_ALL_TESTS();

  return (EXIT_SUCCESS);
}