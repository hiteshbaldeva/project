#include <stdio.h>                   // WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
int palindrome(int a)
{
    int b,sum=0;
    int c = a;
    while(a!=0)
    {
        b = a%10;
        a = a/10;
        sum = (sum*10 + b);
        }
         printf("reversed number =%d\n",sum);
        if(sum == c)
        printf("number is palindrome");
        else
        printf("number is not palindrome");
}
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    palindrome(a);
}