#include <stdio.h>

int productNum(int n) {
    if (n == 1)
        return 1;
    else
        return n * productNum(n - 1);
}

int fact(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main(int argc, char const* argv[]) {
    int n = 5;

    // code 52
    printf("The product of %d is %d\n", n, productNum(n));

    // code 53
    printf("The factorial of %d is %d\n", n, fact(5));

    return 0;
}
