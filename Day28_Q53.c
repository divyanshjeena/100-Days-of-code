/*Q53: Write a program to print the following pattern:

*
***
*****
*******
*********
*******
*****
***
*


Sample Test Case:
Output:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i = 4; i >= 1; i--)
    {
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day27_Q53.c -o Day27_Q53 } ; if ($?) { .\Day27_Q53 }
*
***
*****
*******
*********
*******
*****
***
*
PS D:\100 days of code>

*/