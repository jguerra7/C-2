#include <stdio.h>

int main(void)
{
	int i, cnt, sum = 0;

	printf("正の整数を入力[1-10]：");
	scanf("%d", &cnt);

	for ( i = 1 ; i <= cnt ; i++ ) {
		sum = sum + i;
		printf("i = %2d sum = %2d\n", i, sum);
	}

	return 0;
}