#include <stdio.h>
int main() {
    int num, s, r;
    scanf("%d", &num);
    while(n>0)
    {
        r=n%2;
        s=s*10+r;//r=1 then s=1 then r=1 then s= 1x10+1=11
        n=n/2;
    }
    printf("%s", s);
    return 0;
}