#include <stdio.h>                       //wRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM
void array()
{   int n,i;
    printf("enter the number of elments in array");
    scanf("%d",&n);
    int a[n];
   for(i=0;i<n;i++)
   {
    printf("array element a[%d]: ",i);
    scanf("%d",&a[i]);
   }
     int max = a[0];
   for(i=1;i<n;i++)
   {
    if(a[i]>max)
    max=a[i];
   }
   printf("maximum=%d",max);
}
int main()
{
     array();
}
