








#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main(void)
{

char str[100]="KaGaya           JOhN           MeDeL   koBa DenSha ";
int c=0,j=0;
while(str[c]!='\0'){
    if(str[c]!=' '){
        str[j++]=str[c];
    }
    c++;
}
str[j]='\0';
printf("%s \n",str);
    
}







