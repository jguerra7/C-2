/*
 ============================================================================
 Name        : c32-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
FILE *fin; int c;
/* コマンドライン引数のチェック */
if ( argc != 2 ) {
printf("引数エラー\n");
exit(1); // 異常終了
}
/* ファイルオープン */
if ( (fin = fopen(argv[1], "r")) == NULL ) {
printf("そんなファイルないぞ!\n「%s」\n", argv[1]);
exit(1); // 異常終了
}
/* ファイルの内容を画面に出力 */
while ( (c = fgetc(fin)) != EOF ) {
printf("%c", c); }
/* ファイルクローズ */
fclose(fin);
return 0; }
