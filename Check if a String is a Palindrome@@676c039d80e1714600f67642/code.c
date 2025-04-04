#include<string.h>
#include <stdio.h>
int palindrome(char sent[]) //bool nhi lena vrna stdbool lena pdega 
{
    int l=strlen(sent);
    for(int i=0; i<l/2; i++)
    {
        if(sent[i]!=sent[l-i-1])
        {
            return 0;//w/m not palindrome
        }
    }
    //w/m found so 1 for saying condition is true
    return 1;
}
int main()
{
    char sent[100];
    scanf("%s", sent);
    if(palindrome(sent))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}