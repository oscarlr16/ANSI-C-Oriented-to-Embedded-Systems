#include "temp_sensor.h"
#include <stdio.h>

//Function prototypes
static void init_temp_sensor(void* p_sensor, uint8_t *name,uint8_t id);
static void set_name_temp_sensor(void *p_sensor, uint8_t *name);

//Funcion costructora
temp_sensor_t* new_temp_sensor(temp_sensor_t *p_sensor){
    //Method mapping
    p_sensor->sensor.init = init_temp_sensor;
    
}

//Es static por que solo le va a pertenecer a temp_sensor.c
//Ya se utilizara con un puntero
static void init_temp_sensor(void* p_sensor, uint8_t *name,uint8_t id){
    //Inicializa el setup necesario para el sensor de temperatura
}

static void set_name_temp_sensor(void *p_sensor, uint8_t *name){
    /*p_sensor es generico, a nivel memoria tiene las caracteristicas de 
    una estructura, pero a nivel tipo, es generico. Por eso es necesario
     hacer casting (temp_sensor_t*) */
    temp_sensor_t *p_temp_sensor = (temp_sensor_t*)p_sensor;
    p_temp_sensor->sensor.name = name;
}