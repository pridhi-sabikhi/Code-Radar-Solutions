#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int ans= num1 | num2;
    printf("%d", ans); //print %d mein hi krna hai taaki ans int mein aaye
    return 0;
}