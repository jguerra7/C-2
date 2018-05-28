
#include <stdio.h>

int main(void)
{
	int i, a[10];

	printf("配列にデータを入力\n");
	for ( i = 0 ; i < 10 ; i++ ) {
		printf("%2d件目の入力：", i + 1);
		scanf("%d", &a[i]);
		while ( a[i] < 0 || a[i] > 100 ) {
			printf("入力値は「0以上100以下」にしてください\n");
			printf("%2d件目の入力：", i + 1);
			scanf("%d", &a[i]);
		}
	}

	printf("\n配列内容一覧\n");
	for ( i = 0 ; i < 10 ; i++ )
		printf("%2d件目：%d\n", i + 1, a[i]);

	return 0;
}
