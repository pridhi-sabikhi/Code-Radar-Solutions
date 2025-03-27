#include <stdio.h>

int finalEnergy(int clouds[], int n, int k) {
    int energy = 100; // Initial energy
    int position = 0; // Start at cloud 0

    // Continue jumping until we land back on cloud 0
    do {
        // Deduct energy for the jump
        energy -= 1;

        // Check if the current cloud is stormy
        if (clouds[position] == 1) {
            energy -= 2; // Additional cost for stormy cloud
        }

        // Move to the next cloud using modular arithmetic
        position = (position + k) % n;

    } while (position != 0); // Stop when we return to cloud 0

    return energy; // Return the remaining energy
}

