/*
 ============================================================================
 Name        : c20-6.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 /* ヘッダファイル -------------------------------------------------------- */
#include <stdio.h>
/* プロトタイプ宣言 ------------------------------------------------------ */
void Put_Str1(char *p);
void Put_Str2(char str[]);
/* エントリポイント Put_Str1 関数とPut_Str2関数の動作チェック ------------ */
int main(void) {
char test[] = "kobedenshi";
Put_Str1(test); //┐char 型一次元配列の先頭アドレスを渡す
Put_Str2(test); //┘
Put_Str1("soft"); //┐文字列リテラルの先頭アドレスを渡す
Put_Str2("soft"); //┘
return 0; }
/* ポインタ形式 ---------------------------------------------------------- */
void Put_Str1(char *p) {
printf("ポインタ形式:%s\n", p); }
/* 配列形式 -------------------------------------------------------------- */
void Put_Str2(char str[]) {
printf("配列形式 :%s\n", str);
}
