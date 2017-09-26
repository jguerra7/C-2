/*
 ============================================================================
 Name        : c07-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int y, m, d;
// フィールド幅を指定して入力
printf("日付入力 YYYYMMDD:");
scanf("%4d%2d%2d", &y, &m, &d);
// フィールド幅を指定して出力
printf("日付は「%04d/%02d/%02d」です.\n", y, m, d);
return 0; }
