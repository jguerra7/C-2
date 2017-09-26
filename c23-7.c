/*
 ============================================================================
 Name        : c23-7.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include <stdio.h>
#include <assert.h>
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
assert(n == 2);
n = plus2(n);
assert(n == 4);
n = minus3(n);
assert(n == 1);
printf("%d\n", n);
return 0;
}
