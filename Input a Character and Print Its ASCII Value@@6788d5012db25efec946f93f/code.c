#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    //char ko int mein krne see uski acsii value store hoti hai
    printf("ASCII Value: %d", ch);
    return 0;
}