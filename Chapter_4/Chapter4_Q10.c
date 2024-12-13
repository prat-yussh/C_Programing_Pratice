/*
Question:-10
Write a program to check whether a given number is prime or not using loops
*/

#include <stdio.h>
int main()
{
    int num, prime = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        prime = 1;
    }
    else
    {

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0 && num != 2)
            {
                prime = 1;
            }
        }
    }

    if (prime)
    {
        printf("The number %d is not prime", num);
    }
    else
    {
        printf("The number %d is prime", num);
    }

    return 0;
}