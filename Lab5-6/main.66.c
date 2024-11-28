#include <stdio.h>
int main()
{
    int a[3][3],sum[3][3];
    printf("enter the matrix elements in a");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)                              
       {
        scanf("%d",&a[i][j]);
       }
    }
    
    printf(" matrix a:\n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
       {
        printf("%d  ",a[i][j]);
       }
       printf("\n");
    }
    
    int b[3][3];
    printf("enter the matrix elements in b");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)                             
       {
        scanf("%d",&b[i][j]);
       }
    }
    
    printf(" matrix b:\n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
       {
        printf("%d  ",b[i][j]);
       }
       printf("\n");
    }
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
       {
        sum[i][j] = a[i][j] + b[i][j];
       }
      
    }
    printf("Sum matrix: \n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
       {
        printf("%d  ",sum[i][j]);
       }
       printf("\n");
    }

}