#include "app_led_switch.h"
#include "system.h"

int main(void) {
    system_initialize(system_state_polling);
    while(1){
        app_led_switch();
    }
    return 0;
}
