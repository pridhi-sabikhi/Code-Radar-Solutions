// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char sent[100];
//     int n;
//     scanf("%s %d", sent, &n);
//     for(int i=0; i<)
//     {
//         if(isalpha(sent[i]))
//         {
//     if(sent[i]==)
//     return 0;
// }
#include <stdio.h>
#include <string.h>

void caesarCipher(char *message, int shift) {
    // Normalize the shift to be within 0-25
    shift = shift % 26;

    for (int i = 0; message[i] != '\0'; i++) {
        char currentChar = message[i];

        // Check if the character is an uppercase letter
        if (currentChar >= 'A' && currentChar <= 'Z') {
            message[i] = (currentChar - 'A' + shift) % 26 + 'A';
        }
        // Check if the character is a lowercase letter
        else if (currentChar >= 'a' && currentChar <= 'z') {
            message[i] = (currentChar - 'a' + shift) % 26 + 'a';
        }
        // Non-alphabetic characters remain unchanged
    }
}

int main() {
    char message[100];
    int shift;

    // Input the message and the shift value
    fgets(message, sizeof(message), stdin);
    // Remove the newline character from fgets
    message[strcspn(message, "\n")] = 0;

    
    scanf("%d", &shift);

    // Encrypt the message
    caesarCipher(message, shift);

    // Output the encrypted message
    printf("%s\n", message);

    return 0;
}