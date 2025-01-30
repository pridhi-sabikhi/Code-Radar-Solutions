#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (isupper(ch)){  //to check lower case use islower(ch)
        printf("Uppercase");
    }
    else{
    printf("Lowercase");
    }
    return 0;
}