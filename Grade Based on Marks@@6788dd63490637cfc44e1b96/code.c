#include <stdio.h>
int main() {
    int marks; //given int lo so take int
    scanf("%d", &marks);
    if (marks>=90)
    printf("A");  //never put '' in printf in c 
    else if(marks>=80 && marks<90) 
    // no need to write marks>=80 && marks<90 bcz if less than 90 hai toh hi niche aaya hai 
    //vrna niche hi na aata 
    // and 90<marks<=80 aise likhne se error aayega 
    printf("B");
    else if(marks>70)
    printf("C");
    else if (marks>=60)
    printf("D");
    else
    printf("F");

    return 0;
}