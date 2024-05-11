#include <stdio.h>

int main() {
    // code star pattern
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j <= 5 - i || j >= 3 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // code number pattern
    for (int i = 1; i <= 4; i++) {
        int k = 1;
        for (int j = 1; j <= 7; j++) {
            if (j <= 5 - i || j >= 3 + i) {
                printf("%d", k);
                j < 4 ? k++ : k--;
            }
            else {
                printf(" ");
                if (j == 4)
                    k--;
            }
        }
        printf("\n");
    }

    // code character pattern
    for (int i = 1; i <= 4; i++) {
        char k = 'A';
        for (int j = 1; j <= 7; j++) {
            if (j <= 5 - i || j >= 3 + i) {
                printf("%c", k);
                j < 4 ? k++ : k--;
            }
            else {
                printf(" ");
                if (j == 4)
                    k--;
            }
        }
        printf("\n");
    }

    // genaralized code
    int lines = 26;
    for (int i = 1; i <= lines; i++) {
        char ch = 'A';
        for (int j = 1; j <= 2 * lines - 1; j++) {
            if (j <= lines - i || j >= lines + i) {
                printf("%c", ch);
                j < lines ? ch++ : ch--;
            }
            else {
                printf(" ");
                if (j == lines)
                    ch--;
            }
        }
        printf("\n");
    }

    return 0;
}