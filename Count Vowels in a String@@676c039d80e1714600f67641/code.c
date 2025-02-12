#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int count=0;
    scanf("%s", str);
    //str=tolower(str); not use bcz sirf char ko lower mein convert kr skte hai not string and tolower is under ctype.h
    int l=strlen(str);
    for(int i=0; i<l; i++) //<l bcz index is from 0 to l-1
    {
        if (isalpha(str[i])) //bcz string can contain alphanumeric  but his is for char only so write ctype.h also
        //not written str[i]==isaplhastr[i] bc isalpha return boolean val but we are comparing it with char so its wrong
        {
            str[i]=tolower(str[i]); //to convert each char to lower taaki up case vowels na check pre
            if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
        }
    }
    printf("%d", count);
    return 0;
}