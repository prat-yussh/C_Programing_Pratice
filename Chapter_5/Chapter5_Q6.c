/*
Question:-6
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include <stdio.h>

int sum(int);

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int AddOfNum=n+sum(n-1);
    return AddOfNum;
}

int main()
{
    int a;
    printf("ENter a number to calculate the sum of first 'n' natural numbers");
    scanf("%d", &a);

    printf("The sum of first '%d' natural numbers is:%d", a, sum(a));

    return 0;
}