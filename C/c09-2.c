/*
 ============================================================================
 Name        : c09-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int a = 10, b; double ans;
b = a = 15; //「多重代入」と「結合規則」を確認
printf("a=%d b=%d\n", a, b);
ans = a / 2; //「整数/整数」の答えは整数(小数点以下切り捨て)
printf("ans=%.1f\n", ans);
ans = a / 2.0; //この場合は,正しい答えが求まる
printf("ans=%.1f\n", ans);
b = (a++) * 2; //後置型は ( ) があっても最後に計算
printf("a=%d b=%d\n", a, b);

return 0; }

