/*
 ============================================================================
 Name        : c13-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 /* 配列のサイズ */
int main(void) {
int data[SIZE], i, sum;
printf("配列にデータを入力\n");
for ( i = 0 ; i < SIZE ; i++ ) {
printf("data[%d]=", i);
scanf("%d", &data[i]);
}
printf("\n 配列の合計を求める\n");
for ( i = 0, sum = 0 ; i < SIZE ; i++ ) {
sum += data[i];
printf("data[%d]=%2d sum=%3d\n", i, data[i], sum);
}
return 0;

}
