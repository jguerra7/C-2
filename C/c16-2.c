/*
 ============================================================================
 Name        : c16-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define P1(s)printf(s)
#define P2(s) printf(#s)
#define ADD1(x, y) x+y
#define ADD2(x, y) n##x+n##y
int main(void) {
int n1 = 50, n2 = 100;

P1("ABCDEFG\n");
P2(XYZ\n);
printf("%d\n", ADD1(100, 200));
printf("%d\n", ADD2(1, 2));
return 0; }
