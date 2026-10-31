/*Q59: Write a program to count even and odd numbers in an array.


Sample Test Cases:
Input 1:
5
10 15 20 25 30
Output 1:
Even = 3
Odd = 2

Input 2:
6
1 2 3 4 5 6
Output 2:
Even = 3
Odd = 3

Input 3:
4
2 4 6 8
Output 3:
Even = 4
Odd = 0

*/

#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day30_Q59.c -o Day30_Q59 } ; if ($?) { .\Day30_Q59 }
5
10 15 20 25 30
Even = 3
Odd = 2
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day30_Q59.c -o Day30_Q59 } ; if ($?) { .\Day30_Q59 }
6
1 2 3 4 5 6
Even = 3
Odd = 3
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day30_Q59.c -o Day30_Q59 } ; if ($?) { .\Day30_Q59 }
4
2 4 6 8
Even = 4
Odd = 0
PS D:\100 days of code>

*/