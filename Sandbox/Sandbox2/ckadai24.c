
#include <stdio.h>

int main(void)
{
	printf("char型は「%dバイト」です\n", sizeof(char));
	printf("short型は「%dバイト」です\n", sizeof(short));
	printf("int型は「%dバイト」です\n", sizeof(int));
	printf("long型は「%dバイト」です\n", sizeof(long));
	printf("float型は「%dバイト」です\n", sizeof(float));
	printf("double型は「%dバイト」です\n", sizeof(double));
	printf("long double型は「%dバイト」です\n", sizeof(long double));

	return 0;
}
