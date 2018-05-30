/*
 ============================================================================
 Name        : c28-1.c
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
struct syouhin s1 = { 4, "XYZ", 100 };
struct syouhin s2;
struct syouhin slist[3] = {
{ 1, "ABCDEFG", 1000 }, { 2, "MNO", 7500 }, { 3, "ABC123", 300 },
};
s2.no = s1.no;
strcpy(s2.name, s1.name);
s2.tanka = s1.tanka;
printf("商品 No:%d\n", s2.no);
printf("商品名:%s\n", s2.name);
printf("単 価:%d\n\n", s2.tanka);
printf("No| 商品名 |単価\n");
printf("--+----------+----\n");
for ( i = 0 ; i < 3 ; i++ ) {
printf("%2d|%-10s|%4d\n",
slist[i].no, slist[i].name, slist[i].tanka);
}
return 0; }
