#include <stdio.h>

int main() {
    int x;

    // Input initial value
    printf("Enter an integer: ");
    scanf("%d", &x);

    // Demonstrate post-increment (x++)
    printf("\n--- Post-increment (x++) ---\n");
    printf("Before post-increment: %d\n", x);
    printf("Value used in expression: %d\n", x++);
    printf("After post-increment: %d\n", x);

    // Reset value for clarity
    printf("\nEnter another integer: ");
    scanf("%d", &x);

    // Demonstrate pre-increment (++x)
    printf("\n--- Pre-increment (++x) ---\n");
    printf("Before pre-increment: %d\n", x);
    printf("Value used in expression: %d\n", ++x);
    printf("After pre-increment: %d\n", x);

    return 0;
}
