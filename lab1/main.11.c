#include <stdio.h>
int main()
{
    int seconds;
    printf("enter the seconds");
    scanf("%d",&seconds);
    int hr,min,sec;
    hr = seconds/3600 ;
    min = (seconds - hr*3600)/60 ;
    sec = (seconds - hr*3600 - min*60);
    printf("hr = %d\nmin = %d\nsec = %d",hr,min,sec);
}