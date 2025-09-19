#include <stdio.h>

int factorial(unsigned n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    unsigned user_n;
    printf("Enter a number: ");
    scanf("%u", &user_n);
    printf("%u! = %d", user_n, factorial(user_n));
    return 0;
}