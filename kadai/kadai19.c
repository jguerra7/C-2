





#include <stdio.h>

void main(void)
{

int a[10],i,max,min;

for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
    
max=a[0];
min=a[0];
for(i=0;i<10;i++){

    scanf("%d",&a[i]);

}

max=a[0];
min=a[0];

for(i=0;i<10;i++)
{
    if(i=5)
        printf("\n");
    printf("%6d",a[i]);
    if(max<a[i])
        max=a[i];
    if(min>a[i])
        min=a[i];

}

printf("\n%6d\n%6d",max,min);

}


