


#include <stdio.h>

void main(void)
{

    int a=0,b=0,i=0;
    float c;
    scanf("%d",&a);
    while(a!=0)
    {
        b+=a;
        i++;
        scanf("%d",&a);

    }
    
    c=b/i;
    printf("%.2f",c);

}