

#include <stdio.h>
#include <string.h>

/* 構造体 syouhin の宣言 */
struct syouhin {
	int no;		// 商品No
	char name[10];	// 商品名
	int tanka;	// 単　価
};

/* 構造体 uriage の宣言 */
struct uriage {
	char date[11];	// 日　付
	int no;		// 商品No
	int kazu;	// 数　量
};

int main(void)
{
	char d[8][11];
	int i, j = 0, sum = 0, s[8] = { 0 }, t[8] = { 0 };
	struct syouhin slist[4] = {
		{ 1, "ABCDEFG", 1000 },
		{ 2, "MNO",     7500 },
		{ 3, "ABC123",   300 },
		{ 4, "XYZ",      100 },
	};
	struct uriage ulist[8] = {
		{ "2010/11/10", 2,  2 },
		{ "2010/11/10", 1,  5 },
		{ "2010/11/12", 4,  8 },
		{ "2010/11/13", 4, 15 },
		{ "2010/11/13", 3, 20 },
		{ "2010/11/13", 2,  3 },
		{ "2010/11/16", 1,  2 },
		{ "2010/11/16", 4, 12 }
	};

	for ( i = 0 ; i < 8 ; i++ ) {
		s[i] += slist[ulist[i].no - 1].tanka * ulist[i].kazu;
	}
	strcpy(d[0], ulist[0].date);
	t[0] += s[0];
	for ( i = 1 ; i < 8 ; i++ ) {
		if ( strcmp(d[j], ulist[i].date) ) {
			strcpy(d[++j], ulist[i].date);
		}
		t[j] += s[i];
	}

	printf("+----------+--------+\n");
	printf("|　日　付　|売上金額|\n");
	printf("+----------+--------+\n");
	for ( i = 0 ; i <= j ; i++ ) {
		printf("|%-10s|%8d|\n", d[i], t[i]);
		sum += t[i];
	}
	printf("+----------+--------+\n");
	printf("|売上総合計|%8d|\n", sum);
	printf("+----------+--------+\n");

	return 0;
}
