#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations, solves the "chicken and the egg" problem
void print_letters(char arg[], int len) {
    int i;
    char c;

    for (i = 0; i < len; i++) {
        c = arg[i];
        if (isalpha(c) || isblank(c)) {
            printf("'%c' == %d ", c, c);
        }
    }
    printf("\n");
}

void print_arguments(int argc, char *argv[]) {
    int i;

    for (i = 1; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
}

int main(int argc, char *argv[]) {
    print_arguments(argc, argv);
    return 0;
}
