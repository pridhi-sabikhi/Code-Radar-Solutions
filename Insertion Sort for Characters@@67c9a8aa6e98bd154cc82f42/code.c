#include <stdio.h>

// Function to perform insertion sort on an array of characters
void insertionSort(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i]; // The character to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert the key at the correct position
    }
}

// Function to print the array of characters
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
       
        printf("%c ", arr[i]);
    }
    printf("\n"); // Print newline at the end
}
