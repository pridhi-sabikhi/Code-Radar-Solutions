#include <stdio.h>
#include <limits.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int minAir = INT_MAX;
        int count = 0;

        // **Count total balloons regardless of their air level**
        count = n;

        // Find the minimum nonzero air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < minAir) {
                minAir = air[i];
            }
        }

        // **Print count at start of iteration**
        printf("%d\n", count);

        // Deflate balloons
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }

        // **If all balloons are now zero, exit**
        int allZero = 1;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                allZero = 0;
                break;
            }
        }
        if (allZero) {
            break;
        }
    }
}
