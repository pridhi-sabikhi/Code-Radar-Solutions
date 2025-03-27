#include <stdio.h>
int compare(void const *a, void const *b)
{
    return (*(int *)a- *(int *)b);
}
int main() {
    int N;
    scanf("%d", &N);
    
    int nums[N]; // Assuming the maximum size of the array is 100000

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Rearranging the array
    // for (int i = 0; i < N; i++) {
    //     while (nums[i] > 0 && nums[i] <= N && nums[nums[i] - 1] != nums[i]) {
    //         // Swap nums[i] with nums[nums[i] - 1]
    //         int temp = nums[i];
    //         nums[i] = nums[temp - 1];
    //         nums[temp - 1] = temp;
    //     }
    // }
    qsort(nums, N, sizeof(int), compare);

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