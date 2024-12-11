/*
Question:-1
 Which of the following is invalid in C? 
a. int a=1; int b = a; 
b. int v = 3*3; 
c. char dt = ‘21 dec 2020’;
#include <stdio.h>
int main()
{
    int a=1; int b = a; 
    int v = 3*3; 
    printf("This is invalid dt = ‘21 dec 2020’;")
    return 0;
}
*/

/*
Question:-2
What data type will 3.0/8 – 2 return? 
#include <stdio.h>
int main()
{
    float data=(3.0/8) - 2;
    printf("%f", data);
    return 0;
}
*/

/*
Question:-3
Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>
int main()
{
    int a=97;

    if(97%a==0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }

    return 0;
}
*/

/*
Question:-4
Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
#include <stdio.h>
int main()
{
    int x=2, y=3, z=3, k=1;

    int num=3*x/y - z+k; //Assosiativity-Left to Right

    printf("%d", num);
    return 0;
}
*/

/*
Question:-5
3.0 + 1 will be: 
a. Integer. 
b. Floating point number. 
c. Character. 
#include <stdio.h>
int main()
{
    float f=3.0+1; //the output will be floating point number because of type coverstion

    printf("%f", f);

    return 0;
}
*/