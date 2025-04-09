#include <stdio.h>
#include<limits.h>
struct Student
{
    int rollno; float marks;
    char name[100];
};
int main()
{
    
    int n, count=0;
    float threshold;
    scanf("%d", &n);
    struct Student s1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &s1[i].rollno);
        scanf("%s", s1[i].name);
        scanf("%f", &s1[i].marks);//%.2f nhi krna vrna name mein name nhi merks jaate hai
    }
    scanf("%f",&threshold);
    for(int i=0; i<n; i++)
    {
        if(s1[i].marks> threshold)
        {
            count++;
        }       
    }
    printf("Count of students scorig above %.2f: %d", threshold, count);
    return 0;    

}