#include <stdio.h>

void naturalNum(int n)
{
    if (n > 0) {
        naturalNum(n - 1);
        printf("%d ", n);
    }
}

void revNaturalNum(int n) {
    if (n > 0) {
        printf("%d ", n);
        revNaturalNum(n - 1);
    }
}

void sqNum(int n) {
    if (n > 0) {
        sqNum(n - 1);
        printf("%d ", n * n);
    }
}


void evenNum(int n) {
    if (n > 0) {
        evenNum(n - 1);
        if (n % 2 == 0)
            printf("%d ", n);
    }
}

void oddNum(int n) {
    if (n > 0) {
        oddNum(n - 1);
        if (n % 2 == 1)
            printf("%d ", n);
    }
}

int sqSum(int n) {
    if (n == 1)
        return 1;
    return n * n + sqSum(n - 1);
}

int sumNum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumNum(n - 1);
}

int evenSum(int n) {
    if (n == 1)
        return 2;
    return 2 * n + evenSum(n - 1);
}

int oddSum(int n) {
    if (n == 1)
        return 1;
    return 2 * n - 1 + oddSum(n - 1);
}

void cudeNum(int n) {
    if (n > 0) {
        cudeNum(n - 1);
        printf("%d ", n * n * n);
    }
}


int main(int argc, char const* argv[]) {
    naturalNum(10);
    printf("\n");

    revNaturalNum(10);
    printf("\n");

    sqNum(10);
    printf("\n");

    evenNum(10);
    printf("\n");

    printf("%d\n", sqSum(10));

    printf("%d\n", sumNum(10));

    printf("%d\n", evenSum(10));

    printf("The Sum of N Odd Number: %d\n", oddSum(10));

    // code 51
    cudeNum(10);

    return 0;
}
