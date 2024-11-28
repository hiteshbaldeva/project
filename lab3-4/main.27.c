#include <stdio.h>
int main()
{
    int b,num;
    printf("enter a positive number");
    scanf("%d",&num);
    int flag=1;
    if (num==1)
    flag=0;

    
    for(b=2;b<=num/2;b++)
    {
        if(num%b==0)
        {
            flag=0;
            
        }
    }
if (flag==1)
printf("%d is prime",num);
else
printf("%d not prime",num);
}