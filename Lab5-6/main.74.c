/* Given are one dimensional arrays A and B which are sorted in ascending order. 
Write a program to merge them into a single sorted array C that contains every 
item form array A and B, in ascending order. */
#include <stdio.h>
int main()
{
    int n,m,i,j ;
    printf("enter the number of elements in array a and b :");
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    printf("enter element of array a\n");
    for (i=0;i<n;i++)
    {
        printf("array element a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("enter element of array b\n");
    for (i=0;i<m;i++)
    {
        printf("array element b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    printf("\nsorted Array:\n");
    printf("sorted array a\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
     for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                int d = b[i];
                b[i] = b[j];
                b[j] = d;
            }
        }
    }
    printf("\n");
    printf("sorted array b\n");
    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);

    }
    int x =m+n;
    int c[x];
    printf("\narray c\n");
    for(int i = 0;i<x;i++)
    {
        if(i<m)
        {
            c[i] = a[i];
        }
        else 
        {
            c[i] = b[i-n];
        }
    }
    for(int i = 0;i<x;i++)
    {
        printf("%d ",c[i]);
    }
        for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(c[i]>c[j])
            {
                int e = c[i];
                c[i] = c[j];
                c[j] = e;
            }
        }
    }
    
     printf("\nsorted array c\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",c[i]);

    }
}

