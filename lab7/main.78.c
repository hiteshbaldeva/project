#include <stdio.h>                 //WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT
int armstrong(int a)
{
    int q,sum=0;
    int c=a;
    while(a!=0)
    {
        q = a%10;
        sum = sum + q*q*q;
        a = a/10;
    }
    if(sum == c)
    printf("armsrtong number");
   else
   printf(" not armsrtong number");
}
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    armstrong(a);
}