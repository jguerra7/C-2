#include <stdio.h>

int main(void)
{
	char c;

	printf("半角英数字を入力してください：");
	scanf("%c", &c);

	printf("文字「%c」の文字コードは「%02X」です．\n", c, c);

	return 0;
}
