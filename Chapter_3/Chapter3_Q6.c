/*
Question:-6
Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    printf("Enter third number");
    scanf("%d", &c);
    printf("Enter fourth number");
    scanf("%d", &d);

    if(a>b && a>c && a>d)
    {
        printf("First number:-%d is greater", a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("second number:-%d is greater", b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("third number:-%d is greater", c);
    }
    else if(d>a && d>b && d>c)
    {
        printf("fourth number:-%d is greater", d);
    }

    return 0;
}