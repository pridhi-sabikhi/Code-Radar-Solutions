#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for(int i=1;i<=100;i++){ //check ke 1 aur 100 include krna ke ni
         if (num==i){
            printf("In Range");
            return 0; //jaise no. mil gya print in range then exit prog
            //break ni lgaya bcz break se sirf out of for loop jaata hai and phir after for wala printf out of range print ho jaata hai
         }
    }
    printf("Out of Range"); //agr pure loop mein no. ni mila toh print out of range then exit 
    return 0;
}