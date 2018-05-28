
/* ヘッダファイル ------------------------------------------------------ */
#include <stdio.h>
#include "ckadai46-m1.h"

/* 記号定数 ------------------------------------------------------------ */
#define SIZE 5

/* プロトタイプ宣言 ---------------------------------------------------- */
void Putarray(const int *p, int size);

/* エントリポイント ---------------------------------------------------- */
int main(void)
{
	int data[SIZE] = { 10, 8, 15, 4, 6 };
	int *min;

	printf("配列内容\n");
	Putarray(data, SIZE);	 //配列の内容を表示

	min = Getminaddress(data, SIZE);
	printf("最小値は「%d」です\n", *min);

	Sortasc(data, SIZE);
	printf("\n昇順にソート\n");
	Putarray(data, SIZE);

	return 0;
}

/* --------------------------------------------------------------------- */
/* 関数名：Putarray							 */
/* 機　能：int型配列の内容を画面に表示する				 */
/* 戻り値：なし								 */
/* 引　数：const int *p	：　配列の先頭番地				 */
/*	 　int size	：　配列の要素数				 */
/* --------------------------------------------------------------------- */
void Putarray(const int *p, int size)
{
	int i;

	for ( i = 0 ; i < size ; i++, p++ ) {
		printf("Array[%d]=%d\n", i, *p);
	}
}
