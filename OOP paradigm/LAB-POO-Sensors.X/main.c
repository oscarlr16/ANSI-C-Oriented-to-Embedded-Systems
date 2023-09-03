#include <stdio.h>
#include "temp_sensor.h"

int main(void) {
    
    // Declare a variable of type temp_sensor_t to represent the EMC1001 temperature sensor
    temp_sensor_t temp_sensor_emc1001;
    
    // Initialize the EMC1001 temperature sensor and get a pointer to it.
    // The new_temp_sensor() function is expected to initialize the sensor structure
    // and return a pointer to the initialized sensor.
    temp_sensor_t *p_temp_sensor_emc1001 = new_temp_sensor(&temp_sensor_emc1001);
    
    // Using the pointer to the initialized sensor, set its name to "EMC1001" and its ID to 10.
    // The 'init' function pointer inside the 'sensor' struct is used to perform this initialization.
    p_temp_sensor_emc1001->sensor.init(p_temp_sensor_emc1001, "EMC1001", EMC1001_SENSOR_ID);
    
    return 0;
}