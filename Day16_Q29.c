/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
6
Output 2:
720

Input 3:
0
Output 3:
1

*/

#include <stdio.h>
int main()
{
    int n, factorial = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day15_Q29.c -o Day15_Q29 } ; if ($?) { .\Day15_Q29 }
5
120
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day15_Q29.c -o Day15_Q29 } ; if ($?) { .\Day15_Q29 }
6
720
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day15_Q29.c -o Day15_Q29 } ; if ($?) { .\Day15_Q29 }
0
1
PS D:\100 days of code>

*/