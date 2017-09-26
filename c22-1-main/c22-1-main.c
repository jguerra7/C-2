/*
 ============================================================================
 Name        : c22-1-main.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 /* ヘッダファイル -------------------------------------------------------- */
#include <stdio.h>
#include "c22-1-sum.h"
#include "c22-1-avg.h"
/* main 関数 エントリポイント -------------------------------------------- */
int main(void) {
int data;
// 見出しの表示
printf("合計と平均を求めます.整数値を入力してください.\n");
printf("入力を終了したい場合は,0(ゼロ)を入力してください.\n");
Init_Sum(); // 合計値の初期化 0(ゼロ)クリア
// 入力処理 0(ゼロ)が入力されるまで無限ループ
while ( 1 ) {
printf("整数値を入力:");
scanf("%d", &data);
if ( data == 0 ) {
break; // 入力値が 0(ゼロ)なら終了
}
else {
Add_Data(data); // 入力値を足し込む
}
}
// 結果(合計・平均)の表示
printf("合計:%d\n", Get_Sum());
printf("平均:%.2f\n", Get_Avg());
return 0;
}
