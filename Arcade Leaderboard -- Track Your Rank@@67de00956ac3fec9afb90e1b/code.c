#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Create an array to hold the dense ranks
    int denseRanks[200000];
    int rankIndex = 0;

    // Create dense ranks from the leaderboard scores
    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            denseRanks[rankIndex++] = ranked[i];
        }
    }

    // Now, we have the unique scores in denseRanks
    // We will find the rank for each player's score
    int currentRank = rankIndex; // Start from the last rank
    for (int i = 0; i < m; i++) {
        // While the player's score is greater than or equal to the current ranked score
        while (currentRank > 0 && player[i] >= denseRanks[currentRank - 1]) {
            currentRank--; // Move up the rank
        }
        // The rank is currentRank + 1 because ranks are 1-based
        result[i] = currentRank + 1;
    }
}
