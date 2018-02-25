/*
 ============================================================================
 Name        : c10-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i, sum;/* 複数の文を制御する場合は { と } で囲む */
for ( sum = 0, i = 1 ; i <= 5 ; i++ ) {
sum = sum + i;
printf("i=%d sum=%2d\n", i, sum);
}
return 0; }
