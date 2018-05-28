#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for ( i = 1 ; i <= 100 ; i++ )
		sum += i;
	printf("1～100までの合計は「%d」です\n", sum);

	return 0;
}
