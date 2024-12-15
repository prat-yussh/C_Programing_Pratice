/*
Question:-1
Write a program using function to find average of three numbers.
*/
#include <stdio.h>

int avg(int,int ,int);


int avg(int x,int y,int z) 
{
    int avg=(x+y+z)/3;
    printf("The avrage of three number is:%d", avg);
    return avg;
}
int main()
{
    int a=10, b=20, c=30;
    avg(a,b,c);
    return 0;
}