#include <stdio.h>

int main() {
    /*
    // code 07
    int a = 10,
        b = 20;
    printf("Before Swap a = %d and b = %d\n", a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap a = %d and b = %d\n", a, b);
    */
    // code 07 with third variable
    int a = 10,
        b = 20;
    printf("Before Swap a = %d and b = %d\n", a, b);
    // using addition and subtraction
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // using multiplication and division
    // a = a * b;
    // b = a / b;
    // a = a / b;
    // using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Swap a = %d and b = %d\n", a, b);
    return 0;
}