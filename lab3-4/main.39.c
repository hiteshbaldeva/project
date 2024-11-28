#include <stdio.h>                   //PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(int i = 1;i <= n-1;i++)
    { printf("%d/%d! + ",i,i);}

    printf("%d/%d!",n,n);
}