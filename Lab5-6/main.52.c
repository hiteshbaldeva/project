#include <stdio.h>
int main()
{
    int i,j,z,x;
    for(i=1;i<=5;i++)                                  
    {
        for(j=4;j>=i;j--)
       {
         printf(" ");
        }
        for(z=1;z<=i;z++)
        {
            printf("%d",z);
        }
        
        for(x=i;x>1;x--)
       {
         printf("%d",x-1);
       }
        printf("\n");
     }
}