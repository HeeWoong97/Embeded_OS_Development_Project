#ifndef LIB_SWITCH_H_
#define LIB_SWITCH_H_

#include "stdint.h"
#include "stdbool.h"

#include "task.h"

void Kernel_task_context_switching(void);
void Save_context(void);
void Restore_context(void);

#endif /* LIB_SWITCH_H_ */
