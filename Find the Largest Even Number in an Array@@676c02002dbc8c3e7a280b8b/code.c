#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[N]; // Assuming the maximum size of the array is 100
    int maxi = INT_MIN; // Initialize to the smallest integer value

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the largest even number
    for (int i = 0; i < N; i++) {
        if (nums[i] % 2 == 0)
         { 
            if (nums[i] > maxi) {
                maxi = nums[i]; 
            }
        }
    }

    // Output the result
    if (maxi == INT_MIN) {
        printf("-1\n"); // No even number found
    } else {
        printf("%d\n", maxi); // Print the largest even number
    }

    return 0;
}