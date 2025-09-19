#include <stdio.h>

unsigned gcd(unsigned num1, unsigned num2)
{
    unsigned gcd_num = 1;
    if (num1 >= num2)
    {
        for (int i = 2; i <= num2; i++)
        {
            if (num2 % i == 0 && num1 % i == 0)
            {
                gcd_num = i;
            }
        }
    }
    else
    {
        for (int j = 2; j <= num1; j++)
        {
            if (num1 % j == 0 && num2 % j == 0)
            {
                gcd_num = j;
            }
        }
    }
    if (num1 == 0)
    {
        return num2;
    }
    else if (num2 == 0)
    {
        return num1;
    }

    return gcd_num;
}

float absolute(float num)
{
    if (num < 0)
    {
        num += 2 * num;
        return num;
    }
    else
    {
        return num;
    }
}

int main()
{
    unsigned greatest_common_divisor = gcd(24, 42);
    printf("%u", greatest_common_divisor);
}