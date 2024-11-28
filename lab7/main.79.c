#include <stdio.h>                    //WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y
int interchange(int x ,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("exchange values\n");
    printf("x=%d\n",x);
    printf("y=%d",y);

}
int main()
{
    int x,y;
    printf("enter the number x and y: ");
    scanf("%d%d",&x,&y);
    interchange(x,y);
}