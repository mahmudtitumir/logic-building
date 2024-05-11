#include <stdio.h>

int main() {
    /*
    // code 11
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is divisible by 2\n", a);
    else if (a % 3 == 0)
        printf("%d is divisible by 3\n", a);
    else if (a % 5 == 0)
        printf("%d is divisible by 5\n", a);
    else
        printf("%d is not divisible by 2, 3, 5\n", a);
    // code 12
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    // code 13
    while (n) {
        printf("%d ", n);
        n--;
    }
    */
    // code 14
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; i++)
        if (i % 2 == 0)
            printf("%d ", i);

    printf("\n");
    // code 15
    for (int i = 1; i <= n * 2; i++)
        if (i % 2 == 1)
            printf("%d ", i);

    return 0;
}