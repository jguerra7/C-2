
#include <stdio.h>

int main(void)
{
	int a[10] = { 10, 7, 3, 15, 12, 1, 18, 21, 25, 14 };
	int i, max, min;

	max = min = a[0];
	for ( i = 0 ; i < 10 ; i++ ) {
		if ( a[i] > max )
			max = a[i];
		else if ( a[i] < min )
			min = a[i];
	}

	printf("配列中の値の最大値：%d\n", max);
	printf("配列中の値の最小値：%d\n", min);

	return 0;
}

