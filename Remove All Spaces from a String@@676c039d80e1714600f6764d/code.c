#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100], sent1[100];
    scanf("%s", sent);
    int l=strlen(sent);
    for(int i=0; i<l; i++)
    {
        if(sent[i] !=' ')
        {
            sent1[i]=sent1[i]+sent[i];
        }
    }
    printf("%s", sent1);
    return 0;
}