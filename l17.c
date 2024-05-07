#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    return max;
}
/*
int main(int argc, char const* argv[])
{
    printf("%d\n", max_of_four(1, 2, 3, 4));
    return 0;
}
*/

int main()
{
    int n, p;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        p = n;
        int r = (i <= n) ? i : 2 * n - i;

        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= r && j <= 2 * n - r)
                printf("%d ", p);
            else {
                if (j < 4) {
                    printf("%d ", p);
                    p--;
                }
                else {
                    p++;
                    printf("%d ", p);
                }
            }
        }
        printf("\n");
    }
    return 0;
}


