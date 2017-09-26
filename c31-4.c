/*
 ============================================================================
 Name        : c31-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h> /* メニューの設定 */
typedef enum {END, ADD, MOD, DEL} menu_t;
 int main(void) {
menu_t menu;
while ( 1 ) {
printf("\n 番号:メニュー\n"); // メニューの表示
printf("---------------------\n");
printf(" %d :追加処理\n", ADD);
printf(" %d :変更処理\n", MOD);
printf(" %d :削除処理\n", DEL);
printf(" %d :プログラム終了\n", END);
printf("---------------------\n");
printf("番号を入力してください:");
scanf("%d", &menu);
system("cls"); // 画面クリア
switch(menu){
case ADD:
printf("\n 追加処理を実行\n");
break;
case MOD:
printf("\n 変更処理を実行\n");
break;
case DEL:
printf("\n 削除処理を実行\n");
break;
case END:
printf("\n プログラムを終了します\n");
return 0;
default:
printf("\n 入力エラー\n"); } } }
