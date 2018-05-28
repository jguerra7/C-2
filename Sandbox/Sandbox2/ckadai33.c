
#include <stdio.h>

int main(void)
{
	int i, y, m, e, w = 1, leap = 0;
	int days[2][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
	};

	printf("万年カレンダー\n");
	printf("年を入力：");
	scanf("%d", &y);
	while ( y < 1 || y > 9999 ) {
		printf("年は「1～9999」の範囲で入力してください．\n");
		printf("年を入力：");
		scanf("%d", &y);
	}
	printf("月を入力：");
	scanf("%d", &m);
	while ( m < 1 || m > 12 ) {
		printf("月は「1～12」の範囲で入力してください．\n");
		printf("月を入力：");
		scanf("%d", &m);
	}

	if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 )
		leap = 1;
	for ( i = 1 ; i < y ; i++ )
		if ( i % 4 == 0 && i % 100 != 0 || i % 400 == 0 )
			w += 366;
		else
			w += 365;
	e = days[leap][m - 1];
	for ( i = 1 ; i < m ; i++ )
		w += days[leap][i - 1];
	w %= 7;

	printf("\n%d年%d月のカレンダー\n", y, m);
	printf("----------------------------\n");
	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
	printf("----------------------------\n");
	for ( i = 0 ; i < w ; i++ )
		printf("    ");
	i = 1;
	while ( i <= e ) {
		while ( w < 7 && i <= e ) {
			printf("	%2d", i++);
			w++;
		}
		printf("\n");
		w = 0;
	}
	printf("----------------------------\n");

	return 0;
}
