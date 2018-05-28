#include <stdio.h>

int main(void)
{
	int a[5] = { 15, 8, 48, 50, 27 };
	int i, sum = 0, odd = 0;

	for ( i = 0 ; i < 5 ; i++ ) {
		sum += a[i];
		if ( a[i] % 2 ) odd++;
	}

	printf("配列中の値の合計：%d\n", sum);
	printf("配列中の値の平均：%.2f\n", (double)sum / 5);
	printf("配列中の奇数の数：%d\n", odd);
	printf("配列中の偶数の数：%d\n", 5 - odd);

	return 0;
}
