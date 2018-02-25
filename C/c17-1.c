/*
 ============================================================================
 Name        : c17-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int c; /* 変数確保(int 型) */
c = getchar(); /* キーボードから 1 文字入力 */
putchar(c); /* スクリーンへ 1 文字出力 */
return 0; }
