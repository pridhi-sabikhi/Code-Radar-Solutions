#include<stdio.h>
#include<stringtype.h>
int main()
{
    char str[100];
    char new_str[100];
    scanf("%s", &str);
    int l=length(str);
    for(int i=l; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}