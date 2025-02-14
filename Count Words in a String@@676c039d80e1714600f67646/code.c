#include <stdio.h>
#include<string.h>
int main()
{
    char sent[100];
    int count=0;
    scanf("%s", sent);
    sent=sent+" ";
    int l=strlen(sent);
    for(int i=0; i<l; i++)
    {
        if(sent[i]==' ')
        count++;
    }
    printf("%d", count);
    return 0;
}