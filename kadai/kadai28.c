

#include <stdio.h>

void main(void)
{

int i;
long a,b;
scanf("%lx",&a);
b=a^0x00ff00ff;
for(i=31;i>=0;i--)
{
    printf("%ld",((a>>i)&1));
}
    
printf("\n");
for(i=31;i>=0; i--)
{
    printf("%ld",((b>>i)&1));

}

}