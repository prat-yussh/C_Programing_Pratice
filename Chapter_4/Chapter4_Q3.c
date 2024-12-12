/*
Question:-3
A do while loop is executed: 
a. At least once. 
b. At least twice. 
c. At most once. 
*/
#include <stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("Hello World!\n"); //a do while loop excecuted atleast once
        i++;
    }
    while(i<5);

    return 0;
}