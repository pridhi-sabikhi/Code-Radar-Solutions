#include <stdio.h>
int main() {
    int num, n;

    // Input: the number and the bit position
    scanf("%d %d", &num, &n);

    // Set the nth bit to 1 using bitwise OR
    num = num | (1 << n);

    // Output the modified number
    printf("%d\n", n, num);

    return 0;
}

