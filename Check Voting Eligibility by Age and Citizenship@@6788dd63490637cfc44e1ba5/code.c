#include <stdio.h>
int main() {
    int age;
    int status;//can take int bcz 0/1 int hi hai npt take bool bcz usse test case ni pass ho rhe 
    scanf("%d %d", &age, &status);
    if (age>=18 && status==1)//can write ==1 bcz bool hai toh both true and 1 are correct
    printf("Eligible");
    else 
    printf("Not Eligible"); //hamesha else ki next line mein printf likhte hai else ke saath bhi likh skte but don't
    return 0;
}