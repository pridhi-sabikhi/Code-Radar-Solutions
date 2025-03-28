#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    int found = 0; // Flag to check if at least one pair is found
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                if(arr[i]!=arr[i-1] || arr[j]!=arr[j-1]) //to prevent duplicates 
                {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
                }
            }
        }
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