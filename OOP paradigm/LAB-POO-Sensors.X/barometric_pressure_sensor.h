#ifndef BAROMETRIC_PRESSURE_SENSOR_H
#define BAROMETRIC_PRESSURE_SENSOR_H

#include "sensor.h"

typedef struct barometric_pressure_sensor barometric_pressure_sensor_t;
typedef struct barometric_pressure_sensor barometric_pressure_sensor_public;


struct barometric_pressure_sensor
{
    sensor_t sensor;
    float temperature;
    uint16_t pressure;
    float altitude;
    uint16_t sea_level_pressure;

    // Pointer to a function that:
    // - Accepts a pointer to `barometric_pressure_sensor_t` and a `uint8_t` as parameters.
    // - Returns a pointer to a `uint16_t`.
    uint16_t * (*read_pressure)(barometric_pressure_sensor_t* p_sensor, uint8_t id);
    uint16_t * (*read_temperature)(barometric_pressure_sensor_t* p_sensor, uint8_t id);
    uint16_t * (*read_level_pressure)(barometric_pressure_sensor_t* p_sensor, uint8_t id);

};


#endif