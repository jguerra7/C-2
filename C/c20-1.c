/*
 ============================================================================
 Name        : c20-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
 /* ヘッダファイル --------------- */
#include <stdio.h>
#include <stdlib.h>


	/* プロトタイプ宣言 ------------- */
    int test(int x);
	/* エントリポイント ------------- */
    int main(void) {
	int a, b;
	printf("10 進入力:");
	scanf("%d", &a);
	b = test(a);
	printf("a=%d b=%d\n", a, b);
	return 0; }
	/* 値渡し ----------------------- */
    int test(int x) {
	printf("入力値は「%d」\n", x);
	x *= 2;
	printf("計算後は「%d」\n", x);
	return x; }





