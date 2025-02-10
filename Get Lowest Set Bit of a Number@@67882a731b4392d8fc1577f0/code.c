#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number == 0) {
        printf("The number has no set bits.\n");
    } else {
        int position = 0; // Start at position 0 (0-based indexing)
        while ((number & 1) == 0) {
            number = number >> 1; // Shift right until we find the set bit
            position++;
        }

        printf("%d", position);
    }

    return 0;
}
