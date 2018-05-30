/*
 ============================================================================
 Name        : c18-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int f(int x);
int a = 1, b = 2, c; // グローバル変数(外部変数)
int main(void) {
int a, b, x, y; // ローカル変数(自動変数)
a = 3; x = f(a++);
b = 5; y = f(++b);
printf("a=%d b=%d c=%d x=%d y=%d\n", a, b, c, x, y);
return 0; }
int f(int x) {
int a = x; // ローカル変数(自動変数)
b++; c++; x++;
return a * b; }
