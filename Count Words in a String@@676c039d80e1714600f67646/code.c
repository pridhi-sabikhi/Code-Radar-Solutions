#include <stdio.h>
#include<string.h>
int main()
{
    char sent[100];
    int count=1;//for the 1st word
    scanf("%s", sent);
    //sent=sent+" ";
    int l=strlen(sent);
    for(int i=0; i<l; i++)
    {
        //if(sent[i]==" ") aise krne se error b/w pointer and int 
        char *p= sent[i];
        if(*p==" ")
        count++;
    }
    printf("%d", count);
    return 0;
}