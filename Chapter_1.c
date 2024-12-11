/*
Questio:-4
Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest.
*/
#include <stdio.h>
int main()
{
    float p=34.11;
    int r=85;
    int t=5;

    printf("the simple interest is %f:", (p*r*t)/100);
    return 0;
}

/*
Questio:-3
Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).
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
*/

/*
Questio:-2
Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.
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
*/

/*
Questio:-1
Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    printf("the area pf the rectangle is:%d", a*a);
    return 0;
}

*/