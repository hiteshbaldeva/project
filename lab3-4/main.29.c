#include <stdio.h>
int main()
{
    int num,sum=0,q,temp;
    printf("enter the number");
    scanf("%d",&num);               
    temp=num;                                 // 121
    while(num!=0)              
    {
        q = num%10;
        sum = sum*10 + q;
        num = num/10;
    }
        
        if(temp==sum)
        {printf("palindrome");}
        else
        {printf("not");}
                                  

}