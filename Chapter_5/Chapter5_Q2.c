/*
Question:-2
Write a function to convert Celsius temperature into Fahrenheit
*/

#include <stdio.h>
int converter(int);

int converter(int x)
{
    int converter = (x * 9 / 5) + 32;
    printf("The temprature is:%d", converter);
    return converter;
}
int main()
{
    converter(25);
    return 0;
}