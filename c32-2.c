/*
 ============================================================================
 Name        : c32-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
FILE *fin, *fout;
char str[256];
int c, y, m, d;
/* ファイルオープン */
if ( (fin = fopen("c:\\ckadai\\c32-2-in.txt", "r")) == NULL ) {
printf("入力ファイルオープンエラー\n");
exit(1);
}
if ( (fout = fopen("c:\\ckadai\\c32-2-out.txt", "w")) == NULL ) {
printf("出力ファイルオープンエラー\n");
exit(1);
}
/* 1 行読み書き */

fprintf(fout, "1 行 入出力テスト\n");
fgets(str, 256, fin);
fputs(str, fout);
/* 1 文字読み書き */

fprintf(fout, "1 文字 入出力テスト\n");
while ( (c = fgetc(fin)) != '\n' ) {
fputc(c, fout); }
fputc('\n', fout);
/* 書式付読み書き */

fprintf(fout, "書式付 入出力テスト\n");
fscanf(fin, "%4d%2d%2d", &y, &m, &d);
fprintf(fout, "%04d 年%02d 月%02d 日\n", y, m, d);
/* ファイルクローズ */


fclose(fin);
fclose(fout);
return 0; }

