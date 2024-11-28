#include <stdio.h>
int main()
{
    int N, i=0,s_even=0,s_odd=0;
    printf("enter the number N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        if(i%2==0)
       { 
        s_even = s_even + i;
        }
        else 
        {
            s_odd = s_odd + i;
        }
        i=i+1;
    }
    printf("s_even=%d\n",s_even);
    printf("s_odd=%d",s_odd);
}