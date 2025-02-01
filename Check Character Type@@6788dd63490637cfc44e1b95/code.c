#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if(isalpha(ch)){
        ch= tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {pritnf("Vowel");}
        else
        {pritnf("Consonant");}
    }
    else{
        if (isdigit(ch))
        {printf("Digit");}
        else
        {printf("Special Character");}
    }
    return 0;
}
//not convert to lower case and check digit using > <