

#include <stdio.h>

int main(void)
{
	char c;
	int i, flag = 0;
	char week[7][10] = {
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday"
	};

	printf("半角英大文字を入力：");
	scanf("%c", &c);
	printf("\n頭文字が一致する曜日は");

	for ( i = 0 ; i < 7 ; i++ )
		if ( c == week[i][0] ) {
			if ( !flag )
				printf("以下の通りです．\n");
			printf("%s\n", week[i]);
			flag++;
		}
	if ( !flag ) printf("ありませんでした．\n");

	return 0;
}
