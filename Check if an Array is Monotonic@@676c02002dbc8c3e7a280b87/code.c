#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N == 0) {
        printf("YES\n"); // An empty array can be considered monotonic
        return 0;
    }

    int nums[N]; // Assuming the maximum size of the array is 100

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Flags to check if the array is non-decreasing or non-increasing
    int asc = 1;
    int desc = 1;

    // Check the properties of the array
    for (int i = 0; i < N-1; i++) {
        if (nums[i] > nums[i+1]) { 
            asc = 0; //prev no. big than next
        }
        if (nums[i] < nums[i + 1]) {
            desc= 0; // prev no. smaller than next
        }
    }

    // If either property holds, the array is monotonic
    if (asc || desc) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}