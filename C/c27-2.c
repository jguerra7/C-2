/*
 ============================================================================
 Name        : c27-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main(void) {
unsigned short int d1 = 0x0F0F, d2 = 0x4321, d3 = 0x00FF, d4 = 0xABCD;
unsigned short int ans1, ans2, ans3, ans4, ans5;
ans1 = d1 & d2 | d3 ^ d4;
ans2 = d2 << 4 & d4 >> 4;
ans3 = ~d4 << 4; ans4 = 0x00CD == d4 & d3;
ans5 = 0x00CD == (d4 & d3);
printf("ans1:%04X\n", ans1);
printf("ans2:%04X\n", ans2);
printf("ans3:%04X\n", ans3);
printf("ans4:%04X\n", ans4);
printf("ans5:%04X\n", ans5);
return 0; }
