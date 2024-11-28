#include <stdio.h>         // PROGRAM TO SORT (SELECTION SORT) AN ARRAY.

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection sort algorithm
    for(int i = 0; i < n-1; i++)
     {
        int min_index = i;
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[j] < arr[min_index]) 
            {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


                                  