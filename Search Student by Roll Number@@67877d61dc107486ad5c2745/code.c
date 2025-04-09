#include <stdio.h>
struct Student
{
    int rollno; float marks;
    char name[100];
};
int main()
{
    
    int n, search;
    scanf("%d", &n);
    struct Student s1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &s1[i].rollno);
        scanf("%s", s1[i].name);
        scanf("%f", &s1[i].marks);//%.2f nhi krna vrna name mein name nhi merks jaate hai
    }
    scanf("%d",&search);
    for(int i=0; i<n; i++)
    {
        if(s1[i].rollno == search)
        {
           printf("Roll Number: %d, Name: %s, Marks: %.2f", s1[i].rollno, s1[i].name, s1[i].marks);
           return 0;
        }       
    }
    printf("Student not found");
    return 0;    

}