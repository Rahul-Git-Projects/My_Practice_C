#include <stdio.h>

int main()
{
    float rainfall[5][6] = {
        {11.2, 13.2, 15.2, 17.2, 19.2, 20.1}, {32.2, 54.2, 11.3, 93.2, 12.3, 15.4}, {11.3, 23.2, 43.2, 56.2, 23.4, 76.3}, {100.3, 44.3, 55.3, 44.6, 22.4, 87.4}, {12.3, 45.6, 33.2, 44.5, 33.2, 55.3}};

    char months[6][10] = {
        "January", "Febraury", "March", "April", "May", "June"};

    int year = 2020;

    for (int i = 0; i < 6; i++)
    {
        printf("\t%s", months[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0)
            {
                printf("\nYear %d: ", year);
                year++;
            }
            printf("%f   ", rainfall[i][j]);
        }
    }
}