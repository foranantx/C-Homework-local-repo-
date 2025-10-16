#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    int temp;

    while (start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    displayArray(arr, n);

    // Call the function to reverse the array
    reverseArray(arr, n);

    printf("Reversed array: ");
    displayArray(arr, n);

    return 0;
}
