// do using math.sqrt num or num*0.5
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int c=0;
    if(num>1){
    for(int i=1;i<=num;i++){
        if (num%i==0){
         c++;
        }
    }
    if (c==2){
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    }
    else{
        printf("Not Prime"); //checking if num is less than 1
    }
    return 0;
}
