/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
5
Output 1:
25

Input 2:
10
Output 2:
100

*/

#include <stdio.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= 2 * n; i = i + 2)
    {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day14_Q27.c -o Day14_Q27 } ; if ($?) { .\Day14_Q27 }
5
25
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day14_Q27.c -o Day14_Q27 } ; if ($?) { .\Day14_Q27 }
10
100
PS D:\100 days of code>

*/