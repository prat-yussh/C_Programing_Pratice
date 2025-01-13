#include <stdio.h>

int InsertionSort()

int Print_Array(int arr[],int n)
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
    printf("Arry before sorting");
    Print_Array(arr,n);
    printf("Arry affter sorting");

    return 0;
}