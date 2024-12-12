/*
Question:-3
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
                Income Slab                       Tax  
                2.5 – 5.0L                        5% 
                5.0L - 10.0L                      20% 
                Above 10.0L                       30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user. 
*/

#include <stdio.h>
int main()
{
    float income;
    printf("Enter your income to check how much tax you will give to the goverment:");
    scanf("%f", &income);

    if(income<250000)
    {
        printf("you are not eligible to give the tax");
    }
    else if (income>=250000 && income<=500000)
    {
        printf("you need to give 5 percent Tax.");
    }
    else if (income>=500000 && income<=1000000)
    {
        printf("you need to give 20 percent Tax.");
    }
    else if (income>=1000000)
    {
        printf("you need to give 30 percent Tax.");
    }

    return 0;
}