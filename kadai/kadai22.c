




#include <stdio.h>

void main(void)
{

char a[101];
int i;

gets(a);
printf("%s\n",a);
i=0;
while(a[i])
{
    printf("%3x",a[i]);
    i++;
    
}
    
}



