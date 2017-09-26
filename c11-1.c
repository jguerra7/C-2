/*
 ============================================================================
 Name        : c11-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int ten;
printf("点数を入力[0~100]:");
scanf("%d", &ten);
if ( 0 <= ten && ten <= 100 )
printf("入力された点数は「%d」です\n", ten);
else
printf("入力エラー:範囲外のデータが入力されました\n");
return 0; }
