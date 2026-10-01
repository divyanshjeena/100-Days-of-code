/*Q47: Write a program to print the following pattern:

*
**
***
****
*****


Sample Test Case:
Output:
*
**
***
****
*****

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day24_Q47.c -o Day24_Q47 } ; if ($?) { .\Day24_Q47 }
*
**
***
****
*****
PS D:\100 days of code>

*/