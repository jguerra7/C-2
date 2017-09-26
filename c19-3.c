/*
 ============================================================================
 Name        : c19-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int itbl[3] = { 10, 20, 30}; int *p = itbl;
printf("itbl[0]:%d *p:%d\n", itbl[0], *p);
printf("itbl[1]:%d p[1]:%d\n", itbl[1], p[1]);
printf(" *(p+2):%d *(itbl+2):%d\n", *(p+2), *(itbl+2));
return 0; }

