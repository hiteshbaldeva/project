#include <stdio.h>                 //PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY
int main()
{
   int n,i;
   printf("enter the number of elements : ");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
     printf("enter the a[%d] :",i);
     scanf("%d",&a[i]);
   }
   int number,position;
   printf("enter the number : ");
   scanf("%d",&number);
   
   for(i=0;i<n;i++)
   {
      position = i+1;
      if(number == a[i])
      
      {
         printf("position = %d\n",position);
      break;
      }
      
   }
   if(i == n)
   {
      printf("number not found");
   }
}