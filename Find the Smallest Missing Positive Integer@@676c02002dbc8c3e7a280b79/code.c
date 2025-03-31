#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[N]; // Assuming the maximum size of the array is 100000

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    //Rearranging the array
    for (int i = 0; i < N; i++) {
        while (nums[i] > 0 && nums[i] <= N && nums[nums[i] - 1] != nums[i]) {
            // Swap nums[i] with nums[nums[i] - 1] no. ko ussno. ke index-1 pr daalo eg: put 2 at 1 index
            int temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;
        }
    }

    // Finding the smallest missing positive integer
    for (int i = 0; i < N; i++) {
        if (nums[i] != i + 1) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    // If all numbers from 1 to N are present
    printf("%d\n", N + 1);
    return 0;
}