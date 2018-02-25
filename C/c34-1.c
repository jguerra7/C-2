/*
 ============================================================================
 Name        : c34-1.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int i, x;
time_t t;
char *s[] = { "1234", "12345678", "1.234" };
time( &t );
// 現在時刻の取得
srand( t );
// 擬似乱数の種の設定
system( "cls" );
// 外部コマンド(画面クリア)
printf("擬似乱数\t0~1 の範囲に正規化\n");
for ( i = 0 ; i < 10 ; i++ ) {
x = rand();
// 擬似乱数の発生
printf("%8d\t%8.6f\n", x, (double)x / RAND_MAX);
}
printf("\n 負の数:%8d\t 絶対値:%8d\n", -1, abs(-1));
printf("文字列:%8s\t 数値:%8d\n", s[0], atoi(s[0]));
printf("文字列:%8s\t 数値:%8ld\n", s[1], atol(s[1]));
printf("文字列:%8s\t 数値:%8f\n", s[2], atof(s[2]));
return 0;
}
