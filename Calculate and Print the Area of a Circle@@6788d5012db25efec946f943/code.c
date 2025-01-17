#include <stdio.h>
int main(){
    float radius;
    float area;//can take double area bss tb write.2lf in printf
    scanf("%f", &radius);
    area=3.14*radius*radius;
    printf("Area: %.2f", area);
    return 0;

}