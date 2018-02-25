/*
 ============================================================================
 Name        : c25-5.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
int x;
int *y;
int **z;
char *str[4];
char **p;
x = 100; /* 変数に値を設定 */
y = &x; /* ポインタに変数のアドレスを設定 */
z = &y; /* ポインタのポインタにポインタのアドレスを設定 */
printf(" x=%d\n *y=%d\n**z=%d\n", x, *y, **z);
p = str;
str[0] = "abc";     /* ┐ */
*(str + 1) = "def"; /* │※色々な指定でポインタ配列に */
*(p + 2) = "ghi";   /* │ 文字列(アドレス)を設定 */
p[3] = "jkl";       /* ┘ */

puts(p[0]);       /* ┐ */
puts(*(p + 1));   /* │※色々な指定で文字列を出力 */
puts(*(str + 2)); /* │ */
puts(str[3]);     /* ┘ */
return 0; }
