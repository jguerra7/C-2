/*
 ============================================================================
 Name        : c08-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int d8, d10, d16; double f, fe;
d8 = 0123; /* 8 進数の 123 */
d10 = 123; /* 10 進数の 123 */
d16 = 0x123; /* 16 進数の 123 */
f = 1.2345; /* 小数点表現 */
fe = 5e3; /* 指数表現 */
printf(" d8=%4d\nd10=%4d\nd16=%4d\n", d8, d10, d16);
printf(" f=%7.2f\n fe=%7.2f\n", f, fe);
return 0;

}
