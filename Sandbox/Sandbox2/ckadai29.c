
#include <stdio.h>

int main(void)
{
	int i, j, sum = 0, temp, a[10];

	printf("配列にデータを入力\n");
	for ( i = 0 ; i < 10 ; i++ ) {
		printf("%2d件目の入力：", i + 1);
		scanf("%d", &a[i]);
		while ( a[i] < 0 || a[i] > 100 ) {
			printf("入力値は「0以上100以下」にしてください\n");
			printf("%2d件目の入力：", i + 1);
			scanf("%d", &a[i]);
		}
		sum += a[i];
	}
	for ( i = 0 ; i < 10 ; i++ )
		for ( j = i ; j < 10 ; j++ )
			if ( a[i] < a[j] ) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

	printf("\n配列内容一覧（降順にソート済み）\n");
	for ( i = 0 ; i < 10 ; i++ )
		printf("%2d件目：%3d\n", i + 1, a[i]);
	printf("\n　合計：%3d\n", sum);
	printf("　平均：%6.2f\n", (double)sum / 10);
	printf("最大値：%3d\n", a[0]);
	printf("最小値：%3d\n", a[9]);

	return 0;
}
