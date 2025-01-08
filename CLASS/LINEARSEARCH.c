#include <stdio.h>

int LinearSearch(int arr[], int search, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==search)
        {
            return i;
        }
    }
    return -1;
    
}
int main()
{
    int arr[]={10,20,30,40,50};
    int search;
    int size=5;
    printf("Enter the number you want to search:");
    scanf("%d", &search);
    int index=LinearSearch(arr, search, size);

    if (index!=-1)
    {
        printf("The number %d at index is %d", search, index);
    }
    else
    {
        printf("The number %d is not in the list");
    }
    
    return 0;
}