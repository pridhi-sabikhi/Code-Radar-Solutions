#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char new_str[100];
    scanf("%s", &str);
    int l=str.length();
    for(int i=l; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}