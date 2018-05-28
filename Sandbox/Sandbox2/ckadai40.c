

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[81], t[81];
	int i, j, flag;

	printf("文字列を入力：");
	while ( gets(s) != NULL ) {
		i = 0;
		j = 0;
		flag = 0;
		while ( s[i] ) {
			while ( isspace(s[i]) ) {
	i++;
	flag = 1;
			}
			if ( flag ) {
				i--;
				t[j++] = '\n';
				flag = 0;
			}
			else 
				t[j++] = s[i];
			i++;
		}
		t[j] ='\0';
		puts(t);
		printf("文字列を入力：");
	}

	return 0;
}
