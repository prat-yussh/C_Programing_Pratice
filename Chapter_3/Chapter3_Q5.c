/*
Question:-5
Write a program to determine whether a character entered by the user is 
lowercase or not. 
*/

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