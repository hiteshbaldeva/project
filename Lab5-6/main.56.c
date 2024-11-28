#include <stdio.h>
int main()
{
    int arr[10], zero=0, positive=0, negative=0;
    printf("enter the values:\n");
    for(int i=0; i<10;i++)
    {
        printf("enter element[%d]:",i);
        scanf("%d",&arr[i]);

    if( arr[i] == 0)
        {
           zero = zero + 1;
        }
        else if ( arr[i] > 0)
        {
            positive = positive + 1;
        }
        else
        {
            negative = negative + 1;
        }

    }
    printf("number of zero elements = %d \n",zero);
    printf("number of positive elements = %d \n",positive);
    printf("number of negative elements = %d \n",negative);

}