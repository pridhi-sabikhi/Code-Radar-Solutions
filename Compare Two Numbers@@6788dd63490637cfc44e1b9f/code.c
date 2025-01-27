#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1>num2){
        printf("First");
    }
    else if(num2>num1){
        printf("Second");
    }
    else{
        printf("Equal");
    }
    return 0;
}