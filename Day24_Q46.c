/*Q46: Write a program to print the following pattern:

*****
*****
*****
*****
*****


Sample Test Case:
Output:
*****
*****
*****
*****
*****

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day23_Q46.c -o Day23_Q46 } ; if ($?) { .\Day23_Q46 }
*****
*****
*****
*****
*****
PS D:\100 days of code>

*/