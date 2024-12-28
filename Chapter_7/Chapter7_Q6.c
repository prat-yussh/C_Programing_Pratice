/*
Question:-6
Write a program containing functions which counts the number of positive
integers in an array.
*/
#include <stdio.h>

int CountPostiveNum(int arr[])
{
    int postive;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            postive = postive + 1;
        }
        else
        {
            postive = postive + 0;
        }
    }
    printf("There are %d positive numbers in the array", postive);
    return postive; 
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    CountPostiveNum(arr);

    return 0;
}