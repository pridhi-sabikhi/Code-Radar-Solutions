//can do with if
#include <stdio.h>
int main() {
    int num1,num2, ans;
    char ch;//to i/p operator . here no need of ctype.h bcz koi char func ni lgana hai
    scanf("%d %d\n%c", &num1, &num2, &ch); // chahe take %c in separate scanf or 1 put \n after %d vrana ch takes space as i/p 
         //same line mein lena toh do like this
         //scanf("%c", &ch);
    switch(ch){
        case '+':
        ans=num1+num2;
        printf("%d",ans);
        break;
//agr int ans=num1+num2 then printf(ans) krna toh bhi hr case ke baad {}ni lgao
        case '-':
        ans= num1-num2;
        printf("%d", ans);
        break;
        case '*':
        ans=num1*num2;
        printf("%d", ans);
        break;
        case '/':
        if (num2==0){
            printf("Zero division error");
        }
        else {
        ans=num1/num2;
        printf("%d", ans);
        }
        break;
        default:
        printf("Error");
       }
    return 0;
}