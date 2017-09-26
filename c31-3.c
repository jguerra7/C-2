/*
 ============================================================================
 Name        : c31-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
// 列挙型
enum test{ A, B, C, D = 10, E};
int main(void) {
printf("A=%d\n", A);
printf("B=%d\n", B);
printf("C=%d\n", C);
printf("D=%d\n", D);
printf("E=%d\n", E);
return 0; }
