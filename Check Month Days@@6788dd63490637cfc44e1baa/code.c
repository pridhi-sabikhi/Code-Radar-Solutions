//can do with if
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:printf(31);
        break;
        case 2:printf(28);
        break;
        case 3:printf(31);
        break;
        case 4:printf(30);
        break;
        case 5:printf(31);
        break;
        case 6:printf("June");
        break;
        case 7:printf("July");
        break;
        case 8:printf("August");
        break;
        case 9:printf("September");
        break;
        case 10:printf("October");
        break;
        case 11:printf("November");
        break;
        case 12:printf("December");
        break;
        default:printf("Invalid month");
    }
    return 0;
}