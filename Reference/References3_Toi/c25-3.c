/*
 ============================================================================
 Name        : c25-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char namev[3][10] = {
"Japan", "America", "Russian" };
char *namep[3] = {
"Japan", "America", "Russian" };
int i;
for ( i = 0 ; i < 3 ; i++ ) {
printf("%s\n",namev[i]);
printf("%s\n",namep[i]); }
for ( i = 0 ; i < 3 ; i++ )
printf("%c\n",*namep[i]);
for ( i = 0 ; i < 3 ; i++ )
printf("%c\n",*(namep[i] + i));
return 0; }
