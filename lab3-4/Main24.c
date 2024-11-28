#include <stdio.h>
#include <math.h>
int main()
{
    int x,n;
    
    printf("Enter valur of x: ");
    scanf("%d",&x);

    printf("Enter value of n: ");
    scanf("%d",&n);

    if(n == 1)
    { printf("Y = %d",1+x);}

    else if(n == 2)
    { printf("Y = %d",(x/n)+1);}

    else if(n  == 3)
    { printf("Y = %d",pow(x,n)+1);}

    else if(n<1 || n>3)
    { printf("Y = %d",x*n + 1);}

   
}
