/*
Question:-1
What will be the output of this program 
int a = 10; 
if (a = 11) 
    printf("I am 11"); 
else  
    printf("I am not 11"); 

#include <stdio.h>
int main()
{
    // int a = 10; 
    if (a = 11) //the out will be I am 11 because the condition is non zero element so the condition is true. 
    {
        printf("I am 11"); 
    }
    else  
    {
        printf("I am not 11"); 
    }
    return 0;
}
*/

/*
Question:-2
Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.

#include <stdio.h>
int main()
{

    int first;
    printf("Enter the first subject mark");
    scanf("%d", &first);

    int second;
    printf("Enter the second subject mark");
    scanf("%d", &second);

    int third;
    printf("Enter the third subject mark");
    scanf("%d", &third);

    int avrage=(first+second+third)/3;

    if(avrage>=40)
    {
        if(first>=33)
        {
            if(second>=33)
            {
                if(third>=33)
                {
                    printf("You passed the exam and the overall percentage is %d", avrage);
                }
                else
                {
                    printf("You failed the exam becuse in one subject you achive less than 33 and the overall percentage is %d", avrage);
                }
            }
        }
    }

    return 0;
}
*/

/*
Question:-3
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
                Income Slab                       Tax  
                2.5 – 5.0L                        5% 
                5.0L - 10.0L                      20% 
                Above 10.0L                       30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user. 

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
*/

/*
Question:-4
Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check its a leap year or not");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || (year%4==0 && year%100==0 && year%400==0))
    {
        printf("Leap yaer");
    }
    else
    {
        printf("is not a leap year");
    }
    
    return 0;
}
*/

/*
Question:-5
Write a program to determine whether a character entered by the user is 
lowercase or not. 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charcter to check lower case or not:");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122)
    {
        printf("%c is a Lower case", ch);
    }
    else
    {
        printf("%c is not a lower case", ch);
    }
    return 0;
}
*/

/*
Question:-6
Write a program to find greatest of four numbers entered by the user.

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
*/