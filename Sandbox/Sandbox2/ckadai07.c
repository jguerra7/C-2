#include <stdio.h>

int main(void)
{
	double x, y;

	printf("x=");
	scanf("%lf", &x);
	printf("y=");
	scanf("%lf", &y);

	printf("x+y=%.3f\n", x + y);
	printf("x-y=%.3f\n", x - y);
	printf("x*y=%.3f\n", x * y);
	printf("x/y=%.3f\n", x / y);

	return 0;
}