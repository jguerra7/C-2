/*
 ============================================================================
 Name        : c18-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
int main(void) {
char c1 = 'a', c2 = 'B', c3 = 'c';
printf("変換前:%c%c%c\n", c1, c2, c3);
if ( 'a' <= c1 && c1 <= 'z' ) {
c1 -= 0x20; /* 英小文字 → 英大文字 */ }
if ( 'a' <= c2 && c2 <= 'z' ) {
c2 -= 0x20; /* 英小文字 → 英大文字 */ }
if ( 'a' <= c3 && c3 <= 'z' ) {
c3 -= 0x20; /* 英小文字 → 英大文字 */ }
printf("変換後:%c%c%c\n", c1, c2, c3);
return 0; }
