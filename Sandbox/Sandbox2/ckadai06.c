

#include <stdio.h>

int main(void)
{
	double x, y;

	x = 5.5;	/* xに5.5を代入 */
	y = 3.8;	/* yに3.8を代入 */

	printf("x=%.2f\n", x);
	printf("y=%.2f\n", y);
	printf("x+y=%9.4f\n", x + y);
	printf("x*y=%9.4f\n", x * y);

	return 0;
}

