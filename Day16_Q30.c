/*Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
12345
Output 1:
54321

Input 2:
9876
Output 2:
6789

Input 3:
1203
Output 3:
3021

*/

#include <stdio.h>
int main()
{
    int n, digit, reverse = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day15_Q30.c -o Day15_Q30 } ; if ($?) { .\Day15_Q30 }
12345
54321
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day15_Q30.c -o Day15_Q30 } ; if ($?) { .\Day15_Q30 }
9876
6789
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day15_Q30.c -o Day15_Q30 } ; if ($?) { .\Day15_Q30 }
1203
3021
PS D:\100 days of code>

*/