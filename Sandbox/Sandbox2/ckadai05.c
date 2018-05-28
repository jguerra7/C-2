#include <stdio.h>

int main(void)
{
	int x;

	printf("正の整数を入力してください：");
	scanf("%d", &x);

	printf("その数の最後の桁は「%d」です．\n", x % 10);

	return 0;
}
