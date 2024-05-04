#include <stdio.h>

int main() {
    // Manual code 05
    int x = (1, 2, 3);
    while (x) {
        printf("%d ", x);
        x--;
    }
    printf("\n");
    // Output: 3 2 1

    // Manual code 06
    int y;
    x = (1, 2, 3);
    printf("%d ", x);
    printf("\n");
    // Output: 3

    // Manual code 07
    x = 1, 2, 3;
    printf("%d\n", x);
    // Output: 1

    // Manual code 08
    x = 128;
    for (;x; x >>= 1)
        printf("%d ", x);
    printf("\n");
    // Output: 128 64 32 16 8 4 2 1

    // Manual code 09
    int a, s;
    for (a = 5, s = 0, x = 1; a;x <<= 1, a--)
        s += x;
    printf("%d\n", s);
    return 0;
}