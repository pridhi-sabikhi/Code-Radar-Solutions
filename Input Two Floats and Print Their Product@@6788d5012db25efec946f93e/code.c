#include <stdio.h>
int main(){
   float num1,num2,product=1;//or product; pr then product=product*num1*num2  ni krna tb just num1*num2
   scanf("%f %f", &num1, &num2);
   product=product*num1*num2; //or num1*num2;
   printf("Product: %.2f", product);
   return 0;
}