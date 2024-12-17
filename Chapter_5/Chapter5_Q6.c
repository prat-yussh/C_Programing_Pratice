/*
Question:-6
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include <stdio.h>

int sum(int);

int sum(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    // int add=sum(n)+sum(n-1);
    return sum(n) + sum(n - 1);
}

int main()
{

    int a = 2;
    // printf("ENter a number to calculate the sum of first 'n' natural numbers");
    // scanf("%d", &a);

    printf("The sum of first 'n' natural numbers is:%d", sum(a));

    return 0;
}