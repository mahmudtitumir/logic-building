#include <stdio.h>

void binaryNum(int n)
{
    if (n > 0)
    {
        binaryNum(n / 2);
        printf("%d", n % 2);
    }
}

int digitSum(int n)
{
    if (n > 0)
        return n % 10 + digitSum(n / 10);
}

int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}

int main(int argc, char const* argv[])
{
    // code 54
    int n = 5;
    binaryNum(n);
    printf("\n");

    // code 55
    printf("%d\n", digitSum(256));

    // code 56
    int m = 3;
    printf("The Power of %d is: %d", n, power(n, m));

    return 0;
}
