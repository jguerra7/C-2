

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[81], t[81];
	int i = 0;

	printf("半角文字列を入力：");
	scanf("%s", s);
	while ( s[i] )
		t[i++] = s[i];

	i = 0;
	while ( t[i] ) {
		if ( isupper(t[i]) ) 
			t[i] = tolower(t[i]);
		else if ( islower(t[i]) ) 
			t[i] = toupper(t[i]);
		else 
			t[i] = '*';
		i++;
	}

	printf("変換後の文字列「%s」\n", t);
	printf("変換前の文字列「%s」\n", s);

	return 0;
}
