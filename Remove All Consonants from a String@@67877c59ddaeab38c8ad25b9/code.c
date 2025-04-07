#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sent[1000], new[100];
    count=0
    scanf("%s", &sent);
    int l=strlen(sent);
    for(int i=0; i<l; i++)
    {
        if(isalpha(sent[i]))
        {
        //can't convert to lower bcz usse print bhi krna hai 
            if(sent[i]=='a'||sent[i]=='e'||sent[i]=='i'||sent[i]=='o'||sent[i]=='u'||sent[i]=='A'||sent[i]=='E'||sent[i]=='I'||sent[i]=='O'||sent[i]=='U')
            {
                new[count++]=sent[i];
            }
        }
        else
        new[count++]=sent[i];
    }
    printf("%s", sent);
    return 0;
}