/*
 ============================================================================
 Name        : c23-6.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <assert.h>
int divide(int total, int number)
{
assert( number != 0 );
return total / number;

}
int main(void) {
printf("%d\n", divide(12, 4));
return 0;
}
