/*
Question:-11
Write a program to check whether a given number is prime or not while and do-while loop loops.
*/
#include <stdio.h>
int main()
{
    //Using while loop
    int num, i = 2, prime = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        prime = 1;
    }
    else
    {
        while (i < num)
        {
            if (num % i == 0)
            {
                prime = 1;
                break;
            }
            i++;
        }
    }

    if (prime)
    {
        printf("The number %d is not prime\n", num);
    }
    else
    {
        printf("The number %d is prime\n", num);
    }


    //Using do-while loop
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);

    if (num1 == 0 || num1 == 1)
    {
        prime;
    }
    else
    {
        do
        {
            if (num1 % i == 0)
            {
                prime = 1;
                break;
            }
            i++;
        } while (i < num1);
    }

    if (prime)
    {
        printf("The number %d is not prime", num1);
    }
    else
    {
        printf("The number %d is prime", num1);
    }

    return 0;
} 