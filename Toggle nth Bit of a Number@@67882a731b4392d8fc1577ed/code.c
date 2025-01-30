//optimised solution
#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    num =num^(1<<n); //toggle using xor
    //1<<n se only n th bit becomes 1
    //if nth bit is 1 then xor makes it 0
    printf("%d\n", num);
    return 0;
}