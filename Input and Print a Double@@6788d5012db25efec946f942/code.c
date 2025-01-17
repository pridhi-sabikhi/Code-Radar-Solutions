//double precision floating point number means data type double so use data type double
#include <stdio.h>
int main(){
    double number;
    scanf("%lf", &number);
    printf("you entered: %.4lf", number); //.4lf means upto 4 deci place
    return 0;
}