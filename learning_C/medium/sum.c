#include <stdio.h>

int sum(int num1, int num2)
{
    int carry;
    while (num2 != 0)
    {
        carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
    return num1;
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", sum(a, b));
    return 0;
}