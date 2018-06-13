

#include <stdio.h>
float cf(float);
void main(void)
{

float sesshi,kashi;
scanf("%f",&sesshi);
kashi=cf(sesshi);
printf("%f",kashi);


}


float cf (float sesshi)
{
    float kashi;
    kashi =(9.0/5.0) * sesshi + 32;
    return(kashi);
    
}