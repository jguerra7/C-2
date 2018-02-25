/*
 ============================================================================
 Name        : c17-5.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
int main(void) {
char str[81]; int i;
/* NULL が入力されない間繰り返す */
while ( gets(str) != NULL ) {
for ( i = 0 ; str[i] != '\0' ; i++ )
if ( isupper(str[i]) )
str[i] = tolower(str[i]);
else if ( islower(str[i]) )
str[i] = toupper(str[i]);
else
str[i] = '*';
puts(str); }
return 0; }
