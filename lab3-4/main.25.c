#include <stdio.h>                                                                                 
int main()
{
    int a,i,b;
    printf("enter the number a: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {   b=i*a;
        printf("%d",b);
        printf("\n");
    }
}