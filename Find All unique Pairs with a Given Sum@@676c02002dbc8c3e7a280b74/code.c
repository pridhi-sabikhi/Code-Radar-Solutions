#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    int found = 0; // Flag to check if at least one pair is found
    int first=INT_MIN , second=INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        int printed = 0; // Flag to check if the pair (arr[i], arr[j]) has been printed
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target && first!=arr[i] && first!=arr[j] &&second!=arr[i] &&second!=arr[j])
             {
                //if (!printed) {  // Print only once for the same number
                first=arr[i];
                second=arr[j];
                    printf("%d %d\n", first, second);
                    //printed = 1; // Set flag to avoid repeating this pair
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