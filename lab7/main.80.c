#include <stdio.h>   // WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15
int fibonacci (int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
    printf("\n");
}
int main()
{
    
fibonacci(5);
fibonacci(10);
fibonacci(15);
}


