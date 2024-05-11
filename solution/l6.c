#include <stdio.h>

int main() {
    // code 10
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // logic 01
    if (a > b) {
        if (a > c) {
            printf("%d\n", a);
        }
        else {
            printf("%d\n", c);
        }
    }
    else {
        if (b > c) {
            printf("%d\n", b);
        }
        else {
            printf("%d\n", c);
        }
    }
    // logic 02
    if (a >= b && a >= c)
        printf("%d\n", a);
    else if (b >= a && b >= c)
        printf("%d\n", b);
    else
        printf("%d\n", c);
    // logic 03
    printf("%d\n", (a > b ? (a > c ? a : c) : (b > c ? b : c)));
    return 0;
}