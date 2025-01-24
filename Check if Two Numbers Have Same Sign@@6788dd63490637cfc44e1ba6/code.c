//do using if only ismein switch ni lgega
#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    if (num1>0 && num2>0)
    printf("Same Sign");
    else if(num1<0 && num2<0)
    printf("Same Sign");
    else
    printf("Different Sign");
    //all ahve 1 line so no {}
    return 0;
}