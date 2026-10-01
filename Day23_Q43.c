/*Q43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong Number

Input 2:
40585
Output 2:
Strong Number

Input 3:
123
Output 3:
Not Strong Number

*/

#include <stdio.h>
int main()
{
    int n, original, digit, factorial, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        factorial = 1;

        for(int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day22_Q43.c -o Day22_Q43 } ; if ($?) { .\Day22_Q43 }
145
Strong Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day22_Q43.c -o Day22_Q43 } ; if ($?) { .\Day22_Q43 }
40585
Strong Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day22_Q43.c -o Day22_Q43 } ; if ($?) { .\Day22_Q43 }
123
Not Strong Number
PS D:\100 days of code>

*/