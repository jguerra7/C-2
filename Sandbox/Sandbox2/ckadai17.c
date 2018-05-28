#include <stdio.h>

int main(void)
{
	int x;

	printf("整数値を入力してください：");
	scanf("%d", &x);

	switch ( x ) {
		case 0:
			printf("零です\n");
			break;
		case 1:
			printf("壱です\n");
			break;
		case 2:
			printf("弐です\n");
			break;
		default:
			printf("零でも壱でも弐でもありません\n");
	}

	return 0;
}
