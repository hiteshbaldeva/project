#include <stdio.h>
int main()
{
    
    int a,b,c,d,e;
    printf("enter a and b and c and d and e ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int total = (a+b+c+d+e);
    printf("Your total marks = %d\n",total);
      
    if (total>300)
    { printf("Division A");}
    else
    { printf("FAIL");}
}