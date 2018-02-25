/*
 ============================================================================
 Name        : c12-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
signed short int ssi;
unsigned short int usi; signed int si;
unsigned int ui;
signed long int sli;
unsigned long int uli;
long double ld;
//入力
printf("符号あり short 型へ入力:");
scanf("%hd", &ssi);
printf("符号なし short 型へ入力:");
scanf("%hu", &usi);
printf("符号あり int 型へ入力 :");
scanf("%d", &si);
printf("符号なし int 型へ入力 :");
scanf("%u", &ui);
printf("符号あり long 型へ入力 :");
scanf("%ld", &sli);
printf("符号なし long 型へ入力 :");
scanf("%lu", &uli);
printf("long double 型へ入力 :");
scanf("%Lf", &ld);
//出力
printf("符号あり short 型の出力:%hd\n", ssi);
printf("符号なし short 型の出力:%hu\n", usi);
printf("符号あり int 型の出力 :%d\n", si);
printf("符号なし int 型の出力 :%u\n", ui);
printf("符号あり long 型の出力 :%ld\n", sli);
printf("符号なし long 型の出力 :%lu\n", uli);
printf("long double 型の出力 :%Lf\n", ld);
return 0; }

