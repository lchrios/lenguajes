#define voltage 5
#include <stdio.h>

float resistor_fun(float i) {
    
    float b;
    b = voltage/i;
    return b;

}

int main() {

    float resistor, current;

    printf("Enter the current value: ");
    scanf("%f", &current);

    resistor = resistor_fun(current);

    printf("The required resistor would be: ");
    printf("%1.0f Ohms.\n", resistor);

}