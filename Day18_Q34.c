/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime Number

Input 2:
10
Output 2:
Not Prime Number

Input 3:
2
Output 3:
Prime Number

*/

#include <stdio.h>
int main()
{
    int n, count = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day17_Q34.c -o Day17_Q34 } ; if ($?) { .\Day17_Q34 }
7
Prime Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day17_Q34.c -o Day17_Q34 } ; if ($?) { .\Day17_Q34 }
10
Not Prime Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day17_Q34.c -o Day17_Q34 } ; if ($?) { .\Day17_Q34 }
2
Prime Number
PS D:\100 days of code>

*/