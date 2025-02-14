#include <stdio.h>
int main(){
    int num1, num2, ans;
    char ch;
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &ch);
    //not take i/p in 1 line it wil give error  and put  space before %c so that compiler can take i/p
    //this tells compiler to ignore any whitespaces bby taking as i/p
    switch(ch)
    {
        case '+':
        ans=num1+num2;
        printf("%d", ans);
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
        if(num2==0)
        {
            printf("error");
        }
        else{
        ans=num1/num2;
        printf("%d", ans);
        }
        break;
        default:
        printf("error");
    }
    return 0;
}