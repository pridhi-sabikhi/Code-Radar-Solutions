#include <stdio.h>
#include <limits.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int minAir = INT_MAX;
        int count = 0;

        // Find the minimum air level among nonzero balloons
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

        // Print the count of balloons that still have air
        printf("%d\n", count);

        // Deflate the balloons by the minimum air level found
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }
    }
}


