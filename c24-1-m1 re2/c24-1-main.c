/*
 * c24-1-main.c
 *
 *  Created on: May 3, 2017
 *      Author: kagaya
 */


/* ヘッダファイル ------------------------------------------------------- */
#include <stdio.h>
#include "c24-1-m1.h"
#define SIZE 5
/* エントリポイント ----------------------------------------------------- */
int main(void) {
int data[SIZE] = { 10, 8, 15, 4, 6 };
int *max;
printf("配列内容\n");
Putarray(data, SIZE); //配列の内容を表示
max = Getmaxaddress(data, SIZE);
printf("最大値は「%d」です\n", *max);
return 0;
}

void Putarray(const int *p, int size) {
int i;
for ( i = 0 ; i < size ; i++, p++ ) {
printf("Array[%d]=%d\n", i, *p); } }
