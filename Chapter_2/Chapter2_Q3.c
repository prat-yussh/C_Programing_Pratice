/*
Question:-3
Write a program to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>
int main()
{
    int a=97;

    if(97%a==0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }

    return 0;
}