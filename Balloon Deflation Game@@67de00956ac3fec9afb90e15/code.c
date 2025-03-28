#include <stdio.h>
#include<limits.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        // Find the minimum air level among the remaining balloons
        int minAir = 0 ;// Assuming air levels are <= 1000
        int count = 0;

        // Count how many balloons have air and find the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < minAir) {
                    minAir = air[i];
                }
            }
        }

        // If no balloons have air left, break the loop
        if (count == 0) {
            break;
        }

        // Print the count of balloons with air
        printf("%d\n", count);

        // Deflate the balloons by the minimum air level found
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }
    }
}

