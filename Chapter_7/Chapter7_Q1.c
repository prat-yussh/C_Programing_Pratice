/*
Question:-1
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the 
array.
*/
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=arr;

    printf("Here the ptr points to the first element ptr=%d\n", *ptr);
    ptr=ptr+2;

    printf("Here the ptr points to the 3rd element after addition '(ptr+2)' ptr=%d", *ptr);
    
    return 0;
}