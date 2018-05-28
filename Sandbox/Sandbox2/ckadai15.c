#include <stdio.h>

int main(void)
{
	int x, y;

	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);

	printf("大きい方は「%d」です\n", x > y ? x : y);

	return 0;
}