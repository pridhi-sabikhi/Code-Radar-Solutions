#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num2==(num1*num1)){
        printf("Yes");
    }
    else{
        printf("No");
    }// vaise only 1 line so need to put {} after else and if
    return 0;
}