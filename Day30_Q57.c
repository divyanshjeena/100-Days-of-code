/*Q57: Write a program to find the sum of array elements.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
150

Input 2:
4
5 10 15 20
Output 2:
50

Input 3:
3
2 4 6
Output 3:
12

*/

#include <stdio.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    printf("%d", sum);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day29_Q57.c -o Day29_Q57 } ; if ($?) { .\Day29_Q57 }
5
10 20 30 40 50
150
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day29_Q57.c -o Day29_Q57 } ; if ($?) { .\Day29_Q57 }
4
5 10 15 20
50
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day29_Q57.c -o Day29_Q57 } ; if ($?) { .\Day29_Q57 }
3
2 4 6
12
PS D:\100 days of code>

*/