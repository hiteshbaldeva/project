#include<stdio.h>
int main()
{
    int gs,bs, da, hr;
    printf("Enter your Basic Salary ");
    scanf("%d",&bs);
    da=(bs*10)/100;
    hr= (bs*10)/100;
    gs=bs+da+hr;
    printf("Gross Salary is %d",gs);
}
