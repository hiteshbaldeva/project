#include <stdio.h>                          
int main()
{
  int arr1_[10],sum[10],i;
  printf("enter the values of array 1 \n");
  for(i=0;i<10;i++)
  {
    printf("enter the arr1_[%d] :",i);
  scanf("%d",&arr1_[i]);
  
  }
  int arr2_[10];
  printf("enter the values of array 2 \n");
  for(i=0;i<10;i++)
  {
    printf("enter the arr2_[%d] :",i);
  scanf("%d",&arr2_[i]);
  
  }
for(i=0;i<10;i++)  
  {sum[i] = arr1_[i] + arr2_[i];
  
  printf("%d\t",sum[i]);
  
  
  
  }
  



}