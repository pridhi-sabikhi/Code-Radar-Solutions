#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: \xhh%d",num);
    printf("Octal: %od",num);
    return 0;
}