/*
 ============================================================================
 Name        : c07-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char cd; // 文字型 char
int id; // 整数型 int
float fd; // 実数型float
double dd; // 倍精度実数型double
char str[80]; // 文字列 char 型 1 次元配列
// 入力処理
printf("文字入力 :");
scanf("%c", &cd); // 文字入力 %c
printf("整数入力 :");
scanf("%d", &id); // int 型に入力 %d
printf("実数入力 :");
scanf("%f", &fd); // float 型に入力 %f
printf("実数入力 :");
scanf("%lf", &dd); // double 型に入力 %lf
printf("文字列入力:");
scanf("%s", str); // 文字列入力 %s
// 出力処理
printf("文字出力 :%c\n", cd); // 文字を出力 %c
printf("整数出力 :%d\n", id); // int 型を出力 %d
printf("実数出力 :%f\n", fd); // float 型を出力 %f
printf("実数出力 :%f\n", dd); // double 型を出力 %f
printf("文字列出力:%s\n", str); // 文字列を出力 %s
return 0; }
