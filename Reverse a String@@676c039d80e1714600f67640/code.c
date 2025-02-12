#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char new_str[100];
    scanf("%s", str); //to take string i/p don't use & only write name of var
    int l=strlen(str); //funct to take length of string
    for(int i=l-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}