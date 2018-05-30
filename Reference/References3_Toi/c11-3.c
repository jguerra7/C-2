/*
 ============================================================================
 Name        : c11-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int a;
for ( a = 1 ; a <= 9 ; a++ ) {
printf("%3d", a);
if ( a % 3 == 0 ) {
printf("\n");
}
}
return 0;
}
