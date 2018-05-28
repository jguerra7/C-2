#include <stdio.h>

int main(void)
{
	int i, j;

	i = 1;
	while ( i < 6 ) {
		j = 0;
		while ( j < i ) {
			printf("+");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
