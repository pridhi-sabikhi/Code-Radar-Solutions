#include <stdio.h>
#include<limits.h>
struct Student
{
    int rollno; float marks;
    char name[100];
};
int main()
{
    
    int n;
    scanf("%d", &n);
    struct Student s1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &s1[i].rollno);
        scanf("%s", s1[i].name);
        scanf("%f", &s1[i].marks);//%.2f nhi krna vrna name mein name nhi merks jaate hai
    }
    for(int i=0; i<n; i++)
    {
        if(s1[i].marks<50)
        {
           printf("Not All Passed");
           return 0;
        }       
    }
    printf("All Passed");
    return 0;    

}