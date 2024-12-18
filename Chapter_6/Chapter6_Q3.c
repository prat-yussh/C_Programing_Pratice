/*
Question:-3
Write a program to change the value of a variable to ten times of its current 
value.
*/
#include <stdio.h>
void ChangeTo10Times(int*);

void ChangeTo10Times(int* a)
{
     *a=*a*10;
}

int main()
{
    int a=10;
    printf("The value of a %d", a);
    ChangeTo10Times(&a);
    printf("The value of a %d", a);
    return 0;
}