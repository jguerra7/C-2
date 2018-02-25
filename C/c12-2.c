/*
 ============================================================================
 Name        : c12-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 5, b = 2;
	double ans; //キャスト演算子なし
	ans = a / b;
	printf("%d/%d=%.2f\n", a, b, ans); //キャスト演算子あり
	ans = (double)a / b;
	printf("%d/%d=%.2f\n", a, b, ans);
	return 0;

}
