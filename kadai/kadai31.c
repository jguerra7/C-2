

#include <stdio.h>

long sec(int,int,int);
void main(void)
{

    int h,m,s;
    long sums;
    scanf("%d%d%d",&h,&m,&s);
    sums=sec(h,m,s);;
    printf("%ld",sums);

}

long sec(int h, int m , int s)
{
 long sums;
 sums = h*3600L+m*60L+s;
 return(sums);
 
}