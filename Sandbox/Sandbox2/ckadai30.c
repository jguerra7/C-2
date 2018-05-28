
#include <stdio.h>

int main(void)
{
	int i, j, sum[5] = { 0 };
	int ten[5][3] = {
		{ 55, 67, 75 },
		{ 30, 41, 55 },
		{ 90, 85, 88 },
		{ 77, 75, 72 },
		{ 95, 65, 89 }
	};

	printf("  国語  数学  英語  |  合計\n");
	printf("--------------------+------\n");
	for ( i = 0 ; i < 5 ; i++ ) {
		for ( j = 0 ; j < 3 ; j++ ) {
			printf("%6d", ten[i][j]);
			sum[i] += ten[i][j];
		}
		printf("  |%6d\n", sum[i]);
	}	

	return 0;
}
