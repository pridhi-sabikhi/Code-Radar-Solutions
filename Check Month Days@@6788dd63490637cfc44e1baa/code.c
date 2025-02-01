//can do with if
// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     switch(num){
//         case 1:printf("31");
//         break;
//         case 2:printf("28");
//         break;
//         case 3:printf("31");
//         break;
//         case 4:printf("30");
//         break;
//         case 5:printf("31");
//         break;
//         case 6:printf("30");
//         break;
//         case 7:printf("31");
//         break;
//         case 8:printf("31");
//         break;
//         case 9:printf("30");
//         break;
//         case 10:printf("31");
//         break;
//         case 11:printf("30");
//         break;
//         case 12:printf("31");
//         break;
//         default:printf("Invalid month");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    switch(num){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
        case 2:
        printf("28");
        break;
        default:
        printf("Invalid month");
        }
        return 0;
}