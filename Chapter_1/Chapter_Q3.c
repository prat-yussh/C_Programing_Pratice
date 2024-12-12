/*
Questio:-3
Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).
*/

#include <stdio.h>
int main()
{
    int c;
    printf("enter celcius to convert it into ferhanite:");
    scanf("%d", &c);
    
    float f=(c*9/5)+32;
    printf("the temperature is%f:", f);

    return 0;
}