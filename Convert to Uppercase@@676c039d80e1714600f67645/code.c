#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char sent[1000];
    scanf("%s", &sent);
    int l=strlen(sent);
    for(int i=0; i<l; i++)
    {
        if(isalpha(sent[i]))
        {
        if(sent[i]>=97 && sent[i]<=122)
        {
            sent[i]=sent[i]-32;
        }
        }
       
    }
    printf("%s", sent);
return 0;
}