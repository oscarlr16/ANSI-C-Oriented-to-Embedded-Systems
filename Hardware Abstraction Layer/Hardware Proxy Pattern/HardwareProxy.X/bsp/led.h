#ifndef LED_H
#define LED_H

typedef enum {
    LED_NONE,
    LED_RED,
    LED_YELLOW,
    LED_GREEN,
    LED_BLUE
}LED;

void led_enable(LED led);
void led_on(LED led);
void led_off(LED led);
#endif