/*
 ============================================================================
 Name        : c26-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
int i, sum;
if ( argc == 1 ) {
printf("データがありません\n"); }
else {
for ( sum = 0, i = 1 ; i < argc ; i++ ) {
sum += atoi(argv[i]); }
printf("合計:%d\n", sum); }
return 0; }

