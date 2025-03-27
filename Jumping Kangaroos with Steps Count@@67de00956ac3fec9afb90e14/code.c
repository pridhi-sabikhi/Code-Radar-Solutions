#include <stdio.h>

int kangaroo(int x1, int v1, int x2, int v2) {
    // If both kangaroos have the same jump distance
    if (v1 == v2) {
        // If they start at the same position
        if (x1 == x2) {
            return 0; // They meet at the start
        } else {
            return -1; // They will never meet
        }
    }

    // Calculate the difference in positions and velocities
    int positionDifference = x2 - x1;
    int velocityDifference = v1 - v2;

    // Check if they will meet
    if ((positionDifference % velocityDifference == 0) && (positionDifference / velocityDifference >= 0)) {
        return positionDifference / velocityDifference; // Return the number of jumps
    } else {
        return -1; // They will never meet
    }
}
