#include <stdio.h>
int main()
{
    int P,R,T;
    printf("enter P and T and R");
    scanf("%d%d%d",&P,&R,&T);
    float S;
    S = (P*T*R)/100.0 ;
    printf("S =%f",S);
}
