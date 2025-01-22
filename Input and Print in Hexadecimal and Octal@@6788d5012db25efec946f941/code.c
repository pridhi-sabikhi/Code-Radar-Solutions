#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: \xhh%d",num);
    printf("Octal: %ooo",num);
    return 0;
}