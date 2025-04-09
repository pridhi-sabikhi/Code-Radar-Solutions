#include <stdio.h>
struct Student
{
    int rollno;
    float marks; 
    char name[100];
};
int main()
{
    int N;
    char grade;
    scanf("%d", &N);
    struct Student s1[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &s1[i].rollno);
        scanf("%s", s1[i].name);
        scanf("%f", &s1[i].marks);
    }
    for(int i=0; i<N; i++)
    {
        if(s1[i].marks>=85)
        {
            grade='A';
        }
        else if(s1[i].marks>=70) //chahe q mein b/w 70 and 84 hai this means including 70 and 84 bcz 1st was 
        //till 85 and last is less than 70 so this is inclusive 
        {
            grade='B';
        }
        else
        {
            grade='C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %c\n", s1[i].rollno, s1[i].name, grade);
    }
    return 0; 
}