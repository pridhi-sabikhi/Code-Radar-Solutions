#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1>num2 || num1==num2){ // no need to write if((num1>num2) || (num1==num2))
       printf("Yes");
    }
    else{  // w/m num2>num1
        printf("No");
    }
    return 0;
}