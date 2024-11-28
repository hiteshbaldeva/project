#include <stdio.h>                         
int main()
{
     int a[3][3],i,j;
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
    printf("Sum of Row elements: \n");
    
    for (i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
       { 
        sum = sum + a[i][j] ;
       
       }
        printf("Sum of Row %d : %d\n",i+1,sum);
       
    }


}