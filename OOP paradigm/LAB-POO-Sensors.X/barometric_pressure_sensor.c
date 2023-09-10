#include "barometric_pressure_sensor.h"
#include <stdio.h>

static void init_barometric_pressure_sensor(void* p_sensor, uint8_t *name,uint8_t id);
static void set_name_barometric_pressure_sensor(void *p_sensor, uint8_t *name);
static uint8_t* get_barometric_pressure_sensor_name(void* p_sensor);
static void set_id_barometric_pressure_sensor(void *p_sensor, uint8_t id);
static uint8_t get_id_barometric_pressure_sensor(void *p_sensor);
static uint16_t* read_barometric_pressure_sensor(barometric_pressure_sensor_t p_sensor, uint8_t id);

barometric_pressure_sensor_t* new_barometric_pressure_sensor(barometric_pressure_sensor_t* p_sensor){
    p_sensor->sensor.init = init_barometric_pressure_sensor;
    p_sensor->sensor.set_name = set_name_barometric_pressure_sensor;
    p_sensor->sensor.get_name = get_barometric_pressure_sensor_name;
    p_sensor->sensor.set_id = set_id_barometric_pressure_sensor;
    p_sensor->sensor.get_id = get_id_barometric_pressure_sensor;
    p_sensor->sensor.read = read_barometric_pressure_sensor;

    return p_sensor;
}

static void init_barometric_pressure_sensor(void* p_sensor, uint8_t *name,uint8_t id){
    set_name_barometric_pressure_sensor(p_sensor,name);
    set_id_barometric_pressure_sensor(p_sensor,id);
    printf("Inicializando el sensor de presion %s con ID: %d\n",get_barometric_pressure_sensor_name(p_sensor),get_id_barometric_pressure_sensor(p_sensor));
}

static void set_name_barometric_pressure_sensor(void *p_sensor, uint8_t *name){
    barometric_pressure_sensor_t *p_barometric_pressure_sensor = (barometric_pressure_sensor_t*)p_sensor;
    p_barometric_pressure_sensor->sensor.name = name;
}

static uint8_t* get_barometric_pressure_sensor_name(void* p_sensor){
    barometric_pressure_sensor_t *p_barometric_pressure_sensor = (barometric_pressure_sensor_t*)p_sensor;
    return p_barometric_pressure_sensor->sensor.name;
}

static void set_id_barometric_pressure_sensor(void *p_sensor, uint8_t id){
    barometric_pressure_sensor_t *p_barometric_pressure_sensor;

    p_barometric_pressure_sensor = (barometric_pressure_sensor_t*)p_sensor;

    p_barometric_pressure_sensor->sensor.id = id;
}

static uint8_t get_id_barometric_pressure_sensor(void *p_sensor){
    barometric_pressure_sensor_t *p_barometric_pressure_sensor;
    p_barometric_pressure_sensor = (barometric_pressure_sensor_t*)p_sensor;
    return p_barometric_pressure_sensor->sensor.id;
}

static uint16_t *read_barometric_pressure_sensor(barometric_pressure_sensor_t p_sensor, uint8_t id){
    return 0;
}