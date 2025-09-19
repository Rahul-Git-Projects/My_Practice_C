#include <stdio.h>

void fibonocci(unsigned num)
{
    unsigned term = 1;
    unsigned prev_num = 1;
    unsigned prev_prev_num = 0;

    for (int i = 0; i < num; i++)
    {
        printf("%u ", term);
        term = prev_num + prev_prev_num;
        prev_prev_num = prev_num;
        prev_num = term;
    }
}

int main(void)
{
    fibonocci(6);
    return 0;
}