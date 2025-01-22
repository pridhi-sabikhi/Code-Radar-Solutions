#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int ans=!num;//~(num)
    printf("%d", ans);
    return 0;
}