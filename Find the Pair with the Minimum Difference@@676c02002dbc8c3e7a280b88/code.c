//do like this bcz in last case jb no.s are 6 8 1 3 5 6 tb ans comes out 4 6 but it is 1 3 so sort
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    // if (N < 2) {
    //     printf("-1\n");
    //     return 0;
    // }

    int nums[N]; // Assuming the maximum size of the array is 100

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Sort the array
    qsort(nums, N, sizeof(int), compare);

    int minDiff = INT_MAX; // Initialize to maximum integer value
    int first, second; // To store the pair with the smallest difference

    // Find the pair with the smallest difference
    for (int i = 0; i < N-1; i++) {
        int diff = nums[i+1] - nums[i];
        //no 
        if (diff < minDiff) {
            minDiff = diff;
            first = nums[i];
            second = nums[i+1];
        }
    }

    // Output the result
    printf("%d %d\n", first, second);
    return 0;
}