#include <stdio.h>
#include <string.h>

void compressString(char *str, char *compressed) {
    int length = strlen(str);
    int compressedIndex = 0;

    for (int i = 0; i < length; i++) {
        char currentChar = str[i];
        int count = 1;

        // Count occurrences of the current character
        while (i + 1 < length && str[i + 1] == currentChar) {
            count++;
            i++;
        }

        // Append the character and its count to the compressed string
        compressed[compressedIndex++] = currentChar;
        if (count > 1) {
            compressedIndex += sprintf(&compressed[compressedIndex], "%d", count);
        }
    }

    // Null-terminate the compressed string
    compressed[compressedIndex] = '\0';

    // If the compressed string is not shorter, return the original string
    if (compressedIndex >= length) {
        strcpy(compressed, str);
    }
}

