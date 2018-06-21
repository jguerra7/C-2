




#include <stdio.h>

void main(void)
{

double a[100],work,b,c;
int i,j;

for(i=0;i<100;i++)
{
    if(scanf("%lf",&work)==EOF)
        break;
    else
        a[i]=work;
    
}

b=c=0;
for(j=0;j<i;j++)
{
    b+=a[j];
}

c=b/i;

printf("%10.2f\n%10.2f",b,c);


}


