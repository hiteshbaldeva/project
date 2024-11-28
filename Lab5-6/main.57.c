#include <stdio.h>                    
int main()
{
    int n,i,max1,max2;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements\n");
    for ( i=0;i<n;i++)
{  
     printf("enter the arr[%d]:",i);
    scanf("%d",&arr[i]);
}
    
    if(arr[0]>arr[1])
    {
        
        max1 = arr[0];
        max2 = arr[1];
    }
    else if(arr[0]<arr[1])
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    else if(arr[0]==arr[1])     //do not use the first three element same
    {
         max1 = arr[0];
        max2 = arr[2];
    }

    for(int i = 2; i<n; i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
 
    }

    

    printf("The largest element is: %d\n",max1);
    printf("The second largest element is: %d\n",max2);


}
