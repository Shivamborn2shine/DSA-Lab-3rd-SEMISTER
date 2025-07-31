#include <stdio.h>
#include <string.h>

#define Max 100

int main() {
    char string[Max];
    int i, j;
    int length;
    int foundUnique = 0;

    printf("Enter the string:\n");
    fgets(string,sizeof(string),stdin);

    length = strlen(string);

    for (i = 0; i < length; i++) {
        int isRepeating = 0;
        for (j = 0; j < length; j++) {
            if (i != j && string[i] == string[j]) {
                isRepeating = 1;
                break;
            }
        }
        if (!isRepeating) {
            printf("The non-repeating character is: %c\n", string[i]);
            foundUnique = 1;
            // If you want to print all non-repeating characters, do not break here
            // break; // Uncomment this if you want only the first non-repeating char
        }
    }

    if (!foundUnique) {
        printf("No unique character found\n");
    }

    return 0;
}
