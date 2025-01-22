#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int ans=num1 << num2;
    printf("%d", ans);
    return 0; //without return 0 also its runnimg correctly
}