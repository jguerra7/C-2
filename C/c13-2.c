/*
 ============================================================================
 Name        : c13-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
long d[5]; int a, b;
a = sizeof(long);
printf("long 型のサイズは「%d バイト」です\n", a);
b = sizeof d;
printf("配列 d のサイズは「%d バイト」です\n", b);
return 0;
}
