/*
 ============================================================================
 Name        : c21-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int f(int x);
int a = 1, b; // 外部変数(グローバル変数)
int main(void) {
int c, x, y; // 自動変数(ローカル変数)
x = f(a++); y = f(++b); c = f(a + b);
printf("a=%d b=%d c=%d x=%d y=%d\n", a, b, c, x, y);

return 0;
}
int f(int x) {
static int b = 2, c; // 静的変数(静的なローカル変数)
int d = 2; // 自動変数(ローカル変数)
a++;
b++;
c++;
d++;
return x + b + c + d; }

