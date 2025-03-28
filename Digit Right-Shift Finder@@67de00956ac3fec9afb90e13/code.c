#include <stdio.h>
#include <string.h>

int digitRightShift(int N) {
    // Convert the integer to a string
    char str[12]; // Enough to hold up to 10 digits + null terminator
    sprintf(str, "%d", N);
    
    int len = strlen(str);
    
    // If the number has only one digit, return it as is
    if (len == 1) {
        return N;
    }
    
    // Create a new string for the shifted result
    char shiftedStr[12];
    
    // Perform the right shift
    shiftedStr[0] = str[len - 1]; // Last digit goes to the front
    for (int i = 1; i < len; i++) {
        shiftedStr[i] = str[i - 1]; // Shift other digits to the right
    }
    shiftedStr[len] = '\0'; // Null-terminate the new string
    
    // Convert the shifted string back to an integer
    int shiftedNumber = atoi(shiftedStr);
    
    // If the shifted number is the same as the original, return the original
    if (shiftedNumber == N) {
        return N;
    }
    
    return shiftedNumber;
}