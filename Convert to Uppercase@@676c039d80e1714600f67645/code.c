#include <stdio.h>
int main()
{
    char sent[100];
    scanf("%s", &sent);
    int l=strlen(sent);
    for(int i=0; i<l; i++)
    {
    if(sent[i]>=97 && sent[i]<=122)
    {
        sent[i]=sent[i]-32;
    }
    }
    printf("%s", sent);
return 0;
}