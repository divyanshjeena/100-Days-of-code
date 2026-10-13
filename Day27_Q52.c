/*Q52: Write a program to print the following pattern:

  *
 ***
*****
 ***
  *


Sample Test Case:
Output:
  *
 ***
*****
 ***
  *

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i = 2; i >= 1; i--)
    {
        for(int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day26_Q52.c -o Day26_Q52 } ; if ($?) { .\Day26_Q52 }
  *
 ***
*****
 ***
  *
PS D:\100 days of code>

*/