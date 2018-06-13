

#include <stdio.h>
int tri(int,int);
void main(void)
{

int hen,takasa,menseki;
scanf("%d%d",&hen,&takasa);
menseki = tri(hen,takasa);
printf("%d",menseki);


}

int tri(int hen,int takasa)
{
    return(hen* takasa/2);
    
}