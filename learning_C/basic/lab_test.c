#include <stdio.h>
#include <math.h>

int main()
{
	double radius, area;

	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);

	area = 22.0 / 7 *pow(radius,2);

	printf("\nThe area of circle with radius %lf is %lf", radius, area);

	return 0;
}
