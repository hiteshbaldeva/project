#include <stdio.h>
int main()
{
    int num,sum=0,q,temp;
    printf("enter the num");                    
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        q = temp%10 ;
        sum = sum + q*q*q ;
        temp = temp/10 ;
    }
    printf("sum=%d\n",sum);
    if(sum==num) 
    printf("%d is an armstrong number",num);
    else
    printf("%d is not a armstrong number",num) ;  
}