#include <stdio.h>          // PROGRAM TO SORT (BUBBLE SORT) AN ARRAY
int main()
{
    int n,p;
    printf("enter the number of terms");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("enter element[%d]: ",i);
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                p = a[i];
                a[i] = a[j];
                a[j] = p;
            }
        }
    }
    printf("sorted array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}