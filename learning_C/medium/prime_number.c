#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(unsigned int num)
{
    if (num == 1)
    {
        return false;
    }
    if (num % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    is_prime(user_input) ? printf("%d is a prime number", user_input) : printf("%d is not a prime number", user_input);
}