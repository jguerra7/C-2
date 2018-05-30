/*
 ============================================================================
 Name        : c30-3.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
/* 共用体のメンバに構造体 */
union uTEST {
int idm;
struct sTEST {
short int s1; short int s2;
} sdm;
};
int main(void) {

union uTEST udt;
udt.sdm.s1 = 0x3344; udt.sdm.s2 = 0x1122;
printf("idm=%x\n", udt.idm);
return 0;
}
