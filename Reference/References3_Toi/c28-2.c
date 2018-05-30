/*
 ============================================================================
 Name        : c28-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
/* 構造体 syouhin の宣言 */
struct syouhin {
int no; // 商品 No
char name[10]; // 商品名
int tanka; // 単 価
};
int main(void) {
int i;
struct syouhin s1;
struct syouhin slist[3] = {
{ 1, "ABCDEFG", 1000 }, { 2, "MNO", 7500 }, { 3, "ABC123", 300 }, };
struct syouhin *sp = &s1;
sp->no = 4;
strcpy(sp->name, "XYZ");
(*sp).tanka = 100;
printf("商品 No:%d\n", sp->no);
printf("商品名:%s\n", sp->name);
printf("単 価:%d\n\n", sp->tanka);
printf("No| 商品名 |単価\n");
printf("--+----------+----\n");
for ( i = 0, sp = slist ; i < 3 ; i++, sp++ ) {
if ( strcmp(sp->name, "MNO") == 0 ) {
printf("%2d|%-10s|%4d\n",
sp->no, sp->name, sp->tanka); } }
return 0; }

