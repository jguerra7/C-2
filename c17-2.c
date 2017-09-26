/*
 ============================================================================
 Name        : c17-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int c;
c = getchar(); /* 最初の文字入力 */
while ( c != EOF ) {
putchar(c);
c = getchar(); /* 2 文字目以降の入力 */ }
return 0; }
