/*
 ============================================================================
 Name        : c26-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
if ( argc == 1 ) {
printf("通常モードで起動されました\n");
} else if ( argc == 2 ) {
if ( strcmp(argv[1], "/help") == 0 ) {
printf("ヘルプモードで起動されました\n");
}else if ( strcmp(argv[1], "/debug") == 0 ) {
printf("デバッグモードで起動されました\n");
} else {
printf("パラメタの指定が間違っています\n"); }
} else {
printf("引数の個数が間違っています\n"); } return 0; }
