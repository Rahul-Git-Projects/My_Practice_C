#include <stdio.h>

struct employee
{
    char name[100];
    int hireDate;
    int salary;
};

typedef struct employee emp;

emp employee1 = {"John", 23, 100000};
emp employee2;

int main(void)
{
    scanf("%s %d %d", &employee2.name, &employee2.hireDate, &employee2.salary);
    printf("name:%s %s\nhire date: %d %d\nsalary: %d %d", employee1.name, employee2.name, employee1.hireDate, employee2.hireDate, employee1.salary, employee2.salary);
    return 0;
}