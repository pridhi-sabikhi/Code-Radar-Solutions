int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget) {
    int maxSpend = -1; // Initialize to -1 to indicate no valid combination found

    // Check each combination of keyboard and headset prices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int total = keyboards[i] + headsets[j]; // Calculate total price
            if (total <= budget && total > maxSpend) {
                maxSpend = total; // Update maxSpend if this combination is valid
            }
        }
    }

    return maxSpend; // Return the maximum spendable amount or -1 if no valid combo
}