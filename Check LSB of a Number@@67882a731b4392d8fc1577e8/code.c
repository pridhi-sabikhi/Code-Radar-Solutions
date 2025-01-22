//LSB is leftmost bit when decimal no. is converted to binary
#include <stdio.h>
int main() {
    int num;
    scanf("%d",num);
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