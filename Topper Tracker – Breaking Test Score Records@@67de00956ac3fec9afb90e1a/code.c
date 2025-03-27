#include <stdio.h>

void trackScores(int scores[], int n, int result[]) {
    if (n == 0) return; // No scores to process

    // Initialize highest and lowest scores
    int highest = scores[0];
    int lowest = scores[0];
    result[0] = 0; // Count of highest score breaks
    result[1] = 0; // Count of lowest score breaks

    // Iterate through the scores starting from the second score
    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            result[0]++; // Increment highest score break count
        } else if (scores[i] < lowest) {
            lowest = scores[i];
            result[1]++; // Increment lowest score break count
        }
    }
}


