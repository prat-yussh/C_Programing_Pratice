/*
Question:-9
Create a three–dimensional array and print the address of its elements in
increasing order.
*/
#include <stdio.h>
int main()
{
    int arr[3][2][2] = {{{1, 2},{3, 4}},{{5, 6},{7, 8}},{{9,10},{11,12}}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("arrr[%d][%d][%d]=%u\n", i, j, k, &arr[i][j][k]);
            }
            
        }
        
    }
    

    return 0;
}