#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %d\xhh",num);
    printf("Octal: %od",num);
    return 0;
}