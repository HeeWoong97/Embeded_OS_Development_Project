#include "event.h"

static uint32_t sEventFlag; // 태스크끼리 이벤트를 송/수신할 수 있는 매개체??

void Kernel_event_flag_init(void) {
    sEventFlag = 0;
}

void Kernel_event_flag_set(KernelEventFlag_t event) {
    sEventFlag |= (uint32_t)event;
}

void Kernel_event_flag_clear(KernelEventFlag_t event) {
    sEventFlag &= ~((uint32_t)event);
}

bool Kernel_event_flag_check(KernelEventFlag_t event) {
    if (sEventFlag & (uint32_t)event) {
        Kernel_event_flag_clear(event);
        return true;
    }
    return false;
}