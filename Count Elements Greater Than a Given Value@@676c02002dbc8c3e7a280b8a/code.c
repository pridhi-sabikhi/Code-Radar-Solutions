#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    int nums[100]; // Assuming the maximum size of the array is 100
    int count = 0; // Initialize count of elements greater than K

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Count elements greater than K
    for (int i = 0; i < N; i++) {
        if (nums[i] > K) {
            count++;
        }
    }

    // Output the count
    printf("%d\n", count);
    return 0;
}