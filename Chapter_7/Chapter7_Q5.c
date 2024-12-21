/*
Question:-5
Write a program containing a function which reverses the array passed to it.
*/
#include <stdio.h>

int Array_Reversse(int*);

int Array_Reversse(int arr[])
{
    int *start = arr;
    int *end = start + 4;

    for (int i = 0; i < 5; i++)
    {
        printf("Arrray before swapping arr[%d]=%d\n", i, arr[i]);
    }

    if(end>start)
    {
        start=end;
        // end=start;
        start++;
        // end--;
        printf("%d", *start);
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Array after swapping arr[%d]=%d\n", i, arr[i]);
    // }
    
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    Array_Reversse(arr);
    return 0;
}