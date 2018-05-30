/*
 ============================================================================
 Name        : c33-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {

char a[80], b[80], *p;
int n;


strcpy(a, "abcde"); // 配列 a に文字列"abcde"をコピーする
strcpy(b, "12345"); // 配列 b に文字列"12345"をコピーする
n = strlen(a); // 文字列 a の長さを n に入れる
printf("a:%s\nb:%s\nn:%d\n", a, b, n);

strncpy(a, b, 3); // 先頭 3 文字をコピー.a は"123de"になる
printf("a:%s\n", a);

a[3] = '\0'; // a は"123"になる
printf("a:%s\n", a);

strcat(a, b); // 文字列 a に文字列 b を連結
printf("a:%s\n", a);

strncat(a, b, 4); // 文字列 a に文字列 b の先頭 4 文字を連結
printf("a:%s\n", a);

if ( strcmp(a, b) < 0 ) // 文字列 a と b を比較
printf("文字列 b が大きい\n");

if ( strncmp(a, b, 3) == 0 ) // 文字列 a と b の先頭 3 文字を比較
printf("文字列 a と b の先頭 3 文字は等しい\n");

strcpy(a, "This is a pen."); p = strchr(a, 's'); // 文字's'の位置を先頭から探す
if ( p != NULL ) {
printf("%c\n", *p); // 出力は「s」 puts(p); // 出力は「s is a pen.」
}
p = strrchr(a, 's'); // 文字's'の位置を後ろから探す
if ( p != NULL )
{

printf("%c\n", *p); // 出力は「s」 puts(p); // 出力は「s a pen.」
}
p = strstr(a, "is"); // 文字列"is"の位置を探す
if ( p != NULL )
puts(p); // 出力は「is is a pen.」
return 0; }
