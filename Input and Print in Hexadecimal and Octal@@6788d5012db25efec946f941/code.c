#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %d\xhh\n",num);
    printf("Octal: %od",num);
    return 0;
}