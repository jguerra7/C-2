

#include <stdio.h>

void main(void)
{

    int a=0,i,b=0;
    while(a<=0)
        scanf("%d",&a);
    for(i=1;i<=a,i++)
    {
        if(i%2!=0)
            b+=i;
    }
    
    printf("%10d",b);
    
}
