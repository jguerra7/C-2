/*
 ============================================================================
 Name        : c06-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Put_Keisan(int x, int y);
int main(void) {

int a1 = 10, a2 = 5;
int b1 = 25, b2 = 7;
int c1 = 150, c2 = 50;
Put_Keisan(a1, a2); Put_Keisan(b1, b2); Put_Keisan(c1, c2);
return 0;



}

void Put_Keisan(int x, int y) {
printf("%d + %d = %d\n", x, y, x + y);
printf("%d - %d = %d\n", x, y, x - y);
printf("%d * %d = %d\n", x, y, x * y);
printf("%d / %d = %d\n", x, y, x / y);
printf("%d %% %d = %d\n", x, y, x % y);
}

