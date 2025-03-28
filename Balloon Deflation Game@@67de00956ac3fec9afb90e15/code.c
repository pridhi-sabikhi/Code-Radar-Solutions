#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void deflateBalloons(int air[], int n) {
    // Step 1: Sort the array
    qsort(air, n, sizeof(int), compare);

    int remainingBalloons = n; // Initially, all balloons are present

    // Step 2: Process sorted air levels
    for (int i = 0; i < n; i++) {
        // Ignore duplicates (process only when we encounter a new air level)
        if (i == 0 || air[i] != air[i - 1]) {
            if (air[i] > 0) {  // Only consider positive air values
                printf("%d\n", remainingBalloons);
            }
        }
        remainingBalloons--; // One less balloon to process
    }
}


