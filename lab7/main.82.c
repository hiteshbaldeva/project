#include <stdio.h>          // WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. NCR = (!N/(!R*!(N-R)));
double factorial (int n )
{
    double  i=1 ;
    double factorial =1;
    for(i=1;i<=n;i++)
    {
        factorial = factorial*i;
    
    }
   return factorial;
}
int main()
{
    int n,r;
    printf("enter the n and r");
    scanf("%d%d",&n,&r);
    printf("ncr=%lf",factorial(n)/(factorial(r)*factorial(n-r)));
}