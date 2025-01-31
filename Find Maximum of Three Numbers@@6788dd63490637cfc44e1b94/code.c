//see cp 29 jan wala usmein found max using if, switch, ternary operator
// #include <stdio.h>
// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if((a>b) && (a>c))
//     printf("%d",a);
//     else if((b>c) && (b>a))
//     printf("%d", b);
//     else
//     printf("%d", c);
//     return 0;
// }

//using ternary
#include <stdio.h>
int main(){
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);
    (a>b && a>c)? printf("%d", a):(b>c && b>a)? printf("%d", b):printf("%d", c);
    return 0;

}