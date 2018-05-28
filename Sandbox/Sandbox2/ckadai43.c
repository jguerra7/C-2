
/* ヘッダファイル ----------------------------------------------------- */
#include <stdio.h>

/* 記号定数（マクロ） ------------------------------------------------- */
#define S1 3
#define S2 10

/* プロトタイプ宣言 --------------------------------------------------- */
int Get_Maxarray(int *data, int size);
int Get_Minarray(int *data, int size);

/* エントリポイント　テスト用 ----------------------------------------- */
int main(void)
{
	int test1[S1] = { 13, 10, 15 };
	int test2[S2] = { 5, 7, 2, 4, 1, 3, 10, 9, 6, 8 };
	int max, min;

	max = Get_Maxarray(test1, S1);
	min = Get_Minarray(test1, S1);
	printf("test1最大：%d, test1最小：%d\n", max, min);

	max = Get_Maxarray(test2, S2);
	min = Get_Minarray(test2, S2);
	printf("test2最大：%d, test2最小：%d\n", max, min);
	
	return 0;
}

/* -------------------------------------------------------------------- */
/* 関数名：Get_Maxarray							*/
/* 機　能：引数で指定されたint型配列中の最大値を求める			*/
/* 戻り値：配列中の最大値（int型）					*/
/* 引　数：・int *data：　配列の先頭アドレス				*/
/*	 　・int size ：　配列の要素数					*/
/* -------------------------------------------------------------------- */
int Get_Maxarray(int *data, int size)
{
	int i, max;

	max = data[0];
	for ( i = 1 ; i < size ; i++ )
		if ( data[i] > max )
			max = data[i];

	return max;
}

/* -------------------------------------------------------------------- */
/* 関数名：Get_Minarray							*/
/* 機　能：引数で指定されたint型配列中の最小値を求める			*/
/* 戻り値：配列中の最小値（int型）					*/
/* 引　数：・int *data：　配列の先頭アドレス				*/
/*	 　・int size ：　配列の要素数					*/
/* -------------------------------------------------------------------- */
int Get_Minarray(int *data, int size)
{
	int i, min;

	min = data[0];
	for ( i = 1 ; i < size ; i++ )
		if ( data[i] < min )
			min = data[i];

	return min;
}
