#include <stdio.h>

// Function to perform bubble sort on an array of characters
void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent characters
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array of characters
void printArray(char arr[], int n) {
   for (int i = 0; i < n; i++) {
        
        printf("%c ", arr[i]);
    }
    printf("\n"); // Print newline at the end
}