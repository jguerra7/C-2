#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, sum, max, min, tmp;

	if ( argc == 1 ) {
		printf("データがありません\n");
	}
	else {
		max = atoi(argv[1]);
		min = atoi(argv[1]);
		for ( sum = 0, i = 1 ; i < argc ; i++ ) {
			tmp= atoi(argv[i]);
			sum += tmp;
			if ( max < tmp )
				max = tmp;
			else if ( min > tmp )
				min = tmp;
		}
		printf("合計　：%d\n", sum);
		printf("平均　：%.2f\n", (double)sum / (argc - 1));
		printf("最小値：%d\n", min);
		printf("最大値：%d\n", max);
	}

	return 0;
}
