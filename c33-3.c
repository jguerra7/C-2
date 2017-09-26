/*
 ============================================================================
 Name        : c33-3.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
struct syouhin{
char code[5]; // コード
char name[11]; // 商品名
int tanka;
// 単価
};
int main(void)
{
char r_data[] = "S001 ABCDE 100";
char str[256];
struct syouhin s;
sscanf(r_data, "%s%s%d", s.code, s.name, &s.tanka);
sprintf(str, "コード:%s 商品名:%s 単価:%d 円",
s.code, s.name, s.tanka);
printf("%s\n", str);
return 0;
}
