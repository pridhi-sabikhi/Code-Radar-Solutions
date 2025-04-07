#include<string.h>
#include <stdio.h>
int palindrome(char sent[]) //bool nhi lena vrna stdbool lena pdega 
{
    int count =0; 
    char sent1[100];
    int n=strlen(sent);
    for(int i=0; i<n; i++)
    {
        if(sent[i]!=' ')
        {
            sent1[count++]=sent[i];
        }
    }
    // int l=strlen(sent1);
    for(int i=0; i<count/2; i++)
    {
        if(sent1[i]!=sent1[count-i-1])
        {
            printf("%c", sent[i]);
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