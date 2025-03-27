#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (N == 0) {
        printf("0\n");
        return 0;
    }

    int nums[100000]; // Assuming the maximum size of the array is 100000
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    // Sort the array
    qsort(nums, N, sizeof(int), compare);

    int longestStreak = 1;
    int currentStreak = 1;

    for (int i = 1; i < N; i++) {
        if (nums[i] == nums[i - 1]) {
            // Skip duplicates
            continue;
        } else if (nums[i] == nums[i - 1] + 1) {
            // Consecutive numbers
            currentStreak++;
        } else {
            // Reset the streak
            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
            currentStreak = 1; // Reset for the new sequence
        }
    }

    // Final check to update longestStreak
    if (currentStreak > longestStreak) {
        longestStreak = currentStreak;
    }

    printf("%d\n", longestStreak);
    return 0;
}