#include <stdio.h>

// Insertion_Sort()
// {

// }

int Print_Array(arr[],n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[]={12,11,13,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    Print_Array(arr,n);
   

    return 0;
}