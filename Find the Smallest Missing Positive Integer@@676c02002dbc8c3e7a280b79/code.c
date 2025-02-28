#include <stdio.h>

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

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSmallestMissingPositive(arr, n);
    
    return 0;
}
