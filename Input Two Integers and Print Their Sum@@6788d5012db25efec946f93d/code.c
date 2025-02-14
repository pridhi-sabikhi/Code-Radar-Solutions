#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b); //no, b/w %d and %d
    int s=a+b;
    printf("Sum: %d", s);//or printf("Sum: %d", (a+b));  or printf("Sum: %d", a+b);
    return 0;
}