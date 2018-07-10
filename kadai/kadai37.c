


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main(void)
{
char str[] = "12abc12johnmede1235678kagaya";
 
   
   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {
        // check for alphabets
        if (isalpha(str[i]) != 0)
           
            printf("Alphabetic_letters = %c, \n", str[i] );
 
        // check for decimal digits
        else if (isdigit(str[i]) != 0)
            
            printf("Decimal_digits = %c \n",str[i]);
    }
 
    
    
}



