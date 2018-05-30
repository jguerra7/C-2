/*
 ============================================================================
 Name        : c29-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
struct seiseki {
int ei; // 英語
int su; // 数学
int ko; // 国語
};
struct student {
char name[11]; // 名前
struct seiseki zenki; // 前期の成績
struct seiseki kouki; // 後期の成績
};
int main(void) {
struct student seito;
struct student *p = &seito;
// 「.(ドット演算子)」を使用して入力
printf("名前入力:");
scanf("%s", seito.name);
printf("前期の成績入力\n");
printf("英語[0-100]:");
scanf("%d", &seito.zenki.ei);
printf("数学[0-100]:");
scanf("%d", &seito.zenki.su);
printf("国語[0-100]:");
scanf("%d", &seito.zenki.ko);
// 「->(アロー演算子)」を使用して入力
printf("後期の成績入力\n");
printf("英語[0-100]:");
scanf("%d", &p->kouki.ei);
printf("数学[0-100]:");
scanf("%d", &p->kouki.su);
printf("国語[0-100]:");
scanf("%d", &p->kouki.ko);
putchar('\n');
// 「->(アロー演算子)」を使用して出力
printf("名前:%s\n", p->name);
printf("前期成績:英[%3d] 数[%3d] 国[%3d]\n",
p->zenki.ei, p->zenki.su, p->zenki.ko);
// 「.(ドット演算子)」を使用して出力
printf("後期成績:英[%3d] 数[%3d] 国[%3d]\n",
seito.kouki.ei, seito.kouki.su, seito.kouki.ko);

return 0; }
