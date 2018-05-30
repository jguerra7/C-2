/*
 ============================================================================
 Name        : c25-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char str1[10] = "ABC";
char str2[10];
char *p1, *p2;
p1 = str1; /* str1 の先頭アドレスを設定 */
p2 = str2; /* str2 の先頭アドレスを設定 */
while ( *p2++ = *p1++ ); /* 文字列のコピー(空文) */
p1 = str1;
printf("str1:%s p1:%s\n", str1, p1);

p2 = str2; while ( *p2 )
putchar(*p2++);

return 0; }
