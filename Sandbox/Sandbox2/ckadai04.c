#include <stdio.h>

int main(void)
{
	int x, y;

	printf("x=");		/* xの入力をうながす */
	scanf("%d", &x);	/* xの入力 */
	printf("y=");		/* yの入力をうながす */
	scanf("%d", &y);	/* yの入力 */

	printf("x+y=%d\n", x + y);
	printf("x-y=%d\n", x - y);
	printf("x*y=%d\n", x * y);
	printf("x/y=%d\n", x / y);
	printf("x%%y=%d\n", x % y);

	return 0;
}
