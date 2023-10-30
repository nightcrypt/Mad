#include <stdio.h>
#include <string.h>

void swapStrings(char string1[], char string2[]) {
    // Concatenate both strings
    strcat(string1, string2);

    // Copy the concatenated string to the second string
    strcpy(string2, string1);

    // Copy the original second string (now stored in the first string) to the first string
    strcpy(string1, string2 + strlen(string1) - strlen(string2));
    // The expression `string2 + strlen(string1) - strlen(string2)` represents the starting address
    // from where to copy the characters to the first string.
    // It calculates the difference in lengths between the original second string and the original first string,
    // then adds that difference to the address of the original second string to get the starting address
    // from where to copy the characters to the first string.

    // Remove the second string from the first string
    string1[strlen(string1) - strlen(string2)] = '\0';
}

int main() {
    char string1[100] = "Hello";
    char string2[100] = "World";

    printf("Before swapping:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    swapStrings(string1, string2);

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    return 0;
}
