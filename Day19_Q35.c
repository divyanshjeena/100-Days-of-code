/*Q35: Write a program to print all factors of a given number.


Sample Test Cases:
Input 1:
12
Output 1:
1 2 3 4 6 12

Input 2:
10
Output 2:
1 2 5 10

Input 3:
7
Output 3:
1 7

*/

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day18_Q35.c -o Day18_Q35 } ; if ($?) { .\Day18_Q35 }
12
1 2 3 4 6 12
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day18_Q35.c -o Day18_Q35 } ; if ($?) { .\Day18_Q35 }
10
1 2 5 10
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day18_Q35.c -o Day18_Q35 } ; if ($?) { .\Day18_Q35 }
7
1 7
PS D:\100 days of code>

*/