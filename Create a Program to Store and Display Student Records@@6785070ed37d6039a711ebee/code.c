#include <stdio.h>
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
        scanf("%s\n", s1[i].name);
        //name ke baad marks nhi chad rhe sirf 0.00 hi aa rhe hai 
        scanf("\n%f", &s1[i].marks);//%.2f nhi krna vrna name mein name nhi merks jaate hai
    }
    for(int i=0; i<n; i++)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s1[i].rollno, s1[i].name, s1[i].marks);
    }
    return 0;    

}