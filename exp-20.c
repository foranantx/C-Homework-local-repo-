#include <stdio.h>

// Function to calculate average of array elements
float calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;  // Typecast to float for decimal result
}

int main() {
    int n;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to compute average
    float avg = calculateAverage(arr, n);

    // Display result
    printf("\nAverage of the given numbers = %.2f\n", avg);

    return 0;
}
