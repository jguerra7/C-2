

#include <stdio.h>

void main(void)
{

    int i,a=0,b=0;
    long c=0;

    while(a<=0)
        scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b+=i;
        c+=i;

    }
    
    printf("%10d\n%10ld",b,c);
    
}
