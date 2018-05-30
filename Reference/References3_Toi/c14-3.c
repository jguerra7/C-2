/*
 ============================================================================
 Name        : c14-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char t[] = "0123456789";
char s[3][10] = {
"Japan", "America", "Russian" };
int i, j;
printf("%s\n", t);
for ( i = 0 ; i < 3 ; i++ )
printf("%s\n", s[i]);
for ( i = 0, j = 0 ; i < 3 ; i++, j++ )
printf("%c", s[i][j]);
printf("\n%s\n", s);
return 0;

}
