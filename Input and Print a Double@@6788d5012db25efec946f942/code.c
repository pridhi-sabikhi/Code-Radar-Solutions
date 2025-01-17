//double precision floating point number means data type double so use data type double
#include <stdio.h>
int main(){
    double number;
    scanf("%lf", &number);
    printf("You entered: %.2lf", number); //.4lf means upto 4 deci place
    return 0;
}