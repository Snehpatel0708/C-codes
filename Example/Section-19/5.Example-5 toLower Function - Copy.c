#include <stdio.h>
#include <ctype.h>

void toLower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char userInput[100];

    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);

    for (int i = 0; userInput[i]; i++) {
        if (userInput[i] == '\n') {
            userInput[i] = '\0';
            break;
        }
    }

    toLower(userInput);

    printf("Lowercase: %s\n", userInput);

    return 0;
}
