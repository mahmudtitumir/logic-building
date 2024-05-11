#include <stdio.h>

int main() {
    /*
    // code 16
    for (int i = 'a'; i <= 'z'; i++)
        printf("%c ", i);

    printf("\n");
    // code 17
    for (int i = 'A'; i <= 'Z'; i++)
        printf("%c ", i);

    // code 18
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum of first %d natural numbers is %d\n", n, sum);

    // code 19
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; i++)
        if (i % 2 == 1) sum += i;
    printf("Sum of first %d odd numbers is %d\n", n, sum);

    // code 20
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n * 2; i++)
        if (i % 2 == 0) sum += i;
    printf("Sum of first %d even numbers is %d\n", n, sum);

    // code 21
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        s += i;
        printf("%d ", s);
    }
    */

    // code 22
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        s += i;
        printf("%d ", i * i + 1);
    }
    return 0;
}