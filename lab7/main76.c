#include <stdio.h>                           //WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD
int even (int a)
 {
    if(a%2==0)
    printf("number is even");
    else
    printf("number is odd");

 }
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    even(a);
}
