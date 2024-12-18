/*
Question:-1
Write a program to print the address of a variable. Use this address to get the value of the variable.
*/
#include <stdio.h>
int main()
{
    int a=7;
    int* b=&a;
    printf("The addres of a is %p\n", b);
    printf("The value of a using adrees of a is %d", *(&a));
    return 0;
}