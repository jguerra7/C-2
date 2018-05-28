#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 30;

	printf("変数a：|%5d|\n", a);
	printf("変数b：|%05d|\n", b);
	printf("変数c：|%-5d|\n", c);

	return 0;
}
