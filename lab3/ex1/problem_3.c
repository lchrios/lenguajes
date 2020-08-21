#define voltage 220
#define current 10
#include <stdio.h>

int main ()
{
    float resistor;
    resistor = voltage / current;
    printf("R = %6.2f \n", resistor);
}