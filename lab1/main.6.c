#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("new a = %d\n new b = %d",a,b);
}