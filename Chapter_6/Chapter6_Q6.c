/*
Question:-6
Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable.
*/
#include <stdio.h>
int main()
{
    int i=10;
    int* ptr=&i;
    int** ptr1;
    ptr1=&ptr;
    printf("the value of a variable i by using 'pointer to pointe' type of variable %d", **(ptr1));
    return 0;
}