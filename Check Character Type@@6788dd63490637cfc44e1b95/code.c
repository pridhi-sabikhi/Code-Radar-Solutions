// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch;
//     scanf("%c", &ch);
//     if(isalpha(ch)){
//         ch= tolower(ch);
//         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//         printf("Vowel");
//         else
//         printf("Consonant");
//     }
//     else{
//         if (isdigit(ch))
//         printf("Digit");
//         else
//         printf("Special Character");
//     }
//     return 0;
// }

//cp method not convert to lower case and check digit using > <
#include <stdio.h>
int main(){
    char ch;
    scanf(" %c", &ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch'U' || ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
    printf("Vowel");
    else
    printf("Consonant");
    }
    else if(ch>='0' && ch<='9')
    printf("Digit");
    else 
    printf("Special Character");
    return 0;
}