#include <stdio.h>
int main() {
    int marks; //given int lo so take int vrna marks float mein lete
    scanf("%d", &marks);
    if (marks>=90)
    printf("A");  //never put '' in printf in c 
    else if(marks>=80) 
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
//using switch
// #include <stdio.h>
// int main() {
//     int marks; //given int lo so take int
//     scanf("%d", &marks);
//     switch(marks/10)
//     {
//         case 10: //both for 100 marks and 90 above marks
//         case 9:
//         printf("A");
//         break;
//         case 8:
//         printf("B");
//         break;
//         case 7:
//         printf("C");
//         break;
//         case 6:
//         printf("D");
//         break;
//         default:
//         printf("F");
//     }
//     return 0;
// }