

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[81], t[81];
	int i, j;

	printf("文字列を入力：");
	while ( gets(s) != NULL ) {
		i = 0;
		j = 0;
		while ( s[i] ) {
			if ( s[i] != s[i+1] )
				t[j++] = s[i];
			i++;
		}
		t[j] ='\0';
		puts(t);
		printf("文字列を入力：");
	}

	return 0;
}
