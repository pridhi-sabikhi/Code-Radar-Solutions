#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num>0){
    printf("Positive");
    }
    else// yeh wala else else if wale ka hi else hai koi alag else ni hai
    if(num<0){  //aise ni likhna elseif
        printf("Negative"); //aise bhi kr skte else if (num<0)
    }
    else{
        printf("Zero");
    }
    return 0;
}