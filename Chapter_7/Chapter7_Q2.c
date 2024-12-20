/*
If S[3] is a 1-D array of integers then *(S+3) refers to the third element: 
(i) True.  
(ii) False.  
(iii) Depends.
*/
#include <stdio.h>
int main()
{
    int S[3]={1,2,3};
    int* ptr=S;
    ptr=S+2;
    printf("The value is %d", *ptr);
    return 0;
}