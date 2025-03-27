#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting pairs
int compare(const void *a, const void *b) {
    int *pairA = (int *)a;
    int *pairB = (int *)b;

    if (pairA[0] != pairB[0]) {
        return pairA[0] - pairB[0]; // Sort by first element
    }
    return pairA[1] - pairB[1]; // Sort by second element
}

int main() {
    int N, T;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &T);

    // To store the pairs
    int foundPairs[N][2]; // Assuming at most N pairs
    int pairCount = 0;

    // To keep track of seen numbers
    int seen[2001] = {0}; // Assuming numbers are in the range -1000 to 1000

    for (int i = 0; i < N; i++) {
        int complement = T - arr[i];

        // Check if the complement has been seen
        if (complement >= -1000 && complement <= 1000 && seen[complement + 1000] > 0) {
            // Store the pair in ascending order
            if (arr[i] < complement) {
                foundPairs[pairCount][0] = arr[i];
                foundPairs[pairCount][1] = complement;
            } else {
                foundPairs[pairCount][0] = complement;
                foundPairs[pairCount][1] = arr[i];
            }
            pairCount++;
        }

        // Mark the current number as seen
        if (arr[i] >= -1000 && arr[i] <= 1000) {
            seen[arr[i] + 1000]++; // Offset by 1000 to handle negative indices
        }
    }

    // Sort the pairs
    qsort(foundPairs, pairCount, sizeof(foundPairs[0]), compare);

    // Output the pairs
    for (int i = 0; i < pairCount; i++) {
        printf("%d %d\n", foundPairs[i][0], foundPairs[i][1]);
    }

    return 0;
}