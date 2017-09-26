/*
 ============================================================================
 Name        : c19-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
int main(void) {
int itbl[SIZE] = { 10, 20, 30}, i;
int *p_itbl;
long ltbl[SIZE] = {100, 200, 300};
long *p_ltbl;

p_itbl = itbl; /* 配列 itbl の先頭アドレスを設定 */
for ( i = 0 ; i < SIZE ; i++ )
printf("itbl[%d]=%3d ", i, *(p_itbl + i));
putchar('\n');
i = 0;
p_ltbl = ltbl;/* 配列 ltbl の先頭アドレスを設定 */
while ( i < SIZE )
printf("ltbl[%d]=%3ld ", i++, *p_ltbl++);
putchar('\n');
return 0; }
