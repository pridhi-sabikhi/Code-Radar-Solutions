#include <stdio.h>
int main(){
    float radius;
    double area;
    scanf("%f", &radius);
    area=3.14*radius*radius;
    printf("Area: %.2lf", area);
    return 0;

}