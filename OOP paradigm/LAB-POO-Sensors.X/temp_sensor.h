#ifndef TEMP_SENSOR_H
#define	TEMP_SENSOR_H

#include "sensor.h"

typedef struct temperature_sensor temp_sensor_t;

struct temperature_sensor{
    sensor_t sensor;
    uint8_t range;
    void (*display_temp)(temp_sensor_t *p_sensor);
    
};

//Public prototype function
temp_sensor_t* new_temp_sensor(temp_sensor_t *p_sensor);
#endif	/* TEMP_SENSOR_H */

