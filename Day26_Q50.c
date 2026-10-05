/*Q50: Write a program to print the following pattern:

*****
 ****
  ***
   **
    *


Sample Test Case:
Output:
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>
int main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day25_Q50.c -o Day25_Q50 } ; if ($?) { .\Day25_Q50 }
*****
 ****
  ***
   **
    *
PS D:\100 days of code>

*/