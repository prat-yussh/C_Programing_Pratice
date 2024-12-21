/*
Question:-4
3. Write a program to create an array of 10 integers and store multiplication table of 5 in it. 

Repeat problem 3 for a general input provided by the user using scanf.
*/
#include <stdio.h>
int main()
{
    int arr[10];
    int a;
    printf("Enter a number to store multiplication of that number ina array:");
    scanf("%d", &a);
    for (int i = 1; i < 11; i++)
    {
        int mul = a * i;
        printf("Value at index [%d] is =%d\n", i, mul);
    }

    return 0;
}