#include <stdio.h>
int main() 
{
    int sec, h,s, m, d; 
     printf("enter sec");
    scanf("%d", &sec);
	d = (sec/86400);
    h = (sec - (86400*d))/3600;
    m = (sec -(86400*d)-3600*h)/60;
    s = (sec -(86400*d)-(3600*h)-60*m);
    printf("d=%d",d);
    printf("h=%d",h);
    printf("m=%d",m);
    printf("s=%d",s);
}