

#include <stdio.h>

void main(void)
{

int a,b=0, cnt,i;
cnt = sizeof(int);
cnt = cnt*8-1;
scanf("%d",&a);
for(i = cnt; i>=0; i--)
{
 b+= (a>>i)&i;

}
printf("%d",b);

    
}