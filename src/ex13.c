#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i;
    char l;
    char u;

    for (i = 0; (l = argv[1][i]) != '\0'; i++) {

        // map lowercase characters to uppercase
        if (islower(l)) {
            u = toupper(l);
        } else {
            u = l;
        }

        switch (u) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%d: '%c'\n", i, l);
                break;

            case 'Y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                    break;
                }
            default:
                printf("%d: %c is not a vowel\n", i, l);
        }
    }

    return 0;
}


