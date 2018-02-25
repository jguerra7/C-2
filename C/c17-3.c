/*
 ============================================================================
 Name        : c17-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
int main(void) {
int c;
/* EOF が入力されない間繰り返す */
while ( (c = getchar()) != EOF ) {
if ( isupper(c) ) /* 英大文字か判定 */
	c = tolower(c); /* 大文字→小文字 */
putchar(c); /* 1 文字出力 */ }
return 0; }

