#include <stdio.h>
#include <string.h>

void insertionSort(char arr[][100], int n) {
    for (int i = 1; i < n; i++) {
        char key[100];  // Temporary variable to hold the current string
        strcpy(key, arr[i]);  // Copy the current string to key
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }
        strcpy(arr[j + 1], key);  // Place the key in its correct position
    }
}
