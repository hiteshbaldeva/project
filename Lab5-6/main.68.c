#include <stdio.h>  // PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM 


int main()
{
    int a[3][3],j,i,result[3][3]={0};
    printf("enter the matrix elements in a");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)                              
       {
        scanf("%d",&a[i][j]);
       }
    }
    
    printf(" matrix a:\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d  ",a[i][j]);
       }
       printf("\n");
    }
    
    int b[3][3];
    printf("enter the matrix elements in b");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)                             
       {
        scanf("%d",&b[i][j]);
       }
    }
    
    printf(" matrix b:\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d  ",b[i][j]);
       }
       printf("\n");
    }
    
    printf("multiplication matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            for(int k=0;k<3;k++)
            {
                result[i][j]=result[i][j] +a[i][k] * b[k][j];

            }
        }
    }
    printf("multiplication result\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d  ",result[i][j]);
       }
       printf("\n");
    }

}