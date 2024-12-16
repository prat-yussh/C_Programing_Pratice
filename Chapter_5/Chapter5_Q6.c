/*
Question:-6
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include <stdio.h>

int sum(int);

int sum(int n)
{
if(n==0 || n==1)
{
    return 1;
}

    int add=sum(n)+sum(n-1);
    return add;
}

int main()
{

    int a;
    printf("ENter a number to calculate the sum of first 'n' natural numbers");
    scanf("%d", &a);

    sum(a);
    
    return 0;
}