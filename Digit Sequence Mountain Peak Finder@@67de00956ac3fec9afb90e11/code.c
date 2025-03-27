#include <stdio.h>
#include <string.h>

// int mountainPeak(int N) {
//     char str[12]; // Enough to hold up to 10 digits + null terminator
//     sprintf(str, "%d", N); // Convert integer to string

//     int length = strlen(str);
    
//     // Check if the number has at least 3 digits
//     if (length < 3 || length%2==0) {
//         return -1;
//     }
 
//     int i = 0;

//     Ascending part
//     while (i < length - 1 && str[i] < str[i + 1]) {
//         i++;
//     }

//     // Check if we have a peak
//     if (i == 0 || i == length - 1) {
//         return -1; // No peak or peak at the ends
//     }

//     // Descending part
//     while (i < length - 1 && str[i] > str[i + 1]) {
//         i++;
//     }

//     // If we reached the end, we have a valid mountain
//     if (i == length - 1) {
//         return str[i - 1] - '0'; // Return the peak digit as an integer
//     }

int mountainPeak(int N) {
    // Convert the number to an array of digits
    int digits[10]; // Assuming N has at most 10 digits
    int length = 0;

    // Extract digits
    while (N > 0) {
        digits[length++] = N % 10; // Get the last digit
        N /= 10; // Remove the last digit
    }

    // Reverse the digits to get the correct order
    for (int i = 0; i < length / 2; i++) {
        int temp = digits[i];
        digits[i] = digits[length - 1 - i];
        digits[length - 1 - i] = temp;
    }

    // Check for mountain pattern
    int i = 0;

    // Ascending part
    while (i < length - 1 && digits[i] < digits[i + 1]) {
        i++;
    }

    // Check if we have a peak
    if (i == 0 || i == length - 1) {
        return -1; // No peak or peak at the ends
    }

    // Descending part
    while (i < length - 1 && digits[i] > digits[i + 1]) {
        i++;
    }

    // If we reached the end, we have a valid mountain
    if (i == length - 1) {
        return digits[i - 1]; // Return the peak digit
    }

    return -1; // Not a mountain
}


    return -1; // Not a mountain
}
