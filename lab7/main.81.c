#include <stdio.h>       // WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
int prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int i,j;
    for(i=2;i<=n/2;i++)
    {
        if(n % i==0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
   printf(" %d",prime(n));
}