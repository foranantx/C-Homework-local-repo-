#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // use long long for larger numbers

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while (i <= n) {
            factorial *= i; // multiply factorial by i
            i++;            // increment i
        }

        // Display the result
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
