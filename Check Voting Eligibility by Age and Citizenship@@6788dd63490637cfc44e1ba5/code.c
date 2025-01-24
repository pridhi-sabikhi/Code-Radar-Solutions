#include <stdio.h>
int main() {
    int age;
    bool status;//can take int bcz 0/1 int hi hai
    scanf("%d %d", &age, &status);// for bool also %d liya bcz if i/p=0 toh false ,1 to true
    if (age>=18 && status==true)//can write ==1 bcz bool hai toh both true and 1 are correct
    printf("Eligible");
    else printf("Not Eligible"); //hamesha else ki next line mein printf likhte hai else ke saath ni likhte
    return 0;
}