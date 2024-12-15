/*
Question:-3
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2.
*/

#include <stdio.h>
int ForceOfAttraction(float);

int ForceOfAttraction(float m)
{
    const float g=9.8;
    float ForceOfAttraction=m*g;
    printf("ForceOfAttraction:%f", ForceOfAttraction);
    return ForceOfAttraction;
}

int main()
{
    ForceOfAttraction(45.0);
    return 0;
}