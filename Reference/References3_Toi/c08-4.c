/*
 ============================================================================
 Name        : c08-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char c = 'A', s[10] = "ABCDEFG";
printf("%c[%2X]\n", c, c);
printf("%c[%2X]\n", s[2], s[2]);
printf("%s\n", s);
s[3]='\0';
printf("%s\n", s);
return 0;
}
