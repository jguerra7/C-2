

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[81], t[81], u[81];
	int i = 0, a = 0, d = 0;

	printf("半角文字列を入力：");
	scanf("%s", s);

	while ( s[i] ) {
		if ( isalpha(s[i]) ) 
			t[a++] = s[i];
		else if ( isdigit(s[i]) ) 
			u[d++] = s[i];
		i++;
	}
	t[a++] = '\0';
	u[d++] = '\0';

	if ( a > 1 )
		printf("英字のみの文字列「%s」\n", t);
	else
		printf("英字は1文字も入力されていませんでした\n");
	if ( d > 1 )
		printf("数字のみの文字列「%s」\n", u);
	else
		printf("数字は1文字も入力されていませんでした\n");

	return 0;
}
