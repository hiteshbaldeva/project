#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter the matrix elemnts");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++) 
       {
        scanf("%d",&a[i][j]);                                  
       }
    }
        printf("matrix elements: \n");  
        for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d  ",a[i][j]);
       }
       printf("\n");
    }
    printf("transpose of matrix\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf(" %d  ",a[j][i]);
       }
       printf("\n");
    }

    
}