#include<stdio.h>                                       
int main()
{
   int arr[10],even=0,odd=0;
   printf("enter the values \n");
   for(int i=0;i<10;i++)
   {
    printf("enter elements[%d]: ",i);
    scanf("%d",&arr[i]);

    if(arr[i]%2 ==0)
    {
      even = even + 1;
      }
    else 
   {
       odd = odd + 1;
   }
   }
   printf("total number of even element = %d \n",even);
   printf("total number of odd element = %d",odd);

}