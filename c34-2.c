/*
 ============================================================================
 Name        : c34-2.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int main(void)
{
printf("2 の 3 乗:\t\t%8.6f\n",pow( 2, 3 ));
printf("2 の平方根:\t\t%8.6f\n",sqrt( 2 ));
printf("e の 1 乗:\t\t%8.6f\n",exp ( 1 ));
printf("2 の対数(底は e ):\t%8.6f\n",log( 2 ));
printf("2 の対数(底は 10):\t%8.6f\n",log10( 2 ));
printf("-2.0 の絶対値:\t\t%8.6f\n",fabs( -2.0 ));
printf("2.5 の天井:\t\t%8.6f\n",ceil( 2.5 ));
printf("2.5 の床:\t\t%8.6f\n",floor( 2.5 ));
printf("三角関数(正弦):\t%8.6f\n",sin( M_PI ));
printf("三角関数(余弦):\t%8.6f\n",cos( M_PI ));
printf("三角関数(正接):\t%8.6f\n",tan( M_PI ));
// M_PI は円周率π(math.h 内で定義済)
return 0;
}


