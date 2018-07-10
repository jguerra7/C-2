



#include <stdio.h>


void print_Array(int arr[] , int size){
       
       
       for(size_t i = 0; i < size; i++)
       {
           /* code */
           printf( "%8d \n",arr[i]);
       }
       
   }
void main(void)
{

    int Array[80] = {80,12,33,55};
    print_Array(Array,80);

   

   

}
