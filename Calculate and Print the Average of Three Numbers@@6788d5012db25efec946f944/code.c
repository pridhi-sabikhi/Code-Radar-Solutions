#include <stdio.h>
int main(){
int num1,num2,num3;
float avg;
scanf("%d %d %d", &num1, &num2, &num3);
avg=(num1+num2+num3)/3.0;//float no. float se hi div hoga so must to write 3.0 vrna 1 test pass ni hoga 
printf("Average: %.2f", avg);
return 0;
}

