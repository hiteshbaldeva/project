#include <stdio.h>              // PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY
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
   int number,position,count=0;
   printf("enter the number : ");
   scanf("%d",&number);
   
   for(i=0;i<n;i++)
   {
      position = i+1;
      if(number == a[i])
      
      {printf("position = %d\n",position);
      count=count+1;
      }
     
      
   }
    printf("count=%d",count);
   
}                                  
