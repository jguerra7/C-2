
#include <stdio.h>
#include <ctype.h>

void TranslateChar(char *s);

int main(int argc, char *argv[])
{
	int i;

	if ( argc == 1 ) {
		printf("引数が設定されていません\n");
	}
	else {
		for ( i = 1 ; i <= argc ; i++ )
			TranslateChar(argv[i]);
	}

	return 0;
}

void TranslateChar(char *s)
{
	int i = 0;

	while ( s[i] ) {
		if ( islower(s[i]) )
			s[i] = toupper(s[i]);
		else if ( isupper(s[i]) )
			s[i] = tolower(s[i]);
		else
			s[i] ='*';
		i++;
	}
	printf("%s\n", s);
}
