//can do with if
#include <stdio.h>
int main() {
    int num1,num2, ans;
    char ch;//to i/p operator . here no need of ctype.h bcz koi char func ni lgana hai
    scanf("%d %d", &num1, &num2); // take %c in separate scanf ("%d %d %c", 7num1, &num2, &ch) krne se error aa rha
     scanf("%c", &ch);
    switch(ch){
        case '+':
        //ans=num1+num2;
        printf("%d",num1+num2);
        break;
//agr int ans=num1+num2 then printf(ans) krna toh bhi hr case ke baad {}ni lgao
        case '-':
        //ans= num1-num2;
        printf("%d", num1-num2);
        break;
        case '*':
        //ans=num1*num2;
        printf("%d", num1*num2);
        break;
        case '/':
        //ans=num1/num2;
        printf("%d", num1/num2);
        break;
        default:
        printf("Error");
       }
    return 0;
}