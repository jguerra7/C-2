#include <stdio.h>

int main(void)
{
	int x, y;

	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	if ( x != y )
		printf("xとyは等しくありません\n");
	else
		printf("xとyは等しいです\n");

	return 0;
}
