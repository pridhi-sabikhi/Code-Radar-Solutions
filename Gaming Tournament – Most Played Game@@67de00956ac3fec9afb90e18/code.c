#include <stdio.h>
#include <limits.h>

int mostPlayedGame(int games[], int n) {
    int frequency[1001] = {0}; // Assuming game IDs are in the range 0 to 1000
    int maxFrequency = 0;
    int mostFrequentGameID = INT_MAX; // Initialize to maximum integer value

    // Count the frequency of each game ID
    for (int i = 0; i < n; i++) {
        frequency[games[i]]++;
    }

    // Find the game ID with the maximum frequency
    for (int i = 0; i < 1001; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequentGameID = i; // Update the most frequent game ID
        } else if (frequency[i] == maxFrequency && frequency[i] > 0) {
            // If there's a tie, choose the smaller game ID
            if (i < mostFrequentGameID) {
                mostFrequentGameID = i;
            }
        }
    }

    return mostFrequentGameID; // Return the most frequently played game ID
}