#include <stdio.h>
int main()
{
    int i,j,z;
    for(i=1;i<=4;i++)                                  
    {
        for(j=4;j>=i;j--)
       {
         printf(" ");
        }
        for(z=1;z<=2*i-1;z++)
        {
            printf("*");
        }
         
        printf("\n");
       
     }
     for(i=3;i>=1;i--)                                  
    {
        for(j=4;j>=i;j--)
       {
         printf(" ");
        }
        for(z=1;z<=2*i-1;z++)
        {
            printf("*");
        }
         
        printf("\n");
       
     }

     
}