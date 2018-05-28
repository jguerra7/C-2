#include <stdio.h>

int main(void)
{
	int x, y;

	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	if ( x > y )
		printf("xの方が大きいです．\n");
	else if ( x < y )
		printf("yの方が大きいです．\n");
	else
		printf("xとyは等しいです．\n");

	return 0;
}