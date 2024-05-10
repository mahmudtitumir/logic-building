#include <stdio.h>


int swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return *x, * y;
}

/**
 * Represents an employee with an ID, name, and salary.
 */
struct employee
{
    int empId;          // Employee ID
    char name[20];      // Employee name
    float salary;       // Employee salary
};

/**
 * Takes input for an employee and returns the employee structure.
 *
 * @return The employee structure with the input values.
 */
struct employee input()
{
    struct employee emp1;
    printf("Enter ID, Name, Salary: ");
    scanf("%d", &emp1.empId);
    fflush(stdin);
    gets(emp1.name);
    scanf("%f", &emp1.salary);
    return emp1;
};



int main() {
    // code 75
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before swap a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap a = %d, b = %d\n", a, b);

    // code 76
    struct employee emp1;
    emp1 = input();
    printf("Id = %d, Name = %s, Salary = %f\n", emp1.empId, emp1.name, emp1.salary);



    return 0;
}