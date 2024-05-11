#include <stdio.h>

int main() {
    /*
    // code 08
    int num;
    scanf("%d", &num);
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    */
    // code 09
    int num;
    scanf("%d", &num);
    if (num % 2)
        printf("Odd\n");
    else
        printf("Even\n");
    // code 9 without mudulo operator
    if (num / 2 * 2 == num)
        printf("Even\n");
    else
        printf("Odd\n");
    // code 9 without division(bitwise operator)
    if ((num & 1) == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}