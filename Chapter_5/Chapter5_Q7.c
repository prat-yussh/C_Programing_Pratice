/*
Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/
#include <stdio.h>

int display(int);

int display(int n)
{
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;

    display(n);

    return 0;
}