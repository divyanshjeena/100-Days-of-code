/*Q26: Write a program to print numbers from 1 to n.


Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
10
Output 2:
1 2 3 4 5 6 7 8 9 10

*/

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q26.c -o Day13_Q26 } ; if ($?) { .\Day13_Q26 }
5
1 2 3 4 5
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q26.c -o Day13_Q26 } ; if ($?) { .\Day13_Q26 }
10
1 2 3 4 5 6 7 8 9 10
PS D:\100 days of code>

*/