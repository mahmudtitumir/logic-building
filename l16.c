#include <stdio.h>
/*
void twosum() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}
void twosum(int a, int b) {
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}
int twosum() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}
*/
int twosum(int a, int b) {
    return a + b;
}

float areacircle(float r) {
    return 3.14 * r * r;
}

int isEven(int n) {
    return n % 2 == 0;
}

int fact(int n) {
    int temp = 1;
    while (n) {
        temp *= n;
        n--;
    }
    return temp;
}

int comb(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    // code 33
    // twosum();
    // twosum(54, 28);
    // printf("%d\n", twosum());
    // printf("%d\n", twosum(54, 28));

    // code 34
    printf("%.2f\n", areacircle(7));

    // code 35
    if (isEven(7))
        printf("Even\n");
    else
        printf("Odd\n");

    // code 36
    printf("%d\n", fact(5));

    // code 37
    printf("%d\n", comb(5, 2));

    return 0;
}