/*
 ============================================================================
 Name        : c18-5.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void f(void);
int main(void) {
int i;
for ( i = 0 ; i < 3 ; i++ )
f();
return 0; }
void f(void) {
static int n = 0;
printf("n=%d\n", ++n);
}
