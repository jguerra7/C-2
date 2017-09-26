/*
 ============================================================================
 Name        : c26-1.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
int i;
printf("プログラム名:%s\n", *argv);
printf("引数の個数 :%d\n", argc - 1);
if ( argc == 1 ) {
printf("引数はありませんでした\n"); }
else {
for ( i = 1 ; i < argc ; i++ ) {
printf("引数%d は「%s」\n", i, *(argv + i)); } }
return 0; }
