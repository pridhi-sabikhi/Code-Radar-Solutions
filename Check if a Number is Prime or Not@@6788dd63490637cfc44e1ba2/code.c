// do using math.sqrt num or num*0.5
// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     int c=0;
//     for(int i=1;i<=num;i++){
//         if (num%i==0){
//          c++;
//         }
//     }
//     if (c==2){
//         printf("Prime");
//     }
//     else
//     {
//         printf("Not Prime");
//     }
//     return 0;
// }
//using math.sqrt
#include <stdio.h>
#include<math.h>
int main() {
    int num;
    scanf("%d", &num);
    int c=0;
    for(int i=1;i<=num*0.5;i++){
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