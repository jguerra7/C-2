/*
 ============================================================================
 Name        : c23-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
int main(void) {
int a, b, wa, sa, seki;
a = 2;
b = 1;

wa = a + b;
sa = a / b;
seki = a * b;
printf("「%d」と「%d」で計算するぞ\n", a, b);
printf("足し算の答え:%d\n", wa);
printf("引き算の答え:%d\n", sa);
printf("掛け算の答え:%d\n", seki);
return 0; }
