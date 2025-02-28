#include <stdio.h>
#include <stdlib.h>  // For malloc and free

void findSmallestMissingPositive(int arr[], int n) {
    // Rearrange the elements so that each element `x` is placed at index `x-1`
    for (int i = 0; i < n; i++) {
        // Continue to swap until arr[i] is in the correct position or out of bounds
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            // Swap arr[i] and arr[arr[i] - 1]
            int temp = arr[i];
            arr[i] = arr[arr[i] - 1];
            arr[arr[i] - 1] = temp;
        }
    }

    // Now find the first missing positive number
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            printf("%d\n", i + 1);  // i+1 is the missing positive integer
            return;
        }
    }

    // If no missing number, then the missing number is n+1
    printf("%d\n", n + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Input the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the smallest missing positive integer
    findSmallestMissingPositive(arr, n);

    // Free
