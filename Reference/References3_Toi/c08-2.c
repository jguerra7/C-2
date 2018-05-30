/*
 ============================================================================
 Name        : c08-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SYOUHIZEI 1.05
int main(void) {
int okane;
printf("金額を入力してください:");
scanf("%d", &okane);
printf("消費税を含めると%5.0f 円です\n", okane * SYOUHIZEI);
return 0; }
