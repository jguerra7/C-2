/*
 ============================================================================
 Name        : c34-3.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <time.h>
int main(void)
{
clock_t c1, c2;
time_t t1, t2;
struct tm *s;
char *p;
char *w[] = { "日", "月", "火", "水", "木", "金", "土" };
char *n[] = { "しない", "する" };
c1 = clock();
time( &t1 ); // プロセッサ時間の取得
// 現在時刻の取得
s = localtime( &t1 );
printf("年:%4d\n", s->tm_year + 1900);
printf("月:%4d\n", s->tm_mon + 1);
printf("日:%4d\n", s->tm_mday);
printf("曜:%4s\n", w[s->tm_wday]);
printf("時:%4d\n", s->tm_hour);
printf("分:%4d\n", s->tm_min);
printf("秒:%4d\n", s->tm_sec);
printf("累積日:%4d\n", s->tm_yday);
printf("夏時間:採用%s\n", n[s->tm_isdst]); //


p = asctime( s );
// 表示形式に変換
printf("\n%s\n", p);
c2 = clock();
time( &t2 );
// プロセッサ時間の取得
// 現在時刻の取得
printf("経過時間:%lf\n", difftime( t2, t1 ));
printf("経過時間:%lf\n", (double)(c2 - c1) / CLOCKS_PER_SEC );
return 0;
}
