#include <stdio.h>
int main() {
    int num, s, r;
    scanf("%d", &num);
    while(num>0)
    {
        r=num%2;
        //didi ulta bcz we print niche se uppar
        s=r+(s*10);//r=1 then s=1 then r=1 then s= 1+10x+1=11 
        num=num/2;
    }
    printf("%s", s);
    return 0;
}