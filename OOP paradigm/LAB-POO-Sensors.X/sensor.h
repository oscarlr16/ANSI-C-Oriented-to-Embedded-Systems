/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */
 
#ifndef SENSOR_H
#define	SENSOR_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>

typedef struct sensor sensor_t;

typedef union{
    struct{
        uint8_t address;
        uint8_t clk;
    }i2c;
    struct{
        uint8_t serial_port;
    }uart;
}interface_t;

//Clase abstracta sensor
struct sensor{
    uint8_t *value; //Valor de medicion
    uint8_t *name; //Cadena de texto. Unsigned char
    uint8_t id;
    interface_t interface;
    
    void (*init)(void* p_void_sensor, uint8_t *name, uint8_t id);
    void (*configure)(void* p_void_sensor, uint8_t id);
    void (*calibrate)(void* p_void_sensor, uint8_t id);
    uint8_t* (*read)(void* p_void_sensor, uint8_t id);//uint8_t* retorna un puntero a char
    void (*write)(void* p_void_sensor, uint8_t id, uint8_t *data);
    void (*set_name)(void* p_void_sensor, uint8_t *name);
    uint8_t* (*get_name)(void* p_void_sensor);
    void (*set_id)(void* p_void_sensor, uint8_t id);
    uint8_t* (*get_id)(void* p_void_sensor);
};
#endif	/* SENSOR_H */

