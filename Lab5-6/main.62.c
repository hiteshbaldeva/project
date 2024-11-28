      #include <stdio.h>
int main()
{
    int n;
    printf("enter the number of terms = ");
    scanf("%d",&n);
    int a1[n];
    for (int i=0;i<n;i++)
    {
        printf("enter element[%d]: ",i);                  
        scanf("%d",&a1[i]);
    }
    int a2[n];
    printf("reversed array\n");
    for(int i=0;i<n;i++)
    {
    a2[i]=a1[n-i-1];
    printf("%d  ",a2[i]);
    }
}