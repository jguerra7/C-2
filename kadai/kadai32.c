

#include <stdio.h>

void main(void)
{
 int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d うるう年.", year);
            else
                printf("%d 平年.", year);
        }
        else
            printf("%d うるう年.", year );
    }
    else
        printf("%d 平年.", year);
    
    
}