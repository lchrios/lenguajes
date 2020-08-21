#define voltage 5.0
#include <stdio.h>

float resistor_fun(float i) {
    
    printf("Voltage: %1.1f\nCurrent: %1.1f\n", voltage, i);
    return (float) voltage / i;

}