#include <stdio.h>

int main(int argc, char const* argv[])
{
    /*
    // Manual code 10
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i = i - 2);
    printf("\n");
    // output: 1

    // code 23
    int num, temp;
    scanf("%d", &num);
    while (num > 0) {
        temp = num % 10;
        printf("%d", temp);
        num = num / 10;
    }
    printf("\n");

    // code 24
    int result = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        int temp;
        temp = num % 10;
        result = result * 10 + temp;
        num /= 10;
    }
    printf("%d", result);

    // code 25
    int num, count = 0, lock = 1, result = 0;
    scanf("%d", &num);
    while (num > 0) {
        int temp;
        temp = num % 10;
        if (temp == 0 && lock)
            count++;
        else
            lock = 0;
        result = result * 10 + temp;
        num /= 10;
    }
    while (count--)
        printf("0");
    printf("%d", result);
    printf("\n");
    */

    // code 26: using recursive function
    return 0;
}
