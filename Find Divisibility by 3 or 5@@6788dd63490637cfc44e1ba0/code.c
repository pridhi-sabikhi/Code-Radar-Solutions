#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    // pehle both hi check kro bcz agr pehle 3 se check kiya but no. div by both hua toh ans toh div by 3 krke khatam
        if (num%3==0 && num%5==0){  // no need to write like this if((num%5==0) && (num%3==0))
        printf("Divisible by Both");
    }
    else if(num%3==0){
        printf("Divisible by 3");
    }
    else if(num%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}