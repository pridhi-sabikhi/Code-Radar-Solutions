#include <stdio.h>
int main(){
int num1,num2,num3;
double average;
scanf("%d %d %d", &num1,&num2,&num3);
average=(num1+num2+num3)/3;
printf("Average: %.2d", average);
return 0;
}
