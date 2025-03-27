#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[100]; // Assuming the maximum size of the array is 100
    int largestEven = -1; // Initialize to -1 to indicate no even number found

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the largest even number
    for (int i = 0; i < N; i++) {
        if (nums[i] % 2 == 0) { // Check if the number is even
            if (nums[i] > largestEven) {
                largestEven = nums[i]; // Update largest even number
            }
        }
    }

    // Output the result
    printf("%d\n", largestEven);
    return 0;
}