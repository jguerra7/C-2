#include <stdio.h>

int main(void)
{
	int x;

	printf("整数値を入力してください：");
	scanf("%d", &x);

	if ( x == 0 )
		printf("零です\n");
	else if ( x == 1 )
		printf("壱です\n");
	else if ( x == 2 )
		printf("弐です\n");
	else
		printf("零でも壱でも弐でもありません\n");

	return 0;
}
