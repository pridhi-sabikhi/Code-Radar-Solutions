#include <stdio.h>
int main(){
    int num1, num2, add, sub,mul,div;
    char ch;
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &ch);//not take i/p in 1 line it wil give error  and put  space before %c so that compiler can take i/p
    switch(ch)
    {
        case '+':
        add=num1+num2;
        printf("%d", add);
        break;  
        case '-':
        sub=num1-num2;
        printf("%d", sub);
        break;
        case '*':
        mul=num1*num2;
        printf("%d",mul);
        break;
        case '/':
        if(num2==0)
        {
            printf("error");
        }
        else{
        div=num1/num2;
        printf("%d", div);
        }
        break;
        default:
        printf("error");
    }
    return 0;
}