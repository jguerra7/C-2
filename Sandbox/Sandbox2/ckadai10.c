
#include <stdio.h>

int main(void)
{
	char c;

	printf("半角英数字を入力してください：");
	scanf("%c", &c);

	printf("文字「%c」の次の文字は「%c」です．\n", c, c+1);

	return 0;
}
