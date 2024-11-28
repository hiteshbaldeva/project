#include <stdio.h>
int main()
{
    int a,b,i=1,result=1;
    printf("enter the base and power ");
    scanf("%d%d",&a,&b);
    while(i<=b)
    {
        result= result*a;
        i=i+1;
    }
        printf("result=%d",result);
}