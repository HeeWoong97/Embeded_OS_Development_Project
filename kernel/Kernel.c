#include "stdint.h"
#include "stdbool.h"
#include "stdio.h"

#include "task.h"
#include "HalUart.h"

void Kernel_start(void) {
    Kernel_task_start();
}

void Kernel_yield(void) {
    Kernel_task_scheduler();
}