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
// #include <stdio.h>
// int main(){
//     int a, b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     (a>b && a>c)? printf("%d", a):(b>c && b>a)? printf("%d", b):printf("%d", c);
//     return 0;
// }

//using switch
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    switch(a>b && a>c){
        case 1:
        printf("%d", a);
        break;
        case 0:
        switch(b>c && b>a){
            case 1:
            printf("%d", b);
            break;
            case 0:
            printf("%d", c);
            break;
        }
        break; //break of case 0 of 1st switch
        // vaise can skip this or isse just pehle wali dono mein se koi 1 bbut dono hi nhi skip krni
    }
}