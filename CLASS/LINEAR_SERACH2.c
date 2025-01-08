#include <stdio.h>

int LinearSearch(int arr[], int search, int size)
{
    int allindex=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==search)
        {
            printf("The index is at:%d\n", i);
            allindex=1;
        }
    }
    if (allindex==0)
    {
        printf("The number %d is not in the list", search);
    }
    
    
}
int main()
{
    int arr[]={10,20,10,30,40,50};
    int search;
    int size=sizeof(arr)/sizeof(int);
    printf("Enter the number you want to search:");
    scanf("%d", &search);
    LinearSearch(arr, search, size);
    
    return 0;
}