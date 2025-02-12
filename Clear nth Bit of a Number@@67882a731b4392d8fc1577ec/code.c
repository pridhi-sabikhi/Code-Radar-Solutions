//optimised solution
#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    num=num & ~(1<<n);
    //1<<n se only nth bit becomes 1 rest all bits become 0
    //~(1<<n)---------------------0-----------------------1
    //num & ~(1<<n) se clears nth bit while keeping others unchanged bcz nth bit ko 0 ke saath & krne pr vo 0 hi hogi
    printf("%d\n",num);
    return 0;
}