/*
 ============================================================================
 Name        : co7-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int id; // 整数型 int
double dd; // 倍精度実数型 double
printf("整数と実数を空白で区切って入力:");
scanf("%d %lf", &id, &dd); // 複数のデータを一度に入力
// フィールド幅を指定して出力
printf(" 5 桁で出力:|%5d|%-5d|%05d|\n", id, id, id);
printf("全体 5 桁,小数点以下 2 桁で出力:%5.2f\n", dd);
printf("小数点以下 2 桁で出力 :%.2f\n", dd);
return 0;

}
