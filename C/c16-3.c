/*
 ============================================================================
 Name        : c16-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CAL(x, y) x * y
int main(void) {
int i = 5, j = 3, ans;

ans = CAL(i + 5, j - 1);
ans = i + 5 * j - 1;
printf("ans=%d\n", ans);
return 0; }

