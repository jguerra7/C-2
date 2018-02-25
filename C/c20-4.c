/*
 ============================================================================
 Name        : c20-4c.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
/* 記号定数(マクロ) ---------------------------------------------------- */
#define S1 3
#define S2 10
/* プロトタイプ宣言 ------------------------------------------------------ */
int Get_Sumarray(int data[], int size);
/* エントリポイント Get_Sumarray 関数の動作チェック ---------------------- */
int main(void) {
int test1[S1] = { 13, 10, 15 };
int test2[S2] = { 5, 7, 2, 4, 1, 3, 10, 9, 6, 8 };
int sum1, sum2;
sum1 = Get_Sumarray(test1, S1);
sum2 = Get_Sumarray(test2, S2);
printf("test1 合計:%d\n", sum1);
printf("test2 合計:%d\n", sum2);

return 0; }
/* ----------------------------------------------------------------------- */
/* 関数名:Get_Sumarray */
/* 機 能:引数で指定された int 型配列の合計値を求める */
/* 戻り値:配列の合計値(int 型) */
/* 引 数:・int data[] :配列の先頭アドレス */
/* ・int size :配列の要素数 */
/* ----------------------------------------------------------------------- */
int Get_Sumarray(int data[], int size) {
int sum, i;
for ( i = 0, sum = 0 ; i < size ; i++ ) {
sum += data[i];
}
return sum;
}
