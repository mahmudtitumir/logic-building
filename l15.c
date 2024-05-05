#include <stdio.h>

int main() {
    // code 30
    int month;
    printf("Enter Month Number: ");
    scanf("%d", &month);
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days\n");
        break;
    case 2:
        printf("28/29 days\n");
        break;
    default:
        printf("Invalid month\n");
    }

    // code 31
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);
    if (90 < marks && marks <= 100) printf("A\n");
    else if (80 < marks && marks <= 90) printf("B\n");
    else if (70 < marks && marks <= 80) printf("C\n");
    else if (60 < marks && marks <= 70) printf("D\n");
    else if (50 < marks && marks <= 60) printf("E\n");
    else if (0 <= marks && marks <= 50) printf("F\n");
    else printf("Invalid Number\n");

    // Another way
    switch (marks) {
    case 91 ... 100:
        printf("A\n");
        break;
    case 81 ... 90:
        printf("B\n");
        break;
    case 71 ... 80:
        printf("C\n");
        break;
    case 61 ... 70:
        printf("D\n");
        break;
    case 51 ... 60:
        printf("E\n");
        break;
    case 0 ... 50:
        printf("F\n");
        break;
    default:
        printf("Invalid Number\n");
    }

    return 0;
}