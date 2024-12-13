/*
Question:-7
Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). 
*/
#include <stdio.h>
int main()
{
    int num=8;
    int mul=0, sum=0;

    for(int i=1;i<11;i++)
    {
        mul= num*i;
        sum=mul+sum;
        printf("%d * %d = %d\n", num, i, mul);
    }
    printf("\nthe sum of the numbers occurring in the multiplication table of 8 is:%d\n\n", sum);
    return 0;
}