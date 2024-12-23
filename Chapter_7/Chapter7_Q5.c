/*
Question:-5
Write a program containing a function which reverses the array passed to it.
*/
#include <stdio.h>

void Array_Reversse(int*);

void Array_Reversse(int arr[])
{
    int *start = arr;
    int *end = start + 4;

    for (int i = 0; i < 5; i++)
    {
        printf("Arrray beffore swapping arr[%d]=%d\n", i, arr[i]);
    }
    
    while (start<end)
    {
        int var=*start;
        *start=*end;
        *end=var;

        start++;
        end--;

    }

    for (int i = 0; i < 5; i++)
    {
        printf("Arrray after swapping arr[%d]=%d\n", i, arr[i]);
    }
    
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    Array_Reversse(arr);
    return 0;
}