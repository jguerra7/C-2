/*
 ============================================================================
 Name        : c11-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i, sum;
i = 1; sum = 0;
while ( i <= 10 ) {
sum += i; i++; }
printf("1~10 までの合計は「%d」です\n", sum);
return 0; }
