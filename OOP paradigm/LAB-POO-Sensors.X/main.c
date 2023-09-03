#include <stdio.h>
#include "temp_sensor.h"

int main(void) {
    
    temp_sensor_t temp_sensor_emc1001;
    temp_sensor_t *p_temp_sensor_emc1001 = new_temp_sensor(&temp_sensor_emc1001);
    p_temp_sensor_emc1001->sensor.init(p_temp_sensor_emc1001,"EMC1001",10);

    p_temp_sensor_emc1001->sensor.set_name(p_temp_sensor_emc1001,"HELLO");
    printf("The new name is %s\n",p_temp_sensor_emc1001->sensor.get_name(p_temp_sensor_emc1001));
    return 0;
}