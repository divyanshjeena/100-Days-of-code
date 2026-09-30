/*Q42: Write a program to check if a number is a perfect number.


Sample Test Cases:
Input 1:
6
Output 1:
Perfect Number

Input 2:
28
Output 2:
Perfect Number

Input 3:
12
Output 3:
Not Perfect Number

*/

#include <stdio.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day21_Q42.c -o Day21_Q42 } ; if ($?) { .\Day21_Q42 }
6
Perfect Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day21_Q42.c -o Day21_Q42 } ; if ($?) { .\Day21_Q42 }
28
Perfect Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day21_Q42.c -o Day21_Q42 } ; if ($?) { .\Day21_Q42 }
12
Not Perfect Number
PS D:\100 days of code>

*/