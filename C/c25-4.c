/*
 ============================================================================
 Name        : c25-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char *namep[3] = {
"Japan", "America", "Russian" };
char **p; /* ポインタのポインタを宣言 */ int i;
p = namep;
for ( i = 0 ; i < 3 ; i++, p++ ) {
printf("%c %s\n", *namep[i], namep[i]);
printf("%c %s\n", **p, *p); }
p = namep; for ( i = 0 ; i < 3 ; i++ ) {
printf("%c", **(p + i));
printf("%c", *(*p + i));
printf("%c\n", *(*(p + i) + i)); }
return 0; }
