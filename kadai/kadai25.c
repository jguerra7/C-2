

#include <stdio.h>

void main(void)
{

int a,i;
scanf("%d",&a);
for(i =15,i>=0;i--;)
{
    printf("%d",((a>>i)&0X0001));
    
}
    
}