#include <stdio.h>

int main()
{
    unsigned int prime_array[100];
    unsigned int count = 0;
    for (int i = 3; i < 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            if (j == i - 1)
            {
                prime_array[count] = i;
                count++;
            }
        }
    }

    printf("Number of primes: %u\n", count + 1);
    printf("2 ");
    for (int k = 0; k < count; k++)
    {
        printf("%u ", prime_array[k]);
    }
}