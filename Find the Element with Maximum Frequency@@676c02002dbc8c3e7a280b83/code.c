#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[100000]; // Assuming the maximum size of the array is 100000
    int frequency[100001] = {0}; // Frequency array to count occurrences (assuming numbers are in the range [0, 100000])

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] >= 0) { // Only count non-negative integers
            frequency[nums[i]]++;
        }
    }

    int maxFrequency = 0;
    int result = INT_MAX; // Initialize to maximum possible integer

    // Find the element with the maximum frequency
    for (int i = 0; i <= 100000; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            result = i; // Update result to the current number
        } else if (frequency[i] == maxFrequency && maxFrequency > 0) {
            // If the same frequency, take the smaller number
            if(result<i)
             result = i;
            
        }
    }

    printf("%d\n", result);
    return 0;
}