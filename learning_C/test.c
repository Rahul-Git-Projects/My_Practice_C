#include <stdio.h>

void update(int *a, int *b)
{

    if (*a >= *b)
    {
        *b = *a - *b;
        *a = 2 * (*a) - *b;
    }
    else
    {
        *b = *b - *a;
        *a = *b + 2 * (*a);
    }

    return;
}

int main(void)
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    update(&a, &b);
    printf("%d\n%d", a, b);
}