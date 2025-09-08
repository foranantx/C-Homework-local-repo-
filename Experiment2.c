#include <stdio.h>

int main() {
    // --- 1. Rectangle Area & Perimeter ---
    float length = 20.0, width = 10.0;
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    printf("---- Rectangle Calculation ----\n");
    printf("Length = %.2f, Width = %.2f\n", length, width);
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n\n", perimeter);

    // --- 2. Celsius to Fahrenheit ---
    float celsius = 20.0;
    float fahrenheit;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("---- Temperature Conversion ----\n");
    printf("Celsius = %.2f\n", celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}





