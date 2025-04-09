#include <stdio.h>
#include<limits.h>
struct Student
{
    int rollno; float marks;
    char name[100];
};
int main()
{
    
    int n, result;
    //chahe float hai but can do int min bcz value hi deni so float do ya int no effect  
    float min=INT_MAX; //or float min=s1[0].marks;
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
        if(s1[i].marks< min)
        {
            min=s1[i].marks;
            result=i;
        }       
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f", s1[result].rollno, s1[result].name, min);
    return 0;    

}