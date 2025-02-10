#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;

    // Get input from the user
    scanf("%u", &number);

    // Count leading zeroes by checking each bit from the most significant bit
    for (int i = 31; i >= 0; i--) {
        if ((number & (1U << i)) == 0) {
            count++;  // Increment count for each leading zero
        } else {
            break;  // Stop when the first 1 is encountered
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}
