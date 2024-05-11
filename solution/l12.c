#include <stdio.h>
#include <math.h>
int main()
{
    // Manual code 11
    int a, b;
    for (a = 1;a <= 5;a++) {
        for (b = 1; b <= 2 * a - 1;b++)
            printf("%d ", b);
        printf("\n");
    }
    // output:
    // 1
    // 1 2 3
    // 1 2 3 4 5
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7 8 9

    // code 27
    int num, i;
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is Not Prime\n", num);
            break;
        }
    }
    if (i == num)
        printf("%d is Prime\n", num);

    // code 27 efficient way-1
    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is Not Prime\n", num);
            break;
        }
    }
    if (i == num / 2)
        ("%d is Prime\n", num);

    // code 27 efficient way-2
    int sqNum;
    sqNum = sqrt(num);
    int result = 0;
    for (i = 2; i <= sqNum; i++)
        if (num % i == 0)
            result = 1;
    if (result == 0)
        printf("%d is Prime\n", num);
    else
        printf("%d is Not Prime\n", num);

    // code 28
    int n, temp;
    printf("Enter 1 to N number to print prime numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; i++) {
        temp = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                temp++;
                break;
            }
        }
        if (temp == 0) printf("%d ", i);
    }
    return 0;
}
