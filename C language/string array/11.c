#include <stdio.h>

void removeSpaces(char* str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];  // Copy non-space character
            j++;
        }
    }
    str[j] = '\0';  // Terminate the string
}

int main() {
    char str[100] ;
    gets(str);

    printf("Original string: %s\n", str);

    removeSpaces(str);

    printf("String with spaces removed: %s\n", str);

    return 0;
}
