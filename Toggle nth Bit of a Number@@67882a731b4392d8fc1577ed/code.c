#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    num =num^(1<<n);
    //(1<<n) sets only nth bit to 1  then ^ se bit toggle 
    //eg if bit=0 then xor with 1 will make it 1 if bit =1 then xor with 1 make it 0
    printf("%d\n", num); //toggle krke jo no. bna vo return kiya
    return 0;
}