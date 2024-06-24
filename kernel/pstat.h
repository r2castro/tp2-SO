#ifndef _PSTAT_H_
#define _PSTAT_H

#include "param.h"

// struct for getting process data through the ps user command
struct pstat {
  int inuse[NPROC];
  int tickets[NPROC];
  int pid[NPROC];
  int ticks[NPROC];
};

#endif
