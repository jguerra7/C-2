/*
 ============================================================================
 Name        : c23-5.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
int i;
for ( i = 0 ; i < 10 ; i++ ) {
// デバッグ用コード
printf("デバッグ:i=%d\n", i);
printf("C 言語検定 2 級に合格するぞ!ファイト・オー!\n");
if (i == 5) {
printf("これで半分だ.後半を頑張るぞ!\n");
}
}
return 0;
}

