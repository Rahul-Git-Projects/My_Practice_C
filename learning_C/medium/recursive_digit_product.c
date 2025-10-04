#include <stdio.h>

int number_of_digits(int num)
{
    int count = 0;
    if (num != 0)
    {
        for (int i = 1; num / i >= 1; i *= 10)
        {
            count++;
        }
        return count;
    }
    else
        return 1;
}
int recursive_digit_product(int user_num)
{
    int product = 1;
    for (int i = 1; user_num / i >= 1; i *= 10)
    {
        product *= (user_num / i) % 10;
    }
    if (number_of_digits(product) == 1)
        return product;
    else
        recursive_digit_product(product);
}

int main(void)
{
    printf("%d", recursive_digit_product(1234));
    return 0;
}