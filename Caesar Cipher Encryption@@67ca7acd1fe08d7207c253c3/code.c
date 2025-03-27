
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(const char *message, int shift, char *encrypted) {
    int i = 0;
    while (message[i] != '\0') {
        char currentChar = message[i];

        // Check if the character is an uppercase letter
        if (isupper(currentChar)) {
            encrypted[i] = (currentChar - 'A' + shift) % 26 + 'A';
        }
        // Check if the character is a lowercase letter
        else if (islower(currentChar)) {
            encrypted[i] = (currentChar - 'a' + shift) % 26 + 'a';
        }
        // If it's not a letter, keep it unchanged
        else {
            encrypted[i] = currentChar;
        }
        i++;
    }
    encrypted[i] = '\0'; // Null-terminate the encrypted string
}
