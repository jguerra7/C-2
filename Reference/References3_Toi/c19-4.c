/*
 ============================================================================
 Name        : c19-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char str[] = "XYZ";
char *p;
int itbl[] = { 10, 20, 30 }, i;
int *q;


printf("char 型は「%d」バイト\n", sizeof(char));
for ( p = str ; *p != '\0' ; p++ ) {
printf("%d 番地:%c\n", p, *p);
}
printf("int 型は「%d」バイト\n", sizeof(int));
for ( q = itbl, i = 0 ; i < 3 ; i++, q++ ) {
printf("%d 番地:%d\n", q, *q);
}
return 0; }

