#include <stdio.h>
int main(){
    int num1, num2, ans;
    char ch;
    scanf("%d %d %c", &num1, &num2, &ch);
    
    switch(ch){
        case '+':
        ans=num1+num2;
        printf("%d",ans);
        break;
        case '-':
        ans=num1-num2;
        printf("%d", ans);
        break;
        case '*':
        ans=num1*num2;
        printf("%d", ans);
        break;
        case '/':
        ans=num1/num2;
        printf("%d", ans);
        break;
        default:
        printf("Error");
    }
    return 0;
}