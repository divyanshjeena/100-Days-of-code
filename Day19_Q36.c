/*Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
20 30
Output 2:
10

Input 3:
7 13
Output 3:
1

*/

#include <stdio.h>
int main()
{
    int a, b, hcf;

    scanf("%d%d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day18_Q36.c -o Day18_Q36 } ; if ($?) { .\Day18_Q36 }
12 18
6
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day18_Q36.c -o Day18_Q36 } ; if ($?) { .\Day18_Q36 }
20 30
10
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day18_Q36.c -o Day18_Q36 } ; if ($?) { .\Day18_Q36 }
7 13
1
PS D:\100 days of code>

*/