#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[100]; // Assuming the maximum size of the array is 100
    int runningSum[100]; // Array to store the running sum

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    int sum=0;
    // Calculate the running sum
    //runningSum[0] = nums[0]; // The first element is the same
    for (int i = 1; i < N; i++) {
        sum=sum+nums[i];
        runningSum[i]=sum;
        //runningSum[i] = runningSum[i - 1] + nums[i]; // Add the current element to the previous running sum
    }

    // Output the running sum array
    for (int i = 0; i < N; i++) {
        printf("%d", runningSum[i]);
        if (i < N - 1) {
            printf(" "); // Print space between numbers
        }
    }
    printf("\n"); // New line at the end

    return 0;
}