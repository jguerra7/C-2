/*
 ============================================================================
 Name        : c19-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int a = 100, b = 50, work;
int *p_a, *p_b; /* ポインタ変数の宣言 */
p_a = &a; /* ポインタ変数 p_a に変数 a のアドレスを代入 */
p_b = &b; /* ポインタ変数 p_b に変数 b のアドレスを代入 */
work = *p_a; /* ┐ */
*p_a = *p_b; /* │※入れ替え処理 */
*p_b = work; /* ┘ */
printf("a=%d b=%d\n", a, b);
printf("*p_a=%d *p_b=%d\n", *p_a, *p_b);
return 0; }

