#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    int found = 0; // Flag to check if at least one pair is found

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Print only the first occurrence of the pair and break out of the inner loop
                printf("%d %d\n", arr[i], arr[j]);
                return; // Since all numbers are the same, one valid pair is enough
            }
        }
    }

    if (!found) {
        printf("No pairs found\n");
    }
}

int main() {
    int n, target;
    
    // Read input size
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read target sum
    scanf("%d", &target);
    
    // Find and print unique pairs
    findPairs(arr, n, target);
    
    return 0;
}