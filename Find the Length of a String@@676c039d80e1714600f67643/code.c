#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100];
    int i=0, count =0;
    scanf("%c", sent);
    while(isalpha(sent[i]))
    {
        count++;
    }
    printf("%d", count);
    return 0;
}