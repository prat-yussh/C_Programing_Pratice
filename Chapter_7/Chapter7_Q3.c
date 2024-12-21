/*
Question:-3
Write a program to create an array of 10 integers and store multiplication table of
5 in it.
*/
#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 1; i < 11; i++)
    {
        int a = 8;
        int mul = a * i;
        printf("Value at index [%d] is =%d\n", i, mul);
    }

    return 0;
}