
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[81];

	printf("文字列を入力：");
	while ( gets(s) != NULL ) {
		puts(s);
		puts(s);
		printf("文字列を入力：");
	}

	return 0;
}
