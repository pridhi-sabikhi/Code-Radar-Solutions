#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count;
    scanf("%s", str);
    str=tolower(str); //so that sirf lower case hi check kre
    int l=strlen(str);
    for(int i=0; i<l; i--) //<l bcz index is from 0 to l-1
    {
        if (str[i]==isalpha(str)) //bcz string can contain alphanumeric 
        {
            if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
        }
    }
    printf("%d", count);
    return 0;
}