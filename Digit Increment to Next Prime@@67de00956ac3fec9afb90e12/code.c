#include <stdio.h>

int nextPrimeDigit(int digit) {
    // Define the next prime digits for each digit from 0 to 9
    if (digit < 2) return 2; // 0, 1 -> 2
    if (digit < 3) return 3; // 2 -> 3
    if (digit < 5) return 5; // 3, 4 -> 5
    if (digit < 7) return 7; // 5, 6 -> 7
    return 2; // 8, 9 -> wrap around to 2
}

int incrementToPrimeDigits(int N) {
    int result = 0;
    int placeValue = 1; // To keep track of the place value (units, tens, hundreds, etc.)

    while (N > 0) {
        int digit = N % 10; // Get the last digit
        int primeDigit = nextPrimeDigit(digit); // Get the next prime digit
        result =result*10+primeDigit;
        // result += primeDigit * placeValue; // Add the prime digit to the result
        // placeValue *= 10; // Move to the next place value
        N /= 10; // Remove the last digit
    }

    return result;
}
