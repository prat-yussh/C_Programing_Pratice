/*
Question:-8
Write a program to calculate the factorial of a given number using a for loop.
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=i*fact;
    }

    printf("The factorial of %d is :%d", num, fact);
    
    return 0;
}