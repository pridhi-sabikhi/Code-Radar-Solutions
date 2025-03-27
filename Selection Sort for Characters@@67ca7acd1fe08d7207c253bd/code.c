#include <stdio.h>

// Function to perform selection sort on an array of characters
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assume the minimum is the first element of the unsorted part
        int minIndex = i;
        
        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            char temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array of characters
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" "); // Print space before the next character
        }
        printf("%c", arr[i]);
    }
    printf("\n"); // Print newline at the end
}