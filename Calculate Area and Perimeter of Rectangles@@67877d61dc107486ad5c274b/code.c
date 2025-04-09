#include<stdio.h>
struct Rectangle
{
    int length, breadth;
    char name[100];
};
int main()
{
    
    int n;
    float area=0.0, peri=0.0;
    scanf("%d", &n);
    struct Rectangle s1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &s1[i].length);
        scanf("%d", &s1[i].breadth);
    }
    for(int i=0; i<n; i++)
    {    
        area = s1[i].length * s1[i].breadth;
        peri = 2 * (s1[i].length + s1[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i+1, area, peri);
    }
    return 0;    
}