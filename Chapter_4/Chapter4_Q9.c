/*
Question:-9
Write a program to calculate the factorial of a given number using a while loop.
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    int fact=1, i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is:%d", num, fact);

    return 0;
}