#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)){ // to check if character is alphabet
    if (isupper(ch)){  //to check lower case use islower(ch)
        printf("Uppercase");
    }
    else{
    printf("Lowercase");
    }
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}