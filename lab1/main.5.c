#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("swap  value = %d,%d",a,b);
}