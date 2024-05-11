/* Manual code dry and run*/
#include <stdio.h>

int main(int argc, char const* argv[])
{
    // Manual code 01
    int i, j;
    for (i = 1; i <= 5; i++)
        for (j = i + i; j <= 4; j++)
            printf("%d, ", 2 * j - 1);
    // Output: 3, 5, 7, 5, 7, 7,

    // Manual code 02
    i = 5, j = 1;
    while (i) {
        i = i * j;
        i--;
    }
    printf("%d %d\n", i, j);
    // Output: 0 120

    // Manual code 03
    int x = 1, y = 10;
    while (x < y) {
        x++;
        y--;
    }
    printf("%d %d\n", x, y);
    // Output: 6 5

    // Manual code 04
    x = 2, y = 36;
    while (x > 1) {
        while (y % x == 0) {
            y /= i;
            printf("%d ", x);
        }
        x++;
    }
    // Output: 2 2 3 3
    return 0;
}
