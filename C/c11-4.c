/*
 ============================================================================
 Name        : c11-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int tuki;
printf("月を入力[1~12]:");
scanf("%d", &tuki);
switch ( tuki ) {
case 3:
	case 4:
		case 5:
printf("季節は「春」です\n");
break;
case 6:
	case 7:
		case 8:
printf("季節は「夏」です\n");
break;
case 9:
	case 10:
		case 11:
printf("季節は「秋」です\n");
break;
case 12:
	case 1:
		case 2:
printf("季節は「冬」です\n");
break;
default:
printf("入力エラー\n"); }
return 0; }

