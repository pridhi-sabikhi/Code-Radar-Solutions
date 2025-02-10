#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number == 0) {
        printf("The number has no set bits.\n");
    } else {
        int position = 1; // Start at position 1
        while ((number & 1) == 0) {
            number = number >> 1; // Shift right until we find the set bit
            position++;
        }

        printf("%d", position);
    }

    return 0;
}
