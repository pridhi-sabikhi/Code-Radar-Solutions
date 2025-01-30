//optimised sol
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    //check MSB assuming 32 bit int
    if(num & (1<<31))
    printf("Set\n");
    else
    printf("Not Set\n");
    return 0;
}