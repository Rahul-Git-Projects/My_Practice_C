#include <stdio.h>

void fibonocci(int n)
{
    int prevprevnum = 1, prevnum = 1, num = prevprevnum + prevnum;
    if (n == 1)
        printf("1");
    else if (n == 2)
        printf("1 1");

    if (n > 2)
    {
        printf("1 1 ");
        for (int i = 3; i <= n; i++)
        {
            printf("%d ", num);
            prevprevnum = prevnum;
            prevnum = num;
            num = prevnum + prevprevnum;
        }
    }
}

int main(void)
{
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    fibonocci(user_input);
    return 0;
}