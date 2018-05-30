/*
 ============================================================================
 Name        : c30-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
/* 共用体の宣言 */
union uTEST {
int a; // int 型 4 バイト(-2147483648 ~ 2147483647)
short int b; // short int 型 2 バイト( -32768 ~ 32767)
char c; // char 型 1 バイト( -128 ~ 127)
};
        // ※char 型 1 バイト以外は,処理系依存なので注意
int main(void) {
union uTEST dt = { 0x12345678 }; // 共用体変数を宣言
union uTEST *p = &dt; // 共用体を示すポインタを宣言

printf("\n 初期設定の値(16 進表示)\n");
printf("dt.a=%8X\ndt.b=%8X\ndt.c=%8X\n", dt.a, dt.b, dt.c);
// int 型に代入
dt.a = 0x99887766;
printf("\n メンバ「a」を変更(16 進表示)\n");
printf("dt.a=%8X\ndt.b=%8X\ndt.c=%8X\n", dt.a, dt.b, dt.c);
// short 型に代入
p->b = 0x1234;
printf("\n メンバ「b」を変更(16 進表示)\n");
printf("p->a=%8X\np->b=%8X\np->c=%8X\n", p->a, p->b, p->c);
// char 型に代入
dt.c = 'A'; // 「A」の文字コードは「0x41」
printf("\n メンバ「c」を変更(16 進表示)\n");
printf("dt.a=%8X\ndt.b=%8X\ndt.c=%8X\n", dt.a, dt.b, dt.c);
return 0;
}
