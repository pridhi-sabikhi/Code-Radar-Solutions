#include <stdio.h>

int main() {
    int num, s = 0, r = 0;
    int place = 1; // Variable to track the place value for binary digits (1, 10, 100, ...)
    scanf("%d", &num);

    while (num > 0) {
        r = num % 2;                  // Get the remainder (0 or 1)
        s = s + (r * place);          // Add the binary digit to the correct place value
        num = num / 2;                // Divide the number by 2
        place = place * 10;           // Shift the place value left (1, 10, 100, ...)
    }

    // Print the binary number
    printf("%d\n", s);

    return 0;
}

//did ulta bcz we print niche se uppar