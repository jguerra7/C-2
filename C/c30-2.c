/*
 ============================================================================
 Name        : c30-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
/* 構造体の宣言 */
struct test1 {
char c1; char c2; char c3; char c4; };
struct test2 {
short int s1; short int s2; };
/* 共用体の宣言 (typedef と併用) */
typedef union {
int idm; struct test1 cdm; struct test2 sdm;
} ud_t;
int main(void) {
ud_t udt = { 0x41424344 };
printf("c1=%c\n", udt.cdm.c1);
printf("c2=%c\n", udt.cdm.c2);
printf("c3=%c\n", udt.cdm.c3);
printf("c4=%c\n", udt.cdm.c4);
udt.idm = 0x11223344;
printf("s1=%4X\n", udt.sdm.s1);
printf("s2=%4X\n", udt.sdm.s2);
udt.cdm.c1 = 0xDD;
udt.cdm.c2 = 0xCC;
udt.sdm.s2 = 0xAABB;
printf("idm=%8X\n", udt.idm);
return 0; }
