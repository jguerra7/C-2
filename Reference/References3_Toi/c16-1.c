

#include <stdio.h>
#define SIZE 5
#define SYOUHIZEI 0.05
int main(void) {
int syouhin[SIZE][2] = { /* 商品コード,単価 */

		{ 1, 100}, { 2, 50}, { 3, 150}, { 4, 80}, { 5, 130}

};
int i, s_code, s_kazu, kin, zei;
/* 商品コード入力 */ while ( 1 ) {
printf("商品コードを入力:");
scanf("%d", &s_code);
/* 入力された商品コードが存在するか検索 */
for ( i = 0 ; i < SIZE ; i++ ) {
if ( s_code == syouhin[i][0] ) {

break; } }
if ( i == SIZE ) {
printf("入力された商品コードは存在しません\n");
printf("再入力してください\n"); }
else {
break; } }
/* 数量を入力 */
printf("数量を入力:");
scanf("%d", &s_kazu);
/* 金額の計算 */
kin = syouhin[i][1] * s_kazu;
zei = kin * SYOUHIZEI;
/* 結果の表示 */
printf("購入金額:%5d\n", kin);
printf(" 消費税:%5d\n", zei);
printf(" 合計:%5d\n", kin + zei);
return 0;

}
