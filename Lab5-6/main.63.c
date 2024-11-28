#include <stdio.h>                        
int main()
{
 int a[3][3],i,j,max,min;
 printf("enter the matrix elements\n");
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

    max = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
         
        }
    }
    printf("maximum elements = %d\n",max);

    min= a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]<min)
            min=a[i][j];
         
        }
    }
    printf("minimum elements = %d",min);
}                                        