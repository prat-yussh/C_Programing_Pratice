/*
 Create a 2-d array by taking input from the user. Write a display function to 
print the content of this 2-d array on the screen.
*/
#include <stdio.h>
int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter The value[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value is [%d][%d]=%d\n", i, j, arr[i][j]);
        }
        
    }
    return 0;
}