

#include <stdio.h>

void main(void)
{
int a,b,c;
scanf("%x",&a);
scanf("%d",&b);
while((b<=0)||(b>=16))
{
    scanf("%d",&b);
    
}
    
c = a>>b;
c = c & 0x001;
printf("%d",c);

}