#include <stdio.h>

int main() {
    int n, count = 0;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    // Count the digits
    if (n == 0) {
        count = 1; // 0 has 1 digit
    } else {
        while (n != 0) {
            n = n / 10; // remove the last digit
            count++;
        }
    }

    // Display the result
    printf("The number has %d digits.\n", count);

    return 0;
}
