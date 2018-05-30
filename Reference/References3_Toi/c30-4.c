/*
 ============================================================================
 Name        : c30-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
/* 構造体のメンバに共用体 */
struct sTEST {
int idm; union uTEST {
int a; short int b; char c;
} udm;
};
int main(void) {
struct sTEST sdt = { 100, 0x12345678};
printf("idm=%d\n", sdt.idm);
printf("udm.a=%8X\n", sdt.udm.a);
printf("udm.b=%8X\n", sdt.udm.b);
printf("udm.c=%8X\n", sdt.udm.c);
return 0;
}
