//LSB is rightmost bit when decimal no. is converted to binary
#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);//agr yahan & na lagaya toh execution error packages/gcc/run aayega
    //LSB is 1st remainder after div with 2
    int remainder=num%2;
    if (remainder==1){
        printf("Set");
    }  
    else
    {
        printf("Not Set");
    }
    return 0;
}