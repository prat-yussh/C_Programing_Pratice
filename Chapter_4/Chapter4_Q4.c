/*
Question:-4
What can be done using one type of loop can also be done using the other two 
types of loops – true or false?
*/

#include <stdio.h>
int main()
{
    //true one thing can also done using another types of loop. 
    //Example sum of first 10 number using three loop.

    //using while loop
    int i=1;
    int sum=0;
    while (i<=10)
    {
        sum=i+sum;
        i++;
    }
    
    printf("sum of first 10 number is using while loop:%d\n", sum);

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