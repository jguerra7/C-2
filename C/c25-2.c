/*
 ============================================================================
 Name        : c25-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char str[10] = "Japan";
char *p1 = str;
char *p2 = "America";
printf("%s\n%s\n", p1, p2);
while ( *p2 != 'r' ) {
putchar(*p2++);
putchar('\n'); }
return 0; }
