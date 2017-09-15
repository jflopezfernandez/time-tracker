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
  printf("\tHours: %U64\n", time->hours);
  printf("\tMinutes: %U64\n", time->minutes);
  printf("\tSeconds: %U64\n", time->seconds);
}

int TrackTime(Progress userProgress) {
  return (ERROR);
}

int CountDown(Progress userProgress) {
  return (ERROR);
}