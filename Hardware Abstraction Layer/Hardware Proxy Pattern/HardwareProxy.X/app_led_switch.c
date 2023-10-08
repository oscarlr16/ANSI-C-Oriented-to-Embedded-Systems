#include "system.h"

void app_led_switch(){
    led_on(WIFI_CONNECTION_LED);
    led_off(ERROR_LED);
}