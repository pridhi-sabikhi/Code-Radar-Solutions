//can do with if
#include <stdio.h>
int main() {
    int num1,num2;
    char ch;//to i/p operator . here no need of ctype.h bcz koi char func ni lgana hai
    scanf("%d %d", &num1, &num2); // take %c in separate scanf ("%d %d %c", 7num1, &num2, &ch) krne se error aa rha
    scanf("%c",&ch);
    switch(ch){
        case '+':
        printf("%d",num1+num2);
        break;
//agr int ans=num1+num2 then printf(ans) krna toh hr case ke baad {}lgao
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        printf("%d",num1/num2);
        break;
        default:
        printf("Error");
       
    }
    return 0;
}