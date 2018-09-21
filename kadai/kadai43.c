#include <stdio.h>
#include <stdlib.h>
void main(void)
{

    int c;
    FILE *fin;
    fin = fopen("./test.txt", "r");
    if (fin) {
    while ((c = getc(fin)) != EOF)
        putchar(c);
    fclose(fin);
}
  
    
}
