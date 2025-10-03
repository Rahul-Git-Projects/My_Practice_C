#include <stdio.h>

void squared(int *num)
{
    *num = (*num) * (*num);
    return;
}

int main(void)
{
    int a = 4;
    squared(&a);
    printf("%d", a);
    return 0;
}