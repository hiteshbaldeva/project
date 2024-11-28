#include <stdio.h>
int main()
{
    int i,j,z;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
      {
        printf(" ");
      }
        for(z=1;z<=i;z++)
      {
         printf("%d",z);
      }
       printf("\n");
    }
}