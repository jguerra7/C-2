/*
 ============================================================================
 Name        : c31-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
/* 列挙型の宣言 */
enum eRANK{ RANK_A, RANK_B, RANK_C, RANK_D, RANK_E, ERR};
int main(void) {
enum eRANK rank; // 列挙型変数を宣言
int ten;
char *msg[6] = {
"成績は「5」:素晴らしい!",
"成績は「4」:まあ,普通だ",
"成績は「3」:なんとか単位は取ったぞ",
"成績は「2」:単位を落とした",
"成績は「1」:単位を落とした",
"入力エラー" };
printf("点数を入力[0-100]:");
scanf("%d", &ten);
if ( ten < 0 || 100 < ten ) {
rank = ERR; }
else if ( 0 <= ten && ten < 20 ) {
rank = RANK_E; }
else if ( 20 <= ten && ten < 40 ) {
rank = RANK_D; }
else if ( 40 <= ten && ten < 60 ) {
rank = RANK_C; }
else if ( 60 <= ten && ten < 80 ) {
rank = RANK_B; }
else { rank = RANK_A; }
puts(msg[rank]);
return 0; }
