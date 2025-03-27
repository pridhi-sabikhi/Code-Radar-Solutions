#include <stdio.h>

int countGlovePairs(int gloves[], int n) {
    int colorCount[101] = {0}; // Assuming color IDs are in the range 0 to 100
    int pairs = 0;

    // Count the frequency of each color ID
    for (int i = 0; i < n; i++) {
        colorCount[gloves[i]]++;
    }

    // Calculate the number of pairs for each color
    for (int i = 0; i < 101; i++) {
        pairs += colorCount[i] / 2; // Each pair consists of 2 gloves
    }

    return pairs; // Return the total number of pairs
}
