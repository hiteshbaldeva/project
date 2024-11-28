#include <stdio.h>
int main()
{
    int h,m,s;
    printf("enter h and m and s");
    scanf("%d%d%d",&h,&m,&s);
    int sec = (3600*h + 60*m + 1*s);
    printf("sec=%d",sec);
}                                                         