/*
Question:-5
What will the following line produce in a C program: 
int a = 4; 
printf("%d %d %d \n", a, ++a, a++);
*/
#include <stdio.h>
int main()
{
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);// the output can be diffrent depending on the compiler:-4 5 5 or 6 6 4
    return 0;
}