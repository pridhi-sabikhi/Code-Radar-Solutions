//take only unsigned bcz with signed we have to take for -ve no.s also which are not in any of the test case
#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;

    // Get input from the user
    scanf("%u", &number);

    // Count the number of trailing zeroes
    while ((number & 1) == 0 && number != 0) {
        count++;  // Increment count for each trailing zero
        number >>= 1;  // Right shift the number to check the next bit
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}
