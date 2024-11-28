#include <stdio.h>
int main ()
{
    int i=1,number,factorial=1;
    printf("enter the number");
    scanf("%d",&number);
    while (i<=number)
    {
        factorial = factorial*i;
        i=i+1;
    }
    printf("factorial=%d",factorial);
}