



#include <stdio.h>


int print_Array(int arr[] , int size){
       
       int  sum = 0;
       for(int i = 0; i < size; i++)
       {
           /* code */
           sum  = sum + arr[i];
       }
       return sum;
 }

void get_Array(int arr[] ,int size){

   
    for(int i = 0; i < size; i++)
    {
        /* code */
         printf("整数を入力ください");
         scanf("%d",&arr[i]);
    }
    
}
void main(void)
{
    int Array[80];
    int size = 0;
    int sum ;
    printf("配列のサイズ入力ください");
    scanf("%d",&size);
    get_Array(Array,size);
    sum =  print_Array(Array,size);
    printf("合計　＝　%d",sum);
    
}
