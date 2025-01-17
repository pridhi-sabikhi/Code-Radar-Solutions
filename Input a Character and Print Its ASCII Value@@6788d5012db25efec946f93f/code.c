#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    int value= int(ch); //char ko int mein krne see uski acsii value store hoti hai
    printf("ASCII Value: %d", value);
    return 0;
}