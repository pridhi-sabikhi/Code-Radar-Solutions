#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int c=0;
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
    return 0;
}