/*Q55: Write a program to print all the prime numbers from 1 to n.


Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

Input 3:
5
Output 3:
2 3 5

*/

#include <stdio.h>
int main()
{
    int n, count;

    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day28_Q55.c -o Day28_Q55 } ; if ($?) { .\Day28_Q55 }
10
2 3 5 7
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day28_Q55.c -o Day28_Q55 } ; if ($?) { .\Day28_Q55 }
20
2 3 5 7 11 13 17 19
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day28_Q55.c -o Day28_Q55 } ; if ($?) { .\Day28_Q55 }
5
2 3 5
PS D:\100 days of code>

*/