#include <stdio.h>

int main() {

    float resistor, current;

    printf("Enter the current value: ");
    scanf("%f", &current);

    printf("introduced current: %2.1f\n", current);

    resistor = resistor_fun(current);

    printf("The required resistor would be: ");
    printf("%2.1f Ohms.\n", resistor);

}