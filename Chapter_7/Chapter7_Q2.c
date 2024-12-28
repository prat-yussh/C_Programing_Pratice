/*
Question:-2
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
    ptr=S+3;  //The answer is false beacuse the index start from zero and we defined a 1d array with 3 contiguos memory the 'S' is by default defined to the 1st element and after '(S+3)' s is defined to the fourth elment but defined our array as 3 memory
    printf("The value is %d", *ptr);
    return 0;
}