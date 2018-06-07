


#include <stdio.h>

void main(void)
{

int a,i,j;
scanf("%d",&a);
while(a<=0 || a>=21)
    scanf("%d",&a);
for(i=0;i<a;i++){

    for(j=0;j<a;j++)
        printf("*");
    printf("\n");
}
    
}