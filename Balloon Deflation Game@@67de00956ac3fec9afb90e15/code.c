#include <stdio.h>
#include <limits.h>

// Function to find the next minimum positive air level
int findNextMin(int air[], int n, int prevMin) {
    int minAir = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (air[i] > prevMin && air[i] < minAir) {
            minAir = air[i];
        }
    }
    return (minAir == INT_MAX) ? -1 : minAir;
}

void deflateBalloons(int air[], int n) {
    int remaining = n;
    int prevMin = 0;  // Start from zero

    while (1) {
        int minAir = findNextMin(air, n, prevMin);  // Get the next smallest positive air level

        if (minAir == -1) {  // No more air levels to process
            break;
        }

        printf("%d\n", remaining);  // Print the number of balloons left
        
        prevMin = minAir;  // Update the previous minimum value

        // Reduce the count of remaining balloons
        for (int i = 0; i < n; i++) {
            if (air[i] >= minAir) {
                air[i] -= minAir;  
            }
        }
        remaining--;  // One unique air level is removed
    }
}
