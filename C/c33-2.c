/*
 ============================================================================
 Name        : c33-2.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main(void)
{
int a[3][5];
char s1[] = "\0";
char s2[] = "\nabc\n\0def";
printf("sizeof 演算子の確認\n");
printf(" int 型:%d\n", sizeof(int));
printf("a:%d\n", sizeof a);
printf(" a[1]:%d\n", sizeof a[1]);
printf("a[2][2]:%d\n", sizeof a[2][2]);
printf("sizeof 演算子と strlen 関数との違い\n");
printf("sizeof:%d\n", sizeof s1);
printf("strlen:%d\n", strlen(s1));
printf("sizeof:%d\n", sizeof s2);
printf("strlen:%d\n", strlen(s2));
return 0;
}
