


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main(void)
{
char str[] = "KaGaya JOhN MeDeL";
 
   
   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {
        
        if (islower(str[i]) != 0){
            str[i]  = toupper(str[i]);
           
        }
           
        else if (isupper(str[i]) != 0){
            str[i]  = tolower(str[i]);
           
        }
        
    }
    printf("%s \n",str);
    
    
}



