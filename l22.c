#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2)
        return (n - 1);
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char const* argv[])
{
    // code 57
    // 0 1 1 2 3 5 8 13 21 34 ....
    int n = 8;
    printf("The %dth terms of fibbonacci series %d\n", n, fib(n));
    return 0;
}
