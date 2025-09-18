#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using bitwise AND and ternary operator
    (num & 1) ? printf("Odd\n") : printf("Even\n");

    return 0;
}
