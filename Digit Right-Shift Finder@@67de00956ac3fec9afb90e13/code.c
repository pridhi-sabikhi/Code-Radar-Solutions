#include <stdio.h>

int digitRightShift(int N) {
    // If N is a single digit, return it as is
    if (N < 10) {
        return N;
    }

    int lastDigit = N % 10; // Get the last digit
    int shiftedNumber = N / 10; // Remove the last digit

    // Find the number of digits in the original number
    int numDigits = 0;
    int temp = N;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    // Reconstruct the new number
    shiftedNumber = lastDigit * 1; // Place the last digit at the front
    for (int i = 1; i < numDigits; i++) {
        shiftedNumber *= 10; // Shift left by one digit
    }
    shiftedNumber += N / 10; // Add the rest of the number

    return shiftedNumber;
}
