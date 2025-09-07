#include <stdio.h>
#include <stdbool.h>

int main()
{
    double height,width,perimeter,area;
    printf("height\n");
    scanf("%lf", &height);

    printf("width\n");
    scanf("%lf", &width);

    perimeter = 2*(height+width);
    area = height*width;

    printf("height of the rectangle is: %lf\n",height);
    printf("width of the rectangle is: %lf\n",width);
    printf("perimeter of the rectangle is: %lf\n",perimeter);
    printf("area of the rectangle is: %lf",area);
    
    return 0;
}