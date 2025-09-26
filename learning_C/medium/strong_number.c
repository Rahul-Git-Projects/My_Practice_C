#include <stdio.h>
#include <stdbool.h>

int factorial(int number)
{
    if (number == 0)
        return 1;
    return number * factorial(number - 1);
}

bool strong_number(void)
{
    int user_number, number_of_digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &user_number);
    for (int i = 1; user_number / i >= 1; i *= 10)
    {
        number_of_digits++;
        sum += factorial(user_number / i - (user_number / (i * 10)) * 10);
    }

    if (user_number == sum)
        return true;
    return false;
}

int main(void)
{
    printf("%u", strong_number());
}