
#include <stdio.h>

int main(void)
{
	int a = 1;

	while ( a <= 100 ) {
		printf("%5d", a);
		if ( a % 5 == 0 )
			printf("\n");
		a++;
	}

	return 0;
}
