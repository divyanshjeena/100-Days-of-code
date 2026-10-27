/*Q56: Write a program to read and print elements of a one-dimensional array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
10 20 30 40 50

Input 2:
3
5 15 25
Output 2:
5 15 25

*/

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day28_Q56.c -o Day28_Q56 } ; if ($?) { .\Day28_Q56 }
5
10 20 30 40 50
10 20 30 40 50
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day28_Q56.c -o Day28_Q56 } ; if ($?) { .\Day28_Q56 }
3
5 15 25
5 15 25
PS D:\100 days of code>

*/