/*
 ============================================================================
 Name        : c17-6.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
 #include <stdio.h>
#define MAX 10 /* 配列の要素数 */
int main(void) {
int data[MAX], i, j;
printf("配列に整数データを入力してください(最大%d 個)\n", MAX);
printf("「Ctrl+Z」で入力を終了します\n");

for ( i = 0 ; i < MAX && (scanf("%d", &data[i]) != EOF) ; i++ );
printf("\n 配列内容一覧\n"); for ( j = 0 ; j < i ; j++ ) {
printf("data[%d]=%d\n", j, data[j]); }
return 0;

}
