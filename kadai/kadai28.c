

#include <stdio.h>

void main(void)
{

int i;
long a,b;
scanf("%x",&a);
b=a^0x00ff00ff;
for(i=31;i>=0;i--)
{
    printf("%d",((a>>i)&1));
}
    
printf("\n");
for(i=31;i>=0; i--)
{
    printf("%d",((b>>i)&1));

}

}