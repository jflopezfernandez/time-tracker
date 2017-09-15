//
// Created by jflop on 9/15/2017.
//

#include <stdio.h>
#include <stdlib.h>

#include "includes/time.h"


Progress InitializeNewTimer() {
  Progress time = createNewProgressStructure(0, 0, 0);

  return (time);
}

Progress createNewProgressStructure(int h, int m, int s) {
  // Verify inputs are positive

  Progress newTimeStruct = (Progress) malloc (sizeof (t_Progress));

  SetTimeStructValues(newTimeStruct, h, m, s);

  return (newTimeStruct);
}

void SetTimeStructValues(Progress time, uint64_t h, uint64_t m, uint64_t s) {
  time->hours = h;
  time->minutes = m;
  time->seconds = s;
}

void PrintUserProgress(Progress time) {
  printf("Current Progress: \n");
  printf("\tHours: %U64u\n", time->hours);
  printf("\tMinutes: %U64u\n", time->minutes);
  printf("\tSeconds: %U64u\n", time->seconds);
}

Status TrackTime(Progress userProgress) {
  //PromptForSaveFile();
  //int userOptionLoadSaveFile = getUserInput();

  //if (userOptionLoadSaveFile == FALSE) {
  //userProgress = InitializeNewTimer();
  //PrintUserProgress(userProgress);
  //}

  return (ERROR);
}

Status CountDown(Progress userProgress) {
  return (ERROR);
}