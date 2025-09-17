#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers[10];
    int sum_n = 0;
    float mean_n;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter  element %d for the array: ", i + 1);
        scanf("%d", &numbers[i]);
        sum_n += numbers[i];
    }

    mean_n = (float)sum_n / 10;
    printf("Sum: %d", sum_n);
    printf("\nThe mean of the numbers that you have provided is %f", mean_n);

    return 0;
}