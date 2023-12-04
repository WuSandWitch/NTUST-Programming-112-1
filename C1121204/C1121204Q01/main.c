#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char origin[100];
    char replace[50];
    char replacement[50];
    fgets(origin, 50, stdin);
    fgets(replace, 50, stdin);
    fgets(replacement, 50, stdin);

    replace[strlen(replace) - 1] = '\0';
    replacement[strlen(replacement) - 1] = '\0';

    for (int i = 0; i < strlen(origin); i ++ ) {
        if (origin[i] != replace[0]) {
            printf("%c", origin[i]);
            continue;
        }

        bool equal = true;
        for (int j = 0; j < strlen(replace); j++) {
            if (replace[j] != origin[i + j]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            printf("%s", replacement);
            i += strlen(replace) -1;
        }
        else {
            printf("%c", origin[i]);
        }
    }
}