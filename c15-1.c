/*
 ============================================================================
 Name        : c15-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



 #include <stdio.h>
#include <ctype.h>
int main(void) {
char str[81], org[81];
int i, cnt;
printf("半角文字列を入力:");
scanf("%s", str);
/* 空文による文字列のコピー */
for ( i = 0 ; org[i] = str[i] ; i++ );

cnt = 0; i = 0;
while ( str[i] != '\0' ) {
if ( islower(str[i]) ) {
cnt++; str[i] =
toupper(str[i]);
}
i++;
}
printf("変換前の文字列「%s」\n", org);
printf("変換後の文字列「%s」\n", str);
printf("変換した文字数「%d」\n", cnt);
return 0; }

