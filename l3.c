#include <stdio.h>

int main() {
    /*
    // code 04
    int r;
    scanf("%d", &r);
    printf(" The Radius is %f", 3.14 * r * r);
    // code 05
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c)
            printf("%d is the largest number", a);
        else
            printf("%d is the largest number", c);
    }
    else {
        if (b > c)
            printf("%d is the largest number", b);
        else
            printf("%d is the largest number", c);
    }
    */
    // code 06
    int a;
    scanf("%d", &a);
    printf("Last digit is %d", a % 10);
    return 0;
}