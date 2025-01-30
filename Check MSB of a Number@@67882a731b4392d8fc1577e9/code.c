//optimised sol but not efficient
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    //check MSB assuming 32 bit int
    if(num & (1<<31)) // to make efficient write if (num & 0x80000000)
    printf("Set\n");
    else
    printf("Not Set\n");
    return 0;
}