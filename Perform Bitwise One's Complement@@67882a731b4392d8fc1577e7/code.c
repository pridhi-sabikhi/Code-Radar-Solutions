#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int ans=~num;//can write ~(num) or (~(num))
    //not correct !(num)  or !num
    printf("%d", ans);
    return 0;
}