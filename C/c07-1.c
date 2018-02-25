/*
 ============================================================================
 Name        : c07-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int data; // 変数の宣言
	// データの入力(10 進数)
	printf("10 進数でデータを入力:");
	scanf("%d", &data);
	// 様々な進数で出力
	printf(" 8 進数:%o\n", data); // 8 進数:%o
	printf("10 進数:%d\n", data); // 10 進数:%d
	printf("16 進数(小文字):%x\n", data); // 16 進数(小文字):%x
	printf("16 進数(大文字):%X\n", data); // 16 進数(大文字):%X
	return 0;



}
