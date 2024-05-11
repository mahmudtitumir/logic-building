#include <stdio.h>

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

void printPrime(int a, int z)
{
    for (int x = a; x <= z; x++)
    {
        if (isPrime(x))
            printf(" %d,", x);
    }
}

int nextPrime(int n)
{
    for (int i = n + 1;; i++)
    {
        if (isPrime(i) == 1)
        {
            return i;
            break;
        }
    }
}

int main(int argc, char const* argv[])
{
    printf("%d\n", isPrime(7));

    printPrime(1, 100);
    printf("\n");

    printf("%d\n", nextPrime(97));
    printf("\n");

    return 0;
}
