/*
Question:-6
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include <stdio.h>

// int sum(int);

// int sum(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n;
//     }
//     // int add=sum(n)+sum(n-1);
//     return sum(n) + sum(n - 1);
// }

int main()
{

    int n = 3,sum;
    // printf("ENter a number to calculate the sum of first 'n' natural numbers");
    // scanf("%d", &a);
    for (int i = 0; i < n; i++)
    {
        sum = n + n - 1;
    }

    printf("The sum of first 'n' natural numbers is:%d", sum);

    return 0;
}