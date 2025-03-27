#include <stdio.h>
#include <string.h>

// Function to perform selection sort on an array of strings
void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assume the minimum is the first element of the unsorted part
        int minIndex = i;
        
        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIndex]);
            strcpy(arr[minIndex], temp);
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}