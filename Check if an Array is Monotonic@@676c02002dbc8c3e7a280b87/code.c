#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N == 0) {
        printf("YES\n"); // An empty array can be considered monotonic
        return 0;
    }

    int nums[100]; // Assuming the maximum size of the array is 100

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Flags to check if the array is non-decreasing or non-increasing
    int isNonDecreasing = 1;
    int isNonIncreasing = 1;

    // Check the properties of the array
    for (int i = 1; i < N; i++) {
        if (nums[i] < nums[i - 1]) {
            isNonDecreasing = 0; // Found a decrease
        }
        if (nums[i] > nums[i - 1]) {
            isNonIncreasing = 0; // Found an increase
        }
    }

    // If either property holds, the array is monotonic
    if (isNonDecreasing || isNonIncreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}