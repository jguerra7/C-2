/*
 ============================================================================
 Name        : c09-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int a = 100, b = 50, c;
	c = a == b; //条件を満たさない
	printf("c=%d\n", c);
	c = a >= b; //条件を満たす
	printf("c=%d\n", c);
	c = a > 50 && b != 50; //条件を満たさない
	printf("c=%d\n", c);
	c = a == b || a <= 100; //条件を満たす
	printf("c=%d\n", c);
	return 0;




}
