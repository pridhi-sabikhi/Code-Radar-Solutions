#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;

    // Get input from the user
    scanf("%u", &number);

    // Count the number of trailing zeroes using a for loop
    for (int i = 0; i < 32; i++) { // Loop through all 32 bits
        if ((number & 1) == 0) { // Check if the least significant bit is 0
            count++;  // Increment count for each trailing zero
            number >>= 1;  // Right shift the number to check the next bit
        } else {
            break; // Stop when the first 1 is encountered
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}