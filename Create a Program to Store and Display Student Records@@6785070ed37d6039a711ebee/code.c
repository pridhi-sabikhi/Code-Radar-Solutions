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
        scanf("%s", s1[i].name);
        scanf("%.2f", &s1[i].marks);
    }
    for(int i=0; i<n; i++)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s1[i].rollno, s1[i].name, s1[i].marks);
    }
    return 0;    

}