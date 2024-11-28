#include <stdio.h>
int main()
{
    int i=1,N,s;
    printf("enter the number of terms");
    scanf("%d",&N);
    while(i<=N)
     {
        s=i*i;
        printf("%d ",s);
        i++;
     }
}