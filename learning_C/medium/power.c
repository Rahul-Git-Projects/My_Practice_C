#include <stdio.h>

int power(int num1, int num2)
{
    if (num2 == 0)
        return 1;
    else
        return num1 * power(num1, num2 - 1);
}

int main(void)
{
    printf("%d", power(2, 3));
    return 0;
}