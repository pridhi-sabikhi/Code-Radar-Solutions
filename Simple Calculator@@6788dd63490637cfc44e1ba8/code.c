//can do with if
#include <stdio.h>
int main() {
    int num1,num2;
    char ch;//to i/p operator . here no need of ctype.h bcz koi char func ni lgana hai
    scanf("%d %d %c", &num1, &num2, &ch); //can take %c in separate scanf but no need
    switch(ch){
        case '+':
        int ans=num1+num2;
        printf("%d",ans);
        break;
    }
    return 0;
}