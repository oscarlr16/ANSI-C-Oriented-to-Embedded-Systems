#include "led.h"
#include <xc.h>
#include <p24FJ128GA705.h>

#define LED_RED_LAT LATBbits.LATB4
#define LED_YELLOW_LAT LATCbits.LATC3
#define LED_GREEN_LAT LATCbits.LATC4
#define LED_BLUE_LAT LATCbits.LATC5

#define LED_RED_TRIS TRISBbits.TRISB4
#define LED_YELLOW_TRIS TRISCbits.TRISC3
#define LED_GREEN_TRIS TRISCbits.TRISC4
#define LED_BLUE_TRIS TRISCbits.TRISC5

#define OUTPUT 0
#define INPUT 1

#define LED_ON 0
#define LED_OFF 1


void led_enable(LED led){
 //Set the TRIS register to output
    switch(led){
        case LED_RED:
            LED_RED_TRIS = OUTPUT;
            break;
        case LED_YELLOW:
            LED_YELLOW_TRIS = OUTPUT;
            break;
        case LED_GREEN:
            LED_GREEN_TRIS = OUTPUT;
            break;
        case LED_BLUE:
            LED_BLUE_TRIS = OUTPUT;
            break;
    }
}

void led_on(LED led){
    switch(led){
        case LED_RED:
            LED_RED_LAT = LED_ON;
            break;
        case LED_YELLOW:
            LED_YELLOW_LAT = LED_ON;
            break;
        case LED_GREEN:
            LED_GREEN_LAT = LED_ON;
            break;
        case LED_BLUE:
            LED_BLUE_LAT = LED_ON;
            break;
    }
}

void led_off(LED led){
    switch(led){
        case LED_RED:
            LED_RED_LAT = LED_OFF;
            break;
        case LED_YELLOW:
            LED_YELLOW_LAT = LED_OFF;
            break;
        case LED_GREEN:
            LED_GREEN_LAT = LED_OFF;
        case LED_BLUE:
            LED_BLUE_LAT = LED_OFF;
            break;
    }
}