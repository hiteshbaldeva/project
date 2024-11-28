#include<stdio.h>             //PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS
int main()
{
    int arr1_[10],i;
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
  int arr3_[10];
  for(i=0;i<10;i++)
  {
    arr3_[i] = arr1_[i];
    arr1_[i]=arr2_[i];
    arr2_[i]=arr3_[i];
  }
  printf("swapped arrays\n");
  printf("swapped array 1:\n");
  for(int i = 0;i<10;i++)
  {

  printf("%d  ",arr1_[i]);
  }
  printf("\nswapped array 2:\n");
  for(int i = 0;i<10;i++)
  {

  printf("%d  ",arr2_[i]);
  }
}