/*
Question:-2
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>

void fun1(int);

void fun1(int i)
{
    int *b=&i;
    printf("the adress of i after passing it to a function variable is %p", b); //the adrss will be diffrent because there is copy of i variable  gone in the function.
}

int main()
{
    int i=10;
    int *ptr=&i;
    printf("the adress of i in main is %p\n", ptr);
    fun1(i);   
    return 0;
}