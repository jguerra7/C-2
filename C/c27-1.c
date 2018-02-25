/*
 ============================================================================
 Name        : c27-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
unsigned short int d1 = 0x0F0F, d2 = 0x00FF, d3 = 0xABCD;
unsigned short int b_not, b_and, b_or, b_xor;
unsigned short int b_sl, b_sr;
b_not = ~d1; // ビット NOT(ビット反転)
printf("データ1:%04X\n", d1); printf("--------------\n");
printf(" NOT:%04X\n", b_not);
printf("\n");
b_and = d1 & d2; //ビット AND b_or = d1 | d2; //ビット OR b_xor = d1 ^ d2; //ビット XOR
printf("データ 1:%04X\n", d1);
printf("データ 2:%04X\n", d2);
printf("--------------\n");
printf(" AND:%04X\n", b_and);
printf(" OR:%04X\n", b_or);
printf(" XOR:%04X\n", b_xor);
printf("\n");
b_sl = d3 << 4; //左シフト(4 ビット) b_sr = d3 >> 4; //右シフト(4 ビット)
printf("データ 3:%04X\n", d3);
printf("-------------\n");
printf("左シフト:%04X(4 ビット)\n", b_sl);
printf("右シフト:%04X(4 ビット)\n", b_sr);
return 0; }
