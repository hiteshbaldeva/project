#include <stdio.h>
int main()
{
    int M,P,C,E;
    printf("enter P,C,E,M");
    printf("marks of physics out off 200\n");
    printf("marks of chemistry out off 200\n");
    printf("marks of maths out off 200\n");
    printf("marks of entrance out off 100\n");
    scanf("%d%d%d%d",&P,&C,&E,&M);
    int cutoff_marks  = (M/2 + P/2 + C/2 + E);
    printf("cutoff_marks =%d",cutoff_marks );
}