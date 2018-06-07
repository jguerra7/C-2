


#include <stdio.h>

void main(void)
{

    int a;
    scanf("%d",&a);
    if(a>=80)
        printf("A");

    else if (a>=60)
        printf("B");
    
    else if (a>=40)
        printf("C");
    else if (a>=20)
        printf("D");
    else  
        printf("E");
}
