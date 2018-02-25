/*
 ============================================================================
 Name        : c10-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i, sum = 0;/* 1 から 5 までの合計を求める */
for ( i = 1 ; i <= 5 ; i++ ){
sum = sum + i;
}
printf("sum=%d\n", sum); /* 結果出力 */
return 0; }

