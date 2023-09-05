#include <stdio.h>
#include "temp_sensor.h"

int main(void) {
    
    // Declare a variable of type temp_sensor_t to represent the EMC1001 temperature sensor
    temp_sensor_const_t temp_sensor_emc1001;
    temp_sensor_const_t temp_sensor_ds1624;
    temp_sensor_const_t temp_sensor_mcp9808;
    
    // Initialize the EMC1001 temperature sensor and get a pointer to it.
    // The new_temp_sensor() function is expected to initialize the sensor structure
    // and return a pointer to the initialized sensor.
    temp_sensor_const_t *p_temp_sensor_emc1001 = new_temp_sensor(&temp_sensor_emc1001);
    temp_sensor_const_t *p_temp_sensor_ds1624 = new_temp_sensor(&temp_sensor_ds1624);
    temp_sensor_const_t *p_temp_sensor_mcp9808 = new_temp_sensor(&temp_sensor_mcp9808);
    
    // Using the pointer to the initialized sensor, set its name to "EMC1001" and its ID to 10.
    // The 'init' function pointer inside the 'sensor' struct is used to perform this initialization.
    p_temp_sensor_emc1001->sensor.init(p_temp_sensor_emc1001, "EMC1001", EMC1001_SENSOR_ID);
    p_temp_sensor_ds1624->sensor.init(p_temp_sensor_ds1624, "DS1624", DS1624_SENSOR_ID);
    p_temp_sensor_mcp9808->sensor.init(p_temp_sensor_mcp9808, "MCP9808", MCP9808_SENSOR_ID);
    
    printf("Sensor %s | Temperature: %u\n",p_temp_sensor_emc1001->sensor.get_name(p_temp_sensor_emc1001),p_temp_sensor_emc1001->sensor.read(p_temp_sensor_emc1001,EMC1001_SENSOR_ID));
    printf("Sensor %s | Temperature: %u\n",p_temp_sensor_ds1624->sensor.get_name(p_temp_sensor_ds1624),p_temp_sensor_ds1624->sensor.read(p_temp_sensor_ds1624,DS1624_SENSOR_ID));
    printf("Sensor %s | Temperature: %u\n",p_temp_sensor_mcp9808->sensor.get_name(p_temp_sensor_mcp9808),p_temp_sensor_mcp9808->sensor.read(p_temp_sensor_mcp9808,MCP9808_SENSOR_ID));

    //  p_temp_sensor_emc1001->sensor.id = 100; You cannot do this because the 'id' field is private
    p_temp_sensor_emc1001->sensor.set_id( p_temp_sensor_emc1001,100);
    return 0;
}