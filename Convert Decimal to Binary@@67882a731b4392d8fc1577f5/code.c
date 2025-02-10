//for big no.s(1024) int wont work so take long int
#include <stdio.h>

int main() {
    long int num, s = 0, r = 0;
    long int place = 1; // Variable to track the place value for binary digits (1, 10, 100, ...)
    scanf("%ld", &num);

    while (num > 0) {
        r = num % 2;                  // Get the remainder (0 or 1)
        s = s + (r * place);          // Add the binary digit to the correct place value
        num = num / 2;                // Divide the number by 2
        place = place * 10;           // Shift the place value left (1, 10, 100, ...)
    }

    // Print the binary number
    printf("%ld\n", s);

    return 0;
}
//using bitwise op//check its wrong
// #include <stdio.h>

// int main() {
//     int num, n;

//     // Input: the number and the bit position
//     scanf("%d", &num);

//     // Print the binary representation
    
//     // Iterate through all bits (assuming 32-bit integer)
//     for (int i = 31; i >= 0; i--) {
//         // Use bitwise AND to check each bit and print it
//         int bit = (num >> i) & 1;
//         printf("%d", bit);
//     }

//     printf("\n");
    
//     return 0;
// }
