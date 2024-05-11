#include <stdio.h>

int main() {
    // code 29
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // code number pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // code star pattern
    int lines = 5;
    int cols = lines * 2 - 1;
    for (int i = 1;i <= lines;i++) {
        for (int j = 1; j <= cols; j++) {
            if (j >= lines - i + 1 && j <= lines + i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // code number pattern
    for (int i = 1; i <= lines; i++) {
        n = 1;
        for (int j = 1;j <= cols; j++) {
            if (j >= lines - i + 1 && j <= lines + i - 1) {
                printf("%d", n);
                j < lines ? n++ : n--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}