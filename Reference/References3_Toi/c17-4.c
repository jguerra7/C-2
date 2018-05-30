/*
 ============================================================================
 Name        : c17-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char str[81]; /* 文字列を格納する char 型配列 */
gets(str); /* char 型配列 str に 1 行入力 */
puts(str); /* char 型配列 str の文字列を出力 */
return 0; }
