//
// Created by jflop on 9/15/2017.
//

#include "includes/debug.h"
#include "includes/user.h"


void SaveUserProfile() { printf("[%s] \n", __func__); }
void LoadUserProfile() { printf("[%s] \n", __func__); }

void SessionFinished() { printf("[%s] \n", __func__); }

static void addSessionPoints() {
  printf("[%s] \n", __func__);

  char *lvlUp;
  if (checkForLevelUp(-1) == true)
    lvlUp = "true";
  else
    lvlUp = "false";

  printf("Level up: %s\n", lvlUp);
}
static bool checkForLevelUp(int points) {
  printf("[%s] \n", __func__);

  return (false);
}

static void LevelUp() { printf("[%s] \n", __func__); }
static void LevelDn() { printf("[%s] \n", __func__); }