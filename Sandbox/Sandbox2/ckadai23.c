
#include <stdio.h>

int main(void)
{
	int m, d;

	printf("月を入力：");
	scanf("%d", &m);
	while ( m < 1 || m > 12 ) {
		printf("月の入力は「1以上12以下」にしてください\n");
		printf("月を入力：");
		scanf("%d", &m);
	}

	printf("日を入力：");
	scanf("%d", &d);
	while ( d < 1 || d > 31 ) {
		printf("日の入力は「1以上31以下」にしてください\n");
		printf("日を入力：");
		scanf("%d", &d);
	}

	printf("入力された日付は「%d月%d日」です\n", m, d);

	return 0;
}
