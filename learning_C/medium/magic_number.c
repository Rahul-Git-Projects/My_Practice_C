#include <stdio.h>

int number_of_digits(int user_number)
{
    int count = 0;
    for (int i = 1; user_number / i >= 1; i *= 10)
    {
        count++;
    }
    return count;
}

int magic_number(int user_num)
{
    int sum = 0;
    for (;;)
    {

        for (int i = 1; user_num / i >= 1; i *= 10)
        {
            sum += (user_num % (i * 10) - user_num % i) / i;
        }

        user_num = sum;
        sum = 0;
        if (user_num == 1)
        {
            return 1;
        }
        if (number_of_digits(user_num) == 1 && user_num != 1)
        {
            return 0;
        }
    }
}

int main(void)
{
    printf("%d", magic_number(1234));
}