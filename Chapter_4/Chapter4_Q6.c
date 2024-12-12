/*
Question:-6
Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 
*/

#include <stdio.h>
int main()
{
    //using do-while loop
    int i1=1;
    int sum1=0;
    do
    {
        sum1=i1+sum1;
        i1++;
    } while (i1<=10);
    printf("sum of first 10 number is using do-while loop:%d\n", sum1);
    

    //using for loop
    int sum2=0;
    for(int i2=1;i2<=10;i2++)
    {
        sum2=i2+sum2;
    }
    printf("sum of first 10 number is using for loop:%d\n", sum2);
    return 0;
}