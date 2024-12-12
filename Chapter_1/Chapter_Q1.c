/*
Questio:-1
Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.
*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    printf("the area pf the rectangle is:%d", a*a);
    return 0;
}