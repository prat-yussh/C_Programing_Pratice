/*
Question:-4
Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
*/

#include <stdio.h>
int main()
{
    int x=2, y=3, z=3, k=1;

    int num=3*x/y - z+k; //Assosiativity-Left to Right

    printf("%d", num);
    return 0;
}