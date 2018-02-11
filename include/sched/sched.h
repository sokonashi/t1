#ifndef SCHED_H
#define SCHED_H

#include <sched/process.h>

void sched_init(process_t *proc);
void sched_add(process_t *proc);
void sched_remove(process_t *proc);
unsigned long sched_pid_alloc(void);

#endif
