#include <stdio.h>
int main() {
    int marks; //given int lo so take int
    scanf("%d", &marks);
    if (marks>=90)
    printf('A');
    else if(marks>=80)
    printf('B');
    else if(marks>70)
    printf('C');
    else
    printf('F');

    return 0;
}