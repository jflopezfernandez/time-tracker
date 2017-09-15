//
// Created by jflop on 9/15/2017.
//

#ifndef TRACKER_TIME_H
#define TRACKER_TIME_H

#include "debug.h"
#include "numeric-defs.h"

typedef struct {
  Int seconds;
  Int minutes;
  Int hours;
} t_Progress;

typedef t_Progress* Progress;

Progress InitializeNewTimer();
Progress createNewProgressStructure(int h, int m, int s);
void SetTimeStructValues(Progress time, uint64_t h, uint64_t m, uint64_t s);

void PrintUserProgress(Progress time);

int TrackTime(Progress userProgress);
int CountDown(Progress userProgress);

#endif //TRACKER_TIME_H
