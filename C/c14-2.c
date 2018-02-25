/*
 ============================================================================
 Name        : c14-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char str[81]; int i;
printf("文字列を入力:"); scanf("%s", str);
i = 0; while ( str[i] ) {
printf("str[%d]:%c:%2X:%d\n", i, str[i], str[i], str[i]);
i++;
}
return 0;

}
