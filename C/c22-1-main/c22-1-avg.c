/*
 * c22-1-avg.c
 *
 *  Created on: May 3, 2017
 *      Author: kagaya
 */

 /* ヘッダファイル -------------------------------------------------------- */
#include <stdio.h>
#include "c22-1-avg.h"
#include "c22-1-sum.h"
/* プロトタイプ宣言 ------------------------------------------------------ */
static void Put_Msg(int sum, int cnt);
/* Get_Avg 関数 ----------------------------------------------------------- */
double Get_Avg(void)
{
Put_Msg(Get_Sum(), Get_Cnt());
if ( Get_Cnt() == 0 ) {
return (double)0; }
else {
return (double)Get_Sum() / Get_Cnt(); }
}
/* Put_Msg 関数 ----------------------------------------------------------- */
static void Put_Msg(int sum, int cnt) {
printf("合計値:%d,個数:%d の平均値を求めます.\n", sum, cnt); }

