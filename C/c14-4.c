/*
 ============================================================================
 Name        : c14-4.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char str[] = "ABCDEFG";
printf("|0123456789|\n");
printf("|%s|\n", str);
printf("|%10s|\n", str);
printf("|%-10s|\n", str);
printf("|%3s|\n", str);
printf("|%3.3s|\n", str);
printf("|%5.3s|\n", str);
printf("|%-5.3s|\n", str);
return 0;


}
