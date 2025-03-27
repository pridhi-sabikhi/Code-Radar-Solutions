#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start checking for duplicates
    for (int i = 0; i < n; i++) {
        // Use the absolute value to find the index
        int index = abs(arr[i]) - 1; // Adjust for 0-based index

        // Check if the value at this index is negative
        if (arr[index] < 0) {
            // If it's negative, we found the duplicate
            printf("%d\n", abs(arr[i])); // Print the duplicate
            return 0; // Exit after finding the duplicate
        } else {
            // Mark the value at this index as negative
            arr[index] = -arr[index];
        }
    }

    // If no duplicate is found
    printf("-1\n");
    return 0;
}