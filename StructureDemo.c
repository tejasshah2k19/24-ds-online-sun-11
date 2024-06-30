#include <stdio.h>

struct employee
{
    char empName[30];
    char department[30];
    int basicSalary;
    int hra;
    int tax;
    int allowance;
    int salary;
};

int main()
{

    struct employee s[10];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter name , department name and basic Salary");
        scanf("%s%s%d", &s[i].empName, &s[i].department, &s[i].basicSalary);
        s[i].allowance = 1500;
        s[i].hra = s[i].basicSalary * 0.05;
        s[i].tax = s[i].basicSalary * 0.10;
        s[i].salary = s[i].basicSalary + s[i].allowance + s[i].hra - s[i].tax;
    }

    printf("\nName         DeptName        BasicSalary   Salary");
    for (i = 0; i < 3; i++)
    {
        printf("\n %-20s%-20s%-6d%-6d", s[i].empName, s[i].department, s[i].basicSalary, s[i].salary);
    }

    return 0;
}