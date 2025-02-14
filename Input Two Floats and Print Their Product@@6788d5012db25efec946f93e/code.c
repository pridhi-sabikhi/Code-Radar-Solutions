#include <stdio.h>
int main(){
   float num1,num2,product=1;//or product;
   scanf("%f %f", &num1, &num2);
   product=num1*num2;
   printf("Product: %.2f", product);
   return 0;
}