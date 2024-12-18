/*
Question:-5
Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main().
*/
#include <stdio.h>

void SumAvg(int*, int*, int*, float*);

void SumAvg(int* x,int* y,int* sum, float* avg)
{
    *sum=*x+*y;
    *avg=*sum/2.0;
}

int main()
{
    int a=50,b=50,sum;
    float avg;
    SumAvg(&a,&b,&sum,&avg);
    printf("The sum is %d and the avrage is %2f", sum, avg);
    return 0;
}