#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);
    if (temp<=0)
    printf("Freezing");
    else
    printf("Above Freezing"); //sirf 1 hi line thi after if and else so no need to put {}
    return 0;
}