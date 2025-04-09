#include <stdio.h>
struct Student
{
    int rollno; float marks;
    char name[100];
};
int main()
{
    
    int n;
    float total=0.0, avg=0.0;
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
        total=total+s1[i].marks;  
    }
    avg=total/n;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    return 0;    

}