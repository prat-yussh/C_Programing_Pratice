/*
Question:-2
Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.
*/

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