








#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main(void)
{
char str[100] = "KaGaya JOhN MeDeL koBa DenSha ";
char str2[] = "a";
int count = 0;
 
   
   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {
        
      if(str[i] == str2[0]){
          count++;
      }
        
    }
    printf("%s = %d \n",str2,count);
    
    
}






