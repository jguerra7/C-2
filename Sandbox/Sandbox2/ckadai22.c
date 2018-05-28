
#include <stdio.h>

int main(void)
{
	char c;

	for ( c = 'A' ; c <= 'Z' ; c++ ) {
		printf("%c", c);
		if ( (c - 1) % 7 == 0 )
			printf("\n");
	}

	return 0;
}
