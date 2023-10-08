#ifndef SYSTEM_H
#define	SYSTEM_H

#include "io_mapping.h"
typedef enum {
    system_state_polling,
    system_state_interrupt
}SYSTEM_STATE;

void system_initialize(SYSTEM_STATE state);
#endif	/* SYSTEM_H */
