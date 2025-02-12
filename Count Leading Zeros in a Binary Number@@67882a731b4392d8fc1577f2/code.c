#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;
    scanf("%u", &number);

    // Count leading zeroes by checking each bit from the most significant bit
    for (int i = 31; i >= 0; i--) { //starting from leftmost till rightmost
        if ((number & (1U << i)) == 0) {   //1U << i se only ith bit is set 1 then num ke & krke check if i th bit is 0 or 1 
            count++;  // Increment count for each leading zero
        } else {
            break;  // Stop when the first 1 is encountered
        }
    }
    printf("%d\n", count);

    return 0;
}
