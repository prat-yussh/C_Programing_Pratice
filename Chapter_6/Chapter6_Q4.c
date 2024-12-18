/*
Question:-4
Write a function and pass the value by reference. 
*/
#include <stdio.h>

void ref(int*);

void ref(int* x)
{
    printf("%d", *x);
}
int main()
{
    int a=72;
    ref(&a);
    return 0;
}