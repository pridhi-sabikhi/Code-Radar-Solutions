#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    //char ko int mein krne se uski acsii value print hoti hai
    // no need to do this int val=(int) ch then print val with %d
    // sidha print ch with %d bcz compiler sirf %d dekhega and usko kooi frq ni pdta 
    //ke var kaunsa hai usne bss %d dekha and ch ko %d mein print kr diya 
    //which is its ascii value
    printf("ASCII Value: %d", ch); 
    return 0;
}