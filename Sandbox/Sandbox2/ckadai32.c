
#include <stdio.h>

int main(void)
{
	int i, m;
	int c[10][2] = {
		{ 10000, 0 },
		{  5000, 0 },
		{  2000, 0 },
		{  1000, 0 },
		{   500, 0 },
		{   100, 0 },
		{    50, 0 },
		{    10, 0 },
		{     5, 0 },
		{     1, 0 }
	};

	printf("金額を入力：");
	scanf("%d", &m);
	while ( m < 1 || m > 9999999 ) {
		printf("金額は「1～9999999」の範囲で入力してください．\n");
		printf("金額を入力：");
		scanf("%d", &m);
	}

	printf("\n金種計算\n-------------\n");
	for ( i = 0 ; i < 10 ; i++ ) {
		while ( m >= c[i][0] ) {
			m -= c[i][0];
			c[i][1]++;
		}
		printf("%5d | %5d\n", c[i][0], c[i][1]);
	}

	return 0;
}
