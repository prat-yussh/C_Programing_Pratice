/*
Question:-10
Write a program to check whether a given number is prime or not using loops
*/

#include <stdio.h>
int main()
{
     int num;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i=1;i<=num;i++)
    {
        if(num%1==0 && num%num==0 && num%i!=0)
        {
            printf("prime number");
        }
        else
        {
            printf("not prime number");
        }
    }

    return 0;
}