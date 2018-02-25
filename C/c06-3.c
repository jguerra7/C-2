/*
 ============================================================================
 Name        : c06-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
double Get_Sankaku(int teihen, int takasa);
 int main(void) {
int teihen, takasa;
double menseki;
printf("三角形の面積を求めます.\n");
printf("底辺を入力:");
scanf("%d", &teihen);
printf("高さを入力:");
scanf("%d", &takasa);
menseki = Get_Sankaku(teihen, takasa);
printf("三角形の面積は「%.2f」です.\n", menseki);
return 0;


}

 double Get_Sankaku(int teihen, int takasa) {
 double menseki;
 menseki = (double)teihen * takasa / 2;
 return menseki;
 }

