#include <stdio.h>
#include <stdbool.h>

void main()
{
    int minutes;
    double days,years;
    scanf("%d",&minutes);
    days = minutes/(24*60);
    years = days/365;
    printf("\n%d minutes is equal to %lf days and %lf years",minutes,days,years);

    
    

}