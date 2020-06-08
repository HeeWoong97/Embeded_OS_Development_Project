#ifndef LIB_STDLIB_H_
#define LIB_STDLIB_H_

#include "stdint.h"
#include "stdbool.h"

#include "HalTimer.h"

void delay(uint32_t ms);
void memclr(void* dst, uint32_t count);

#endif