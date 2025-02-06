#include <stdio.h>
int main(){
    int num1, num2;
    char ch;
    scanf("%d %d", &num1, &num2);
    scanf("%c", &ch);
    switch(ch)
    {
        case '+':
        printf("%d", num1+num2);
        break;
        case '-':
        printf("%d", num1-num2);
        break;
        case '*':
        printf("%d", num1*num2);
        break;
        case '/':
        printf("%d", num1/num2);
        break;
        default:
        printf("Error");
    }
    return 0;
}