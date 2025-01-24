#include <stdio.h>
#include<ctype.h>//include this if want to use charfunct  
//sor strings use #include<string.h>
int main(){
char ch;
scanf("%c", &ch);
ch=toupper(ch);//toupper(charname) is used to convert a char to up case
if (ch=='R')
printf("Stop");
else if(ch=='Y')
printf("Slow Down");
else if(ch=='G')
printf("Go");
else
printf("Invalid input");
//hr if elseif aur else kebaad ek hi statement thii so need to put{}
    return 0;
}