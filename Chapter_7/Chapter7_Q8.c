/*
Question:-8
7. Create an array of size 3 x 10 containing multiplication tables of the given numbers respectively.
- >Repeat problem 7 for a custom input given by the user.
*/
#include <stdio.h>

int main()
{
    int arr[3][10];
    int num;
    printf("Enter how many multiplication table you need:");
    scanf("%d", &num);
    if (num > 0)
    {

        for (int i = 0; i < num; i++)
        {
            int mul;
            printf("Enter the positive number you need as a multiplication table:");
            scanf("%d", &mul);

            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = mul * (j+1);
            }
        }

        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("Multiplication Table = [%d][%d]=%d\n", i, j, arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter a positive number");
    }
    return 0;
}