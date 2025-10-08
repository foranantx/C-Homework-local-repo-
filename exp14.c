#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // assume the number is prime

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to n/2
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // number is divisible by i, so not prime
                break;       // no need to check further
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
