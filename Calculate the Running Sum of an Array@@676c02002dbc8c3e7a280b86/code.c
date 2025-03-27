#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[N]; // Assuming the maximum size of the array is 100
    int runningSum[N]; // Array to store the running sum

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    int sum=0;
    for (int i = 0; i < N; i++) 
    {
        sum=sum+nums[i];
        runningSum[i]=sum;
        }

    // Output the running sum array
    for (int i = 0; i < N; i++) {
        printf("%d ", runningSum[i]);
    }

    return 0;
}