/*
 ============================================================================
 Name        : c23-2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
int plus1(int n) {
return n + 1;
}
int plus2(int n) {
return n + 2;
}
int minus3(int n) {
return n - 3;
}
int main(void) {
int n = 1;
n = n - plus1(-3);
n = plus2(n); n = minus3(n);
printf("%d\n", n);
return 0;
}
