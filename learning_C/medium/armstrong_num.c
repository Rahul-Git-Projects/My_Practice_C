#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void armstrong_number(int number)
{
    long sum = 0;
    int length = 0;

    int l;
    for (l = 1; (float)number / l > 1; l = l * 10)
    {
        length++;
    }
    int i;
    for (i = 10; (float)number / i > 0; i = i * 10)
    {

        sum += pow(((number % i - number % (i / 10)) / (i / 10)), length);
    }
    if (number == sum)
    {
        printf("This is an armstrong number");
    }
    else
        printf("This is not an armstrong number");
}

int main(void)
{
    armstrong_number(153);
    return 0;
}