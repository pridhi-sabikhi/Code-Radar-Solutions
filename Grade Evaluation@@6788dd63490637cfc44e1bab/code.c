//can do this and 31 with switch/if also 
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c", &ch);
    ch=toupper(ch);
    switch(ch){
        case 'A':printf("Excellent");
        break;
        case 'B':printf("Good");
        break;
        case 'C' :printf("Average");
        break;
        case 'D':printf("Below Average");
        break;
        case 'F':printf("Fail");
        break;
        default:printf("Invalid grade");
        break;
//default mein bina break ke bhi sahi aayega bcz default is the last case so after default prog switch se bahr hi jayega 
        }
    return 0;
}