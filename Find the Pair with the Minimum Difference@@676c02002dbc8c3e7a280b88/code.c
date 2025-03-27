#include <stdio.h>
 #include <stdlib.h>
#include<limits.h>
// int compare(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }

int main() {
    int N, first, second;
    int min=INT_MAX;
    scanf("%d", &N);
    
    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int nums[N]; // Assuming the maximum size of the array is 100

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            int diff=nums[i]-nums[j];
            if(abs(diff)<min)
            {
                min=diff;
                first=nums[i];
                second=nums[j];

            }

        }
    }
    // Sort the array
    // qsort(nums, N, sizeof(int), compare);

    // int minDiff = __INT_MAX__; // Initialize to maximum integer value
    // int first = -1, second = -1; // To store the pair with the smallest difference

    // // Find the pair with the smallest difference
    // for (int i = 1; i < N; i++) {
    //     int diff = nums[i] - nums[i - 1];
    //     if (diff < minDiff) {
    //         minDiff = diff;
    //         first = nums[i - 1];
    //         second = nums[i];
    //     }
    // }

    // Output the result
    if(first<second)
    printf("%d %d\n", first, second);
    else
    printf("%d %d\n", second, first);
    return 0;
}