/*
Questio:-2
Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.
*/

#include <stdio.h>
int main()
{
    int r;
    int h=9;
    printf("enter the radius of the circle:");
    scanf("%d", &r);

    printf("the area of the circle is %f", 3.14*r*r*h);
    return 0;
}
