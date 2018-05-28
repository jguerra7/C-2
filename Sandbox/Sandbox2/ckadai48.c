
#include <stdio.h>

void ReversePrint(char *s);

int main(int argc, char *argv[])
{
	int i;

	if ( argc == 1 ) {
		printf("引数が設定されていません\n");
	}
	else {
		for ( i = 1 ; i <= argc ; i++ )
			ReversePrint(argv[i]);
	}

	return 0;
}

void ReversePrint(char *s)
{
	int i, n = 0;

	while ( s[n++] );
	for ( i = n - 2 ; i >= 0 ; i-- )
		printf("%c", s[i]);
	printf("\n");
}
