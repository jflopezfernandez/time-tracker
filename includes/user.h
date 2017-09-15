//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_USER_H
#define TRACKER_USER_H

#include "debug.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint8_t Rank;

struct user_t{
  Rank rank;
};
typedef struct user_t* User;

void SaveUserProfile();
void LoadUserProfile();

void SessionFinished();

static void addSessionPoints();
static bool checkForLevelUp(int points);

static void LevelUp();
static void LevelDn();

#endif //TRACKER_USER_H
