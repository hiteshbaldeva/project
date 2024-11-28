#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the number a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d = a>b?a:b;
    e = d>c?d:c;
    printf("the maximum number = %d",e);
}




