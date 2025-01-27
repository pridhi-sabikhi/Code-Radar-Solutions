#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for(int i=1;i<=100;i++){ //check ke 1 aur 100 include krna ke ni
         if (num==i){
            printf("In Range");
            break; //break issliye lgaya taaki pura loop na chlan pade
         }
    }
    printf("Out of Range"); //agr pure loop mein no. ni mila toh print out of range
    return 0;
}