

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[81];
	int i = 0, u = 0, l = 0, d = 0;

	printf("半角文字列を入力：");
	scanf("%s", s);

	while ( s[i] ) {
		if ( isupper(s[i]) ) 
			u++;
		else if ( islower(s[i]) ) 
			l++;
		else if ( isdigit(s[i]) ) 
			d++;
		i++;
	}

	printf("英大文字「%d」個\n", u);
	printf("英小文字「%d」個\n", l);
	printf("　　数字「%d」個\n", d);

	return 0;
}
