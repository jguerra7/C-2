/*
 ============================================================================
ファイル名:c02-1.c
作 成 日:4/29/2017
作 成 者:加賀屋　ジャンメデル
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
 void Put_Square(int length)
 {
int i, j;
for ( i = 0 ; i < length ; i++ ) {
for ( j = 0 ; j < length ; j++ ) {
printf("*");
}
printf("\n");

}

}

int main(void) {

	int length;
	printf("正方形を出力します.\n");
	printf("辺の長さを入力:");
	scanf("%d", &length);
	Put_Square(length);
	return 0;

}



