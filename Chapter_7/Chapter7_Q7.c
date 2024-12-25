/*
Question:-7
Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.
*/
#include <stdio.h>

// int mul(int x);

void mul(int x[3][10])
{
    for (int i = 2; i < 10; i++)
    {
        if (i == 2)
        {
            for (int j = 1; j < 11; j++)
            {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }
        else if (i == 7)
        {
            for (int j = 1; j < 11; j++)
            {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }
        else if (i == 9)
        {
            for (int j = 1; j < 11; j++)
            {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }
    }
}

int main()
{
    int arr[3][10];
    mul(arr[3][10]);

    return 0;
}