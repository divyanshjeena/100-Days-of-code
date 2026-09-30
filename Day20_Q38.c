/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
10

Input 2:
567
Output 2:
18

Input 3:
102
Output 3:
3

*/

#include <stdio.h>
int main()
{
    int n, digit, sum = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day19_Q38.c -o Day19_Q38 } ; if ($?) { .\Day19_Q38 }
1234
10
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day19_Q38.c -o Day19_Q38 } ; if ($?) { .\Day19_Q38 }
567
18
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day19_Q38.c -o Day19_Q38 } ; if ($?) { .\Day19_Q38 }
102
3
PS D:\100 days of code>

*/