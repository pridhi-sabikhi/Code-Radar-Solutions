#include <stdio.h>
struct Student
{
    int rollno; float marks;
    char name[100];
};
int main()
{
    
    int n;
    float max=INT_MIN;
    scanf("%d", &n);
    struct Student s1[n];
    //float max=s1[0].marks; //initilised with 1st bcz this is float so can't do int min
    for(int i=0; i<n; i++)
    {
        scanf("%d", &s1[i].rollno);
        scanf("%s", s1[i].name);
        scanf("%f", &s1[i].marks);//%.2f nhi krna vrna name mein name nhi merks jaate hai
    }
    for(int i=0; i<n; i++)
    {
        if(s1[i].marks> max)
        {
            max=s1[i].marks;
        }       
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", s1[i].rollno, s1[i].name, max);
    return 0;    

}