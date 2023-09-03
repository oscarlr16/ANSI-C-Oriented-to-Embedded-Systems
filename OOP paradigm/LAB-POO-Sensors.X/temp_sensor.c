#include "temp_sensor.h"
#include <stdio.h>

//Function prototypes
static void init_temp_sensor(void* p_sensor, uint8_t *name,uint8_t id);
static void set_name_temp_sensor(void *p_sensor, uint8_t *name);
static uint8_t* get_temp_sensor_name(void* p_sensor);
static void set_id_temp_sensor(void *p_sensor, uint8_t id);
static uint8_t get_id_temp_sensor(void *p_sensor);

//Funcion costructora
temp_sensor_t* new_temp_sensor(temp_sensor_t *p_sensor){
    //Method mapping
    p_sensor->sensor.init = init_temp_sensor;
    p_sensor->sensor.set_name = set_name_temp_sensor;
    p_sensor->sensor.get_name = get_temp_sensor_name;
    p_sensor->sensor.set_id = set_id_temp_sensor;
    p_sensor->sensor.get_id = get_id_temp_sensor;
    return p_sensor;
}

//Es static por que solo le va a pertenecer a temp_sensor.c
//Ya se utilizara con un puntero
static void init_temp_sensor(void* p_sensor, uint8_t *name,uint8_t id){
    //Inicializa el setup necesario para el sensor de temperatura
    set_name_temp_sensor(p_sensor,name);
    printf("Inicializando el sensor de temperatura %s con ID: \n",get_temp_sensor_name(p_sensor));
}

static void set_name_temp_sensor(void *p_sensor, uint8_t *name){
    /*p_sensor es generico, a nivel memoria tiene las caracteristicas de 
    una estructura, pero a nivel tipo, es generico. Por eso es necesario
     hacer casting (temp_sensor_t*) */
    temp_sensor_t *p_temp_sensor = (temp_sensor_t*)p_sensor;
    p_temp_sensor->sensor.name = name;
}

static uint8_t* get_temp_sensor_name(void* p_sensor){
    temp_sensor_t *p_temp_sensor = (temp_sensor_t*)p_sensor;
    return p_temp_sensor->sensor.name;
}

// Function to set the ID for a temperature sensor
static void set_id_temp_sensor(void *p_sensor, uint8_t id){
    // Declare a pointer p_temp_sensor that can point to a struct of type temp_sensor_t
    temp_sensor_t *p_temp_sensor;

    // Cast the generic pointer p_sensor to the specific type temp_sensor_t
    // This allows us to work with the pointer as if it were pointing to a temperature structure
    // rather than a generic data type.
    p_temp_sensor = (temp_sensor_t*)p_sensor;

    // From here, p_temp_sensor can be used to access and modify the members
    // of the temperature_sensor struct, if needed.
    p_temp_sensor->sensor.id = id;
}

static uint8_t get_id_temp_sensor(void *p_sensor){
    temp_sensor_t *p_temp_sensor;
    p_temp_sensor = (temp_sensor_t*)p_sensor;
    return p_temp_sensor->sensor.id;
}