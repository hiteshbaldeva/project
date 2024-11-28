#include <stdio.h>
int main()
{
    system("cls");
    int n,sum=0;

    while(n>=0)
    { 
        printf("Enter a number(positive): ");
        scanf("%d",&n);
        sum=sum+n;

        
    }
    
    printf("Sum of the numbers: %d",sum-(n) );

}
